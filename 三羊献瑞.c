#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	for (int a = 1; a<10; a++)
	{
		for (int b = 0; b<10; b++)
		{
			if (a != b)
			{
				for (int c = 0; c<10; c++)
				{
					if (c != a&&c != b)
					{
						for (int d = 0; d<10; d++)
						{
							if (d != a&&d != b&&d != c)
							{
								for (int e = 1; e<10; e++)
								{
									if (e != a&&e != b&&e != c&&e != d)
									{
										for (int f = 0; f<10; f++)
										{
											if (f != a&&f != b&&f != c&&f != d&&f != e)
											{
												for (int g = 0; g<10; g++)
												{
													if (g != a&&g != b&&g != c&&g != d&&g != e&&g != f)
													{
														for (int h = 0; h<10; h++)
														{
															if (h != a&&h != b&&h != c&&h != d&&h != e&&h != f&&h != g)
															{
																int sum1 = a * 1000 + b * 100 + c * 10 + d;
																int sum2 = e * 1000 + f * 100 + g * 10 + b;
																int sum = e * 10000 + f * 1000 + c * 100 + b * 10 + h;
																if (sum1 + sum2 == sum)
																{
																	printf("%d", sum2);
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}