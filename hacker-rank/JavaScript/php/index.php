<?php 
$attach_id = 144;

$html = sprintf( '<a href="#" class="attachment-delete" data-attach-id="%d"> <img src="%s" /></a>', $attach_id, '/images/del-img.png' );

echo $html;