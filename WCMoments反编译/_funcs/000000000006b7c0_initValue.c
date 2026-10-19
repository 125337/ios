// initValue @0x6b7c0

/* Function Stack Size: 0x10 bytes */

void WCMYBIBImageCell::initValue(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = (long)_interactStartPoint;
  uVar2 = *(undefined8 *)PTR__CGPointZero_00110850;
  ((undefined8 *)(param_1 + lVar1))[1] = *(undefined8 *)(PTR__CGPointZero_00110850 + 8);
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  *(undefined1 *)(param_1 + (long)_interacting) = 0;
  return;
}

