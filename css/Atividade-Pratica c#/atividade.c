



    static void Main()
    {
        Console.WriteLine("Digite os valores dos coeficientes a, b e c da equação ax^2 + bx + c = 0:");

        // Ler os coeficientes a, b e c do usuário
        Console.Write("a: ");
        double a = Convert.ToDouble(Console.ReadLine());

        Console.Write("b: ");
        double b = Convert.ToDouble(Console.ReadLine());

        Console.Write("c: ");
        double c = Convert.ToDouble(Console.ReadLine());

        // Calcular o delta
        double delta = Math.Pow(b, 2) - 4 * a * c;

        // Verificar se é possível calcular as raízes
        if (a != 0)
        {
            if (delta > 0)
            {
                double x1 = (-b + Math.Sqrt(delta)) / (2 * a);
                double x2 = (-b - Math.Sqrt(delta)) / (2 * a);
                Console.WriteLine("As raízes da equação são:");
                Console.WriteLine("x1 = " + x1);
                Console.WriteLine("x2 = " + x2);
            }
            else if (delta == 0)
            {
                double x = -b / (2 * a);
                Console.WriteLine("A equação possui uma raiz real:");
                Console.WriteLine("x = " + x);
            }
            else
            {
                Console.WriteLine("A equação não possui raízes reais. Delta é negativo.");
            }
        }
        else
        {
            Console.WriteLine("O valor de 'a' não pode ser zero. Impossível calcular.");
        }
    }

