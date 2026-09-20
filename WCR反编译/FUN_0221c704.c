// FUN_0221c704 @ 0221c704

undefined8 FUN_0221c704(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = 0;
  __sScPMa();
  lVar3 = *(long *)(lVar1 + -8);
  uVar2 = param_1;
  (**(code **)(lVar3 + 0x30))(param_1,1);
  if ((int)uVar2 == 0) {
    (**(code **)(lVar3 + 8))(param_1,lVar1);
  }
  return param_1;
}

