function validarEmail() {
    const emailInput = document.getElementById("email");
    const mensagemErro = document.getElementById("mensagem-erro");
    const mensagemOrientacao = document.getElementById("mensagem-orientacao");
    const email = emailInput.value;
  
    const regex = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
  
    mensagemErro.textContent = "";
    mensagemOrientacao.textContent = "";

    if (!regex.test(email)) {
        mensagemErro.textContent = "E-mail inválido! Por favor, insira um e-mail válido.";
        mensagemErro.style.color = "red";
        mensagemOrientacao.textContent = "Exemplo: nome@dominio.com";
    } else {
        mensagemErro.textContent = "E-mail válido!";  
        mensagemErro.style.color = "green";
        mensagemOrientacao.textContent = "";
    }
}