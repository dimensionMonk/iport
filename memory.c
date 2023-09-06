{ifEMF} - {PROTIN} = TRIGGER {SPICES} - PROTIN "RETURN"
{IF} {ifEMF} "IFmod" + "PROTIN"
#IF <<>> {IFemf} - 'PROTIN' - {TYYT}
{ifEMF} - {IF}
#DEFINE LINK {ifEM} - {ifEMF} "PROTIN" --LEAK "DELETE"
#DEFINE LINK {ifEMF}
  //author : michael .b @2023
