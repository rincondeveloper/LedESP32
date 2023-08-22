const offh1 = document.getElementById('offh1')
const onh1 = document.getElementById('onh1')
const light = document.getElementById('light')
const onBtn = document.getElementById('onBtn')
const offBtn = document.getElementById('offBtn')


onBtn.addEventListener("click", function(event) {
    offh1.style.display = 'none'
    onh1.style.display = 'block'
    light.style.color = 'gold'
    
    event.preventDefault(); 
})

offBtn.addEventListener("click", function(event) {
    offh1.style.display = 'block'
    onh1.style.display = 'none'
    light.style.color = 'black'
    
    event.preventDefault(); 
})
