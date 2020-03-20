#pragma once
const char INDEX_HTML[] PROGMEM  =  "<html>\r\n"
"<head>\r\n"
"    <meta charset=\"utf-8\">\r\n"
"    <meta name=\"viewport\" content=\"width=device-width,initial-scale=1\">\r\n"
"    <title>Sonoff web portal</title>\r\n"
"    <style>\r\n"
"            body {\r\n"
"                font-family: Arial,Helvetica,sans-serif;\r\n"
"                background: #181818;\r\n"
"                color: #EFEFEF;\r\n"
"                font-size: 16px\r\n"
"            }\r\n"
"            h2 {\r\n"
"                font-size: 18px\r\n"
"            }\r\n"
"            section.main {\r\n"
"                display: flex\r\n"
"            }\r\n"
"            #menu,section.main {\r\n"
"                flex-direction: column\r\n"
"            }\r\n"
"            #menu {\r\n"
"                display: none;\r\n"
"                flex-wrap: nowrap;\r\n"
"                min-width: 440px;\r\n"
"                background: #363636;\r\n"
"                padding: 8px;\r\n"
"                border-radius: 4px;\r\n"
"                margin-top: 10px;\r\n"
"                margin-right: 10px;\r\n"
"            }\r\n"
"            #content {\r\n"
"                display: flex;\r\n"
"                flex-wrap: wrap;\r\n"
"                align-items: stretch\r\n"
"            }\r\n"
"            figure {\r\n"
"                padding: 0px;\r\n"
"                margin: 0;\r\n"
"                -webkit-margin-before: 0;\r\n"
"                margin-block-start: 0;\r\n"
"                -webkit-margin-after: 0;\r\n"
"                margin-block-end: 0;\r\n"
"                -webkit-margin-start: 0;\r\n"
"                margin-inline-start: 0;\r\n"
"                -webkit-margin-end: 0;\r\n"
"                margin-inline-end: 0\r\n"
"            }\r\n"
"            figure img {\r\n"
"                display: block;\r\n"
"                width: 100%;\r\n"
"                height: auto;\r\n"
"                border-radius: 4px;\r\n"
"                margin-top: 8px;\r\n"
"            }\r\n"
"            @media (min-width: 800px) and (orientation:landscape) {\r\n"
"                #content {\r\n"
"                    display:flex;\r\n"
"                    flex-wrap: nowrap;\r\n"
"                    align-items: stretch\r\n"
"                }\r\n"
"                figure img {\r\n"
"                    display: block;\r\n"
"                    max-width: 100%;\r\n"
"                    max-height: calc(100vh - 40px);\r\n"
"                    width: auto;\r\n"
"                    height: auto\r\n"
"                }\r\n"
"                figure {\r\n"
"                    padding: 0 0 0 0px;\r\n"
"                    margin: 0;\r\n"
"                    -webkit-margin-before: 0;\r\n"
"                    margin-block-start: 0;\r\n"
"                    -webkit-margin-after: 0;\r\n"
"                    margin-block-end: 0;\r\n"
"                    -webkit-margin-start: 0;\r\n"
"                    margin-inline-start: 0;\r\n"
"                    -webkit-margin-end: 0;\r\n"
"                    margin-inline-end: 0\r\n"
"                }\r\n"
"            }\r\n"
"            section#buttons {\r\n"
"                display: flex;\r\n"
"                flex-wrap: nowrap;\r\n"
"                justify-content: space-between\r\n"
"            }\r\n"
"            #nav-toggle {\r\n"
"                cursor: pointer;\r\n"
"                display: block\r\n"
"            }\r\n"
"            #nav-toggle-cb {\r\n"
"                outline: 0;\r\n"
"                opacity: 0;\r\n"
"                width: 0;\r\n"
"                height: 0\r\n"
"            }\r\n"
"            #nav-toggle-cb:checked+#menu {\r\n"
"                display: flex\r\n"
"            }\r\n"
"            .input-group {\r\n"
"                display: flex;\r\n"
"                flex-wrap: nowrap;\r\n"
"                line-height: 22px;\r\n"
"                margin: 5px 0\r\n"
"            }\r\n"
"            .input-group>label {\r\n"
"                display: inline-block;\r\n"
"                padding-right: 10px;\r\n"
"                min-width: 47%\r\n"
"            }\r\n"
"            .input-group input,.input-group select {\r\n"
"                flex-grow: 1\r\n"
"            }\r\n"
"            .range-max,.range-min {\r\n"
"                display: inline-block;\r\n"
"                padding: 0 5px\r\n"
"            }\r\n"
"            button {\r\n"
"                display: block;\r\n"
"                margin: 5px;\r\n"
"                padding: 0 12px;\r\n"
"                border: 0;\r\n"
"                line-height: 28px;\r\n"
"                cursor: pointer;\r\n"
"                color: #fff;\r\n"
"                background: #ff3034;\r\n"
"                border-radius: 5px;\r\n"
"                font-size: 16px;\r\n"
"                outline: 0\r\n"
"            }\r\n"
"            button:hover {\r\n"
"                background: #ff494d\r\n"
"            }\r\n"
"            button:active {\r\n"
"                background: #f21c21\r\n"
"            }\r\n"
"            button.disabled {\r\n"
"                cursor: default;\r\n"
"                background: #a0a0a0\r\n"
"            }\r\n"
"            input[type=range] {\r\n"
"                -webkit-appearance: none;\r\n"
"                width: 100%;\r\n"
"                height: 22px;\r\n"
"                background: #363636;\r\n"
"                cursor: pointer;\r\n"
"                margin: 0\r\n"
"            }\r\n"
"            input[type=range]:focus {\r\n"
"                outline: 0\r\n"
"            }\r\n"
"            input[type=range]::-webkit-slider-runnable-track {\r\n"
"                width: 100%;\r\n"
"                height: 2px;\r\n"
"                cursor: pointer;\r\n"
"                background: #EFEFEF;\r\n"
"                border-radius: 0;\r\n"
"                border: 0 solid #EFEFEF\r\n"
"            }\r\n"
"            input[type=range]::-webkit-slider-thumb {\r\n"
"                border: 1px solid rgba(0,0,30,0);\r\n"
"                height: 22px;\r\n"
"                width: 22px;\r\n"
"                border-radius: 50px;\r\n"
"                background: #ff3034;\r\n"
"                cursor: pointer;\r\n"
"                -webkit-appearance: none;\r\n"
"                margin-top: -11.5px\r\n"
"            }\r\n"
"            input[type=range]:focus::-webkit-slider-runnable-track {\r\n"
"                background: #EFEFEF\r\n"
"            }\r\n"
"            input[type=range]::-moz-range-track {\r\n"
"                width: 100%;\r\n"
"                height: 2px;\r\n"
"                cursor: pointer;\r\n"
"                background: #EFEFEF;\r\n"
"                border-radius: 0;\r\n"
"                border: 0 solid #EFEFEF\r\n"
"            }\r\n"
"            input[type=range]::-moz-range-thumb {\r\n"
"                border: 1px solid rgba(0,0,30,0);\r\n"
"                height: 22px;\r\n"
"                width: 22px;\r\n"
"                border-radius: 50px;\r\n"
"                background: #ff3034;\r\n"
"                cursor: pointer\r\n"
"            }\r\n"
"            input[type=range]::-ms-track {\r\n"
"                width: 100%;\r\n"
"                height: 2px;\r\n"
"                cursor: pointer;\r\n"
"                background: 0 0;\r\n"
"                border-color: transparent;\r\n"
"                color: transparent\r\n"
"            }\r\n"
"            input[type=range]::-ms-fill-lower {\r\n"
"                background: #EFEFEF;\r\n"
"                border: 0 solid #EFEFEF;\r\n"
"                border-radius: 0\r\n"
"            }\r\n"
"            input[type=range]::-ms-fill-upper {\r\n"
"                background: #EFEFEF;\r\n"
"                border: 0 solid #EFEFEF;\r\n"
"                border-radius: 0\r\n"
"            }\r\n"
"            input[type=range]::-ms-thumb {\r\n"
"                border: 1px solid rgba(0,0,30,0);\r\n"
"                height: 22px;\r\n"
"                width: 22px;\r\n"
"                border-radius: 50px;\r\n"
"                background: #ff3034;\r\n"
"                cursor: pointer;\r\n"
"                height: 2px\r\n"
"            }\r\n"
"            input[type=range]:focus::-ms-fill-lower {\r\n"
"                background: #EFEFEF\r\n"
"            }\r\n"
"            input[type=range]:focus::-ms-fill-upper {\r\n"
"                background: #363636\r\n"
"            }\r\n"
"            .switch {\r\n"
"                display: block;\r\n"
"                position: relative;\r\n"
"                line-height: 22px;\r\n"
"                font-size: 16px;\r\n"
"                height: 22px\r\n"
"            }\r\n"
"            .switch input {\r\n"
"                outline: 0;\r\n"
"                opacity: 0;\r\n"
"                width: 0;\r\n"
"                height: 0\r\n"
"            }\r\n"
"            .slider {\r\n"
"                width: 50px;\r\n"
"                height: 22px;\r\n"
"                border-radius: 22px;\r\n"
"                cursor: pointer;\r\n"
"                background-color: grey\r\n"
"            }\r\n"
"            .slider,.slider:before {\r\n"
"                display: inline-block;\r\n"
"                transition: .4s\r\n"
"            }\r\n"
"            .slider:before {\r\n"
"                position: relative;\r\n"
"                content: \"\";\r\n"
"                border-radius: 50%;\r\n"
"                height: 16px;\r\n"
"                width: 16px;\r\n"
"                left: 4px;\r\n"
"                top: 3px;\r\n"
"                background-color: #fff\r\n"
"            }\r\n"
"            input:checked+.slider {\r\n"
"                background-color: #ff3034\r\n"
"            }\r\n"
"            input:checked+.slider:before {\r\n"
"                -webkit-transform: translateX(26px);\r\n"
"                transform: translateX(26px)\r\n"
"            }\r\n"
"            select {\r\n"
"                border: 1px solid #363636;\r\n"
"                font-size: 14px;\r\n"
"                height: 22px;\r\n"
"                outline: 0;\r\n"
"                border-radius: 5px\r\n"
"            }\r\n"
"            .image-container {\r\n"
"                position: relative;\r\n"
"                min-width: 160px\r\n"
"            }\r\n"
"            .close {\r\n"
"                position: absolute;\r\n"
"                right: 5px;\r\n"
"                top: 5px;\r\n"
"                background: #ff3034;\r\n"
"                width: 16px;\r\n"
"                height: 16px;\r\n"
"                border-radius: 100px;\r\n"
"                color: #fff;\r\n"
"                text-align: center;\r\n"
"                line-height: 18px;\r\n"
"                cursor: pointer\r\n"
"            }\r\n"
"            .hidden {\r\n"
"                display: none\r\n"
"            }\r\n"
"    .checkbox {\r\n"
"     position: absolute;\r\n"
"     z-index: -1;\r\n"
"     opacity: 0;\r\n"
"     margin: 10px 0 0 20px;\r\n"
"   }\r\n"
"   .checkbox + label {\r\n"
"     position: relative;\r\n"
"     padding: 0 0 0 60px;\r\n"
"     cursor: pointer;\r\n"
"   }\r\n"
"   .checkbox + label:before {\r\n"
"     content: '';\r\n"
"     position: absolute;\r\n"
"     top: -4px;\r\n"
"     left: 0;\r\n"
"     width: 50px;\r\n"
"     height: 26px;\r\n"
"     border-radius: 13px;\r\n"
"     background: #CDD1DA;\r\n"
"     box-shadow: inset 0 2px 3px rgba(0,0,0,.2);\r\n"
"     transition: .2s;\r\n"
"   }\r\n"
"   .checkbox + label:after {\r\n"
"     content: '';\r\n"
"     position: absolute;\r\n"
"     top: -2px;\r\n"
"     left: 2px;\r\n"
"     width: 22px;\r\n"
"     height: 22px;\r\n"
"     border-radius: 10px;\r\n"
"     background: #FFF;\r\n"
"     box-shadow: 0 2px 5px rgba(0,0,0,.3);\r\n"
"     transition: .2s;\r\n"
"   }\r\n"
"   .checkbox:checked + label:before {\r\n"
"     background: #9FD468;\r\n"
"   }\r\n"
"   .checkbox:checked + label:after {\r\n"
"     left: 26px;\r\n"
"   }\r\n"
"   .checkbox:focus + label:before {\r\n"
"     box-shadow: inset 0 2px 3px rgba(0,0,0,.2), 0 0 0 3px rgba(255,255,0,.7);\r\n"
"   }\r\n"
"    </style>\r\n"
"</head>\r\n"
"<body>\r\n"
"    <section class=\"main\">\r\n"
"        <div id=\"logo\">\r\n"
"            <label for=\"nav-toggle-cb\" id=\"nav-toggle\">☰&nbsp;&nbsp;Sonoff state</label>\r\n"
"        </div>\r\n"
"        <div id=\"content\">\r\n"
"            <div id=\"sidebar\">\r\n"
"                <input type=\"checkbox\" id=\"nav-toggle-cb\" checked=\"checked\">\r\n"
"                <nav id=\"menu\">\r\n"
"               <div class=\"input-group\" id=\"vrotate-group\">\r\n"
"                           \r\n"
"              <input type=\"checkbox\" id=\"ch1\"  class=\"default-action checkbox\" checked=\"checked\">\r\n"
"              <label for=\"ch1\">Switch state</label>\r\n"
"                        </div>\r\n"
"           <div class=\"input-group\" id=\"brigtness-group\">\r\n"
"                <div class=\"range-min\">0</div>\r\n"
"             <input class=\"input-range\" id=\"br\" class=\"default-action\"  orient=\"vertical\" type=\"range\" step=\"0.5\" value=\"5\" min=\"1\" max=\"100\">\r\n"
"             <div class=\"range-max\">100</div>\r\n"
"             <span class=\"range-value\">Brightness</span>\r\n"
"           </div>\r\n"
"           <div class=\"input-group\" id=\"HS-group\">\r\n"
"             <canvas id=\"canvas\" width=330 height=330 >\r\n"
"             </canvas>\r\n"
"           </div>\r\n"
"           \r\n"
"                </nav>\r\n"
"            </div>\r\n"
"        </div>\r\n"
"    </section>\r\n"
"    <script>\r\n"
"document.addEventListener('DOMContentLoaded', function (event) {\r\n"
"    var baseHost = document.location.origin;\r\n"
"    \r\n"
"  function updateConfig (el,proto_val) {\r\n"
"      let value;\r\n"
"  \r\n"
"    switch (el.type) {\r\n"
"     case 'input':\r\n"
"            value = el.value;\r\n"
"            break;\r\n"
"     case 'range':\r\n"
"            value = el.value;\r\n"
"            break;\r\n"
"   case 'checkbox':\r\n"
"     value=el.checked;\r\n"
"     break;\r\n"
"      case 'button':\r\n"
"        case 'submit':\r\n"
"            if (proto_val) {\r\n"
"                value = proto_val;\r\n"
"            } else {\r\n"
"                value = '1';\r\n"
"            }\r\n"
"            break;\r\n"
"        default:\r\n"
"            return;\r\n"
"      };\r\n"
"      const query = `${baseHost}/set?var=${el.id}&val=${value}`;\r\n"
" console.log(query);\r\n"
"    fetch(query)\r\n"
"      .then(response => {\r\n"
"        console.log(`request to ${query} finished, status: ${response.status}`)\r\n"
"      })\r\n"
"    };\r\n"
" document\r\n"
"    .querySelectorAll('.default-action')\r\n"
"    .forEach(el => {\r\n"
"      el.onchange = () => updateConfig(el)\r\n"
"    });\r\n"
" \r\n"
"    \r\n"
" \r\n"
"  document\r\n"
"    .querySelectorAll('.default-action')\r\n"
"    .forEach(el => {\r\n"
"      el.onchange = () => updateConfig(el);\r\n"
"    })\r\n"
" var canvas = document.getElementById('canvas');\r\n"
" var context = canvas.getContext('2d');\r\n"
" function setupColorWill() {\r\n"
"        \r\n"
"        // FIX: Cancel touch end event and handle click via touchstart\r\n"
"        // canvas.addEventListener(\"touchend\", function(e) { e.preventDefault(); }, false);\r\n"
"        canvas.addEventListener(\"touchmove\", doTouch, false);\r\n"
"        canvas.addEventListener(\"click\", doClick, false);\r\n"
"        //canvas.addEventListener(\"mousemove\", doClick, false);\r\n"
"        \r\n"
"        var centerX = canvas.width / 2;\r\n"
"        var centerY = canvas.height / 2;\r\n"
"        var innerRadius = canvas.width / 4.5;\r\n"
"        var outerRadius = (canvas.width - 10) / 2\r\n"
"        //outer border\r\n"
"        context.beginPath();\r\n"
"        //outer circle\r\n"
"        context.arc(centerX, centerY, outerRadius, 0, 2 * Math.PI, false);\r\n"
"        //draw the outer border: (gets drawn around the circle!)\r\n"
"        context.lineWidth = 4;\r\n"
"        context.strokeStyle = '#000000';\r\n"
"        context.stroke();\r\n"
"        context.closePath();\r\n"
"        //fill with beautiful colors \r\n"
"        //taken from here: http://stackoverflow.com/questions/18265804/building-a-color-wheel-in-html5\r\n"
"        for (var angle = 0; angle <= 360; angle += 1) {\r\n"
"            var startAngle = (angle - 2) * Math.PI / 180;\r\n"
"            var endAngle = angle * Math.PI / 180;\r\n"
"            context.beginPath();\r\n"
"            context.moveTo(centerX, centerY);\r\n"
"            context.arc(centerX, centerY, outerRadius, startAngle, endAngle, false);\r\n"
"            context.closePath();\r\n"
"            context.fillStyle = 'hsl(' + angle + ', 100%, 50%)';\r\n"
"            context.fill();\r\n"
"            context.closePath();\r\n"
"        }\r\n"
"        //inner border\r\n"
"        context.beginPath();\r\n"
"        //context.arc(centerX, centerY, radius, startAngle, endAngle, counterClockwise);\r\n"
"        context.arc(centerX, centerY, innerRadius, 0, 2 * Math.PI, false);\r\n"
"        //fill the center\r\n"
"        var my_gradient = context.createLinearGradient(0, 0, 170, 0);\r\n"
"        my_gradient.addColorStop(0, \"black\");\r\n"
"        my_gradient.addColorStop(1, \"white\");\r\n"
"        context.fillStyle = my_gradient;\r\n"
"        context.fillStyle = \"white\";\r\n"
"        context.fill();\r\n"
"        //draw the inner line\r\n"
"        context.lineWidth = 2;\r\n"
"        context.strokeStyle = '#000000';\r\n"
"        context.stroke();\r\n"
"        context.closePath();\r\n"
"   }\r\n"
"function doTouch(event) {\r\n"
"        //to not also fire on click\r\n"
"        event.preventDefault();\r\n"
"        var el = event.target;\r\n"
"        //touch position\r\n"
"        var pos = {\r\n"
"            x: Math.round(event.targetTouches[0].pageX - el.offsetLeft),\r\n"
"            y: Math.round(event.targetTouches[0].pageY - el.offsetTop)\r\n"
"        };\r\n"
"        //color\r\n"
"        var color = this.context.getImageData(pos.x, pos.y, 1, 1).data;\r\n"
"        updateColor(pos, color);\r\n"
"    }\r\n"
"   function doClick(event) {\r\n"
"        //click position   \r\n"
"        var pos = getMousePos(this.canvas, event);\r\n"
"        //color\r\n"
"       \r\n"
"        context = canvas.getContext('2d');\r\n"
"        var color = context.getImageData(pos.x, pos.y, 1, 1).data;\r\n"
"        updateColor(pos, color);\r\n"
"        //now do sth with the color rgbToHex(color);\r\n"
"        //don't do stuff when #000000 (outside circle and lines\r\n"
"    }\r\n"
"    function getMousePos(canvas, evt) {\r\n"
"        var rect = this.canvas.getBoundingClientRect();\r\n"
"        return {\r\n"
"            x: evt.clientX - rect.left,\r\n"
"            y: evt.clientY - rect.top\r\n"
"        };\r\n"
"    }\r\n"
" function componentToHex(c) {\r\n"
"        return (\"0\" + (Number(c).toString(16))).slice(-2).toUpperCase();\r\n"
"    }\r\n"
"   function  intToHex(val) {\r\n"
"        let hexString = val.toString(16);\r\n"
"        if (hexString.length % 2) {\r\n"
"            hexString = '0' + hexString;\r\n"
"        }\r\n"
"        return hexString;\r\n"
"    }\r\n"
"    //rgb/rgba to Hex\r\n"
"    function rgbToHex(rgb) {\r\n"
"        return componentToHex(rgb[0]) + componentToHex(rgb[1]) + componentToHex(rgb[2]);\r\n"
"    }\r\n"
" function updateColor(pos, color) {\r\n"
"   var hexColor = rgbToHex(color);\r\n"
"       \r\n"
"        var intcolor = parseInt(\"0x\" + hexColor);\r\n"
"     const querycolor = `${baseHost}/set?var=\"col\"&val=${intcolor}`;\r\n"
"   \r\n"
"   fetch(querycolor)\r\n"
"     .then(response => {\r\n"
"     \r\n"
"     })\r\n"
" }\r\n"
" setupColorWill();\r\n"
" document\r\n"
"    .querySelectorAll('.default-action')\r\n"
"    .forEach(el => {\r\n"
"   const query = `${baseHost}/get?var=${el.id}`;\r\n"
"      fetch(query)\r\n"
"     .then(response => response.text())\r\n"
"   .then(val => {\r\n"
"     if(el.type=='checkbox') el.checked=val=='1';\r\n"
"   \r\n"
"   })\r\n"
"    })\r\n"
"})\r\n"
"    </script>\r\n"
"</body>\r\n"
"</html>\r\n";
