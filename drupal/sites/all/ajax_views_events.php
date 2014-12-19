<?php
$basa = mysql_connect("localhost", "fh7909gd_user", "Qwerty123") or die (mysql_error());
mysql_select_db("fh7909gd_user", $basa) or die (mysql_error());
// в какой кодировке получать данные от клиента
mysql_query('set character_set_client="utf8"');
// в какой кодировке получать данные от БД для вывода клиенту
mysql_query('set character_set_results="utf8"');
mysql_query('set character_set_database="utf8"');
$views_events = mysql_query('SELECT * FROM events');
while ($row = mysql_fetch_array($views_events)) {
    echo '<table>
			<tr><td>' . $row['theme'] . '</td></tr>
			</table>';
}
mysql_close($basa);
