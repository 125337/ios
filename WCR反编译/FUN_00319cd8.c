// FUN_00319cd8 @ 00319cd8

byte FUN_00319cd8(undefined8 param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong local_40;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
  }
  else {
    for (local_40 = 0; local_40 < param_3; local_40 = local_40 + 1) {
      lVar2 = *(long *)(param_2 + local_40 * 8);
      if (lVar2 != 0) {
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isKindOfClass__0269cd68,lVar2);
        if ((uVar1 & 1) != 0) {
          local_11 = 1;
          goto LAB_00319e08;
        }
      }
    }
    local_11 = 0;
  }
LAB_00319e08:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

