const char* ssid_1     = "######";
const char* password_1 = "######";
const char* ssid_2     = "######";
const char* password_2 = "######";

/*const String pagina = R"====(<!doctypehtml><html lang=en><meta charset=UTF-8><meta content="width=device-width,initial-scale=1"name=viewport><title>Urity / ESP32</title><link href=https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.4.2/css/all.min.css rel=stylesheet crossorigin=anonymous integrity="sha512-z3gLpd7yknf1YoNbCzqRKc4qyor8gaKU1qmn+CShxbuBusANI9QpRohGBreCFkKxLhei6S9CQXFEbbKuqLg0DA=="referrerpolicy=no-referrer><link href=https://fonts.googleapis.com rel=preconnect><link href=https://fonts.gstatic.com rel=preconnect crossorigin><link href="https://fonts.googleapis.com/css2?family=DM+Sans:opsz,wght@9..40,500&display=swap"rel=stylesheet><style>*{box-sizing:border-box;margin:0;padding:0}body{font-family:'DM Sans',sans-serif;background-color:#0b0b0d}.main{display:flex;flex-flow:column wrap;justify-content:space-around;align-items:center;min-height:90vh}h1{font-size:7em;color:#fff}.encendido-h1{display:none}.light{font-size:10em;color:#000}.btns{display:flex;flex-flow:row wrap;justify-content:space-between;gap:2em}button{width:7em;height:2.5em;background-color:#474747;border:none;border-radius:2em;cursor:pointer;font-size:1.5em;color:#fff;padding:.5em;transition:all .2s ease-in}button:hover{background-color:#ffc400}@media (max-width:576px){h1{font-size:2.5em}i{font-size:1.5em}}</style><main class=main><div class=titles><h1 class=apagado-h1 id=offh1>Apagado</h1><h1 class=encendido-h1 id=onh1>Encendido</h1></div><div class=light><i class="fa-lightbulb fa-solid"id=light></i></div><div class=btns><a href=""><button class=btn-encender id=onBtn>Encender</button></a> <a href=""><button class=btn-apagar id=offBtn>Apagar</button></a></div></main><script>const offh1 = document.getElementById('offh1')
        const onh1 = document.getElementById('onh1')
        const light = document.getElementById('light')
        const onBtn = document.getElementById('onBtn')
        const offBtn = document.getElementById('offBtn')


        onBtn.addEventListener("click", function(event) {
            offh1.style.display = 'none'
            onh1.style.display = 'block'
            light.style.color = 'gold'

            consultaGET("encender")
            
            event.preventDefault(); 
        })

        offBtn.addEventListener("click", function(event) {
            offh1.style.display = 'block'
            onh1.style.display = 'none'
            light.style.color = 'black'

            consultaGET("apagar")
            
            event.preventDefault(); 
        })

        function consultaGET(consulta){
            const Http = new XMLHttpRequest()
            console.log(`Consultando  ${consulta}`)
            Http.open("GET", consulta)
            Http.send()

            Http.onreadystatechange = (e) => {
                console.log(Http.status )
                console.log(Http.responseText)
            }
        }</script>)====";*/
