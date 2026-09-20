// FUN_0059321c @ 0059321c

void FUN_0059321c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_48;
  uint local_40;
  long local_30;
  long local_28;
  ulong local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = param_4;
  if ((((local_18 == 0) || (local_20 == 0)) ||
      (lVar2 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
      lVar2 == 0)) || (local_30 == 0)) {
    local_40 = 1;
  }
  else {
    local_48 = 0;
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,local_28);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_48;
    local_48 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar4 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isKindOfClass__0269cd68,local_30);
    bVar1 = (uVar4 & 1) != 0;
    if (bVar1) {
      FUN_00592248(local_18,local_28,local_48);
    }
    local_40 = (uint)!bVar1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

