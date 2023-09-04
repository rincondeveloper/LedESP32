const offh1 = document.getElementById('offh1')
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
    const Http = new XMLHttpRequest();
    console.log(`Consultando  ${consulta}`)
    Http.open("GET", consulta)
    Http.send()

    Http.onreadystatechange = (e) => {
    console.log(Http.status )
    console.log(Http.responseText)
    }
}