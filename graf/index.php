<!DOCTYPE HTML>
<html>
<head>
    <meta charset="UTF8">
    <title>In-Line Graph</title>
    <link href="style/style.css" rel="stylesheet" />
</head>

<body>
    <h1>Řádkový graf</h1>

    <form method="POST">
        <input type="text" name="val" placeholder="1, 2, 3,...">
        <input type="submit">
    </form>

    <?php
        $val = $_POST['val'];
        $exVal = array_map('intval', explode(',', $val)); 
        $data = ($exVal);
        sort($data);
        //var_dump($data);

        $myWidth;
        $maxVal = 0;

        foreach($data as $i){
            if ($i > $maxVal){
                $maxVal = $i;
            }
        }
        //var_dump($maxVal);

        for($i = 0; $i < count($data); $i++){
            $data[$i] = $data[$i] * 100 / $maxVal;
        }
        //var_dump($data);

        foreach ($data as $myWidth) {
            echo "<br>";
            echo "<div style=\"background: #3D8; width: $myWidth%; height: 100px\"></div>";
            echo "<br>";
        }
    ?>    
</body>
</html>