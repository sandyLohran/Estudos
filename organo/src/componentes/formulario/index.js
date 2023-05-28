import CampoTexto from "../CampoTexto"
import "./formulario.css"
import ListaSuspensa from '../ListaSuspensa'

const formulario = () => {
    const times = [
        'Programação',
        'Front-end',
        'Dara Science',
        'Devops',
        'Ux e Design',
        'Mobile',
        'Inovação e Gestão'
    ]

    return (
        <section className="formulario">
            
            <form>
                <CampoTexto label="Nome" placeholder="Digite o seu nome..." />
                <CampoTexto label="Cargo" placeholder="Digite o seu cargo..." />
                <CampoTexto label="Imagem" placeholder="Digite o endereço da imagem..." />
                <ListaSuspensa itens={times}/>
            </form>
        </section>
    )

}

export default formulario