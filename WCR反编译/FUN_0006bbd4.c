// FUN_0006bbd4 @ 0006bbd4

undefined8 FUN_0006bbd4(undefined8 param_1,undefined8 param_2,byte param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined8 local_18;
  undefined8 uVar3;
  
  pcVar1 = DAT_028c7e28;
  uVar3 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = (uint)uVar3;
  FUN_0007799c();
  if ((uVar2 & 1) != 0) {
    param_3 = 0;
  }
  (*pcVar1)(param_1,param_2,param_3 & 1);
  _objc_storeStrong(&local_18,0);
  return param_1;
}

