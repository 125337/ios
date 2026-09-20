// FUN_0026dd00 @ 0026dd00

void FUN_0026dd00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uVar2;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_18;
  (*DAT_028c9558)(local_18,local_20,local_28);
  uVar1 = (uint)uVar2;
  FUN_0026e0d8();
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_refreshState_026a1490);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

