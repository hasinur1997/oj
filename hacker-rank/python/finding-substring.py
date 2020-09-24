str = input()
substr = input()

str.count(substr)


Hi Richard,
There is an issue for google sheet integration. The issue is user authorization. It causes google OAuth grant limits. You can extend the limit. To do this please follow the google console documentation.
There is an app verification warning, but it doesn't impact. To remove the warning you have to verify the app. For more details please follow app verification documentation on google. 

First you have to create a project on google console https: // console.developers.google.com/Then create credentials and get the client id and client secret. 

For more details, please follow   https: // console.developers.google.com / instructions.

getting client id replace with existing client id  on following location: / weforms-pro/modules/google-sheets/class-integration-google-sheets.php
line no: 13 
getting client secret replace with existing client secret on following location: / weforms-pro/modules/google-sheets/class-integration-google-sheets.php
line no: 20 
