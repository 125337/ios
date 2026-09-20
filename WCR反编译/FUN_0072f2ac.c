// FUN_0072f2ac @ 0072f2ac

void FUN_0072f2ac(undefined8 param_1)

{
  uint uVar1;
  ulong uVar3;
  ulong local_18;
  ulong *puVar2;
  
  puVar2 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar2,param_1);
  uVar1 = (uint)puVar2;
  if ((((local_18 != 0) && (FUN_0072da78(), (uVar1 & 1) != 0)) &&
      (uVar3 = local_18, FUN_0072dc18(), (uVar3 & 1) == 0)) &&
     ((uVar3 = local_18, FUN_0072ddd8(), (uVar3 & 1) != 0 &&
      (uVar3 = local_18,
      _objc_msgSend(local_18,PTR_s_respondsToSelector__026ca818,PTR_s_setM_bForbidden__026a7ab0),
      (uVar3 & 1) != 0)))) {
    FUN_0072f1e8(local_18);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

