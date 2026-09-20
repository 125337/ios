// FUN_004d2854 @ 004d2854

bool FUN_004d2854(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar3 = local_18;
  FUN_004d2918();
  iVar2 = (int)uVar3;
  bVar1 = true;
  if ((iVar2 != 3) && (bVar1 = true, iVar2 != 0x2b)) {
    bVar1 = iVar2 == 0x2c;
  }
  _objc_storeStrong(&local_18,0);
  return bVar1;
}

