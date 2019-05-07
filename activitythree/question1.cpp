/*
Polimorfismo é difinido como um princípio a partir do qual as classes derivadas de uma única classe base são capazes de invocar os métodos que, embora apresentem a mesma assinatura, comportam-se de maneira diferente para cada uma das classes derivadas.

Um exemplo disso seria uma classe base abstrata animal que possui o método abstrato
emitirSom, para as diferentes classes derivadas esse método emitir som irá ser implementado de maneira diferente.
*/
//Exemplo:


class Animal
{
	virtual emitirSom() = 0;
}

class Gato : public Animal
{
	emitirSom()
	{
		std::cout << "miar" << std::endl;
	}
}

class Cachorro : public Animal
{
	emitirSom()
	{
		std::cout << "latir" << std::endl;
	}
}

class Abelha : public Animal
{
	emitirSom()
	{
		std::cout << "zumbir" << std::endl;
	}
}

/* 
Uma das vantagens de usar o polimorfismo é a possibilidade de que a partir de uma referência para classe base conseguir ivocar os métodos das instancias das classes derivadas que foram declarados como virtuais sem necessariamente ter uma referência para classe derivada ou fazer um downcast. Desta forma podendo até ter uma array de ponteiros para a classe base referenciando as instancias das classes derivadas e eles iriam responder conforme sua implementação graças ao polimorfismo.
*/
//Exemplo:

Animal* gato = new Gato(); 
Animal* cachorro = new Cachorro();
Animal* abelha = new Abelha();

gato->emitirSom() //saida miar
cachorro->emitirSom() //saida latir
abelha->emitirSom() //saida zumbir



