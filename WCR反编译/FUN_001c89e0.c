// FUN_001c89e0 @ 001c89e0

void FUN_001c89e0(ulong param_1,undefined8 param_2,byte param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar3;
  ulong local_48;
  undefined4 local_40;
  undefined8 local_30;
  byte local_21;
  undefined8 local_20;
  ulong local_18;
  undefined8 *puVar2;
  
  puVar2 = &local_30;
  local_30 = 0;
  local_21 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(puVar2,param_4);
  uVar1 = (uint)puVar2;
  FUN_001cf94c();
  if (((uVar1 & 1) == 0) || (uVar3 = local_18, FUN_00219d50(), (uVar3 & 1) == 0)) {
    (*DAT_028c8d88)(local_18,local_20,local_21 & 1,local_30);
    local_40 = 1;
  }
  else {
    uVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_valueForKey__0269d128,&cf_playerView);
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar3;
    FUN_001da6a8(uVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_flush_026a0810);
    (*DAT_028c8d88)(local_18,local_20,local_21 & 1,local_30);
    FUN_001da6a8(local_48);
    _objc_storeStrong(&local_48,0);
    local_40 = 0;
  }
  _objc_storeStrong(&local_30,0);
  return;
}

