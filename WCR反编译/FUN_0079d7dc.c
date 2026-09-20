// FUN_0079d7dc @ 0079d7dc

void FUN_0079d7dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  ulong local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_38 = 0;
  local_30 = param_1;
  uStack_28 = param_2;
  local_20 = param_3;
  uStack_18 = param_4;
  _objc_storeStrong(&local_38,param_5);
  if (local_38 != 0) {
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frame_026ca640);
    FUN_0079b440(param_1,param_2,param_3,param_4,local_30,uStack_28,local_20,uStack_18);
    if ((uVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,uStack_28,local_20,uStack_18,local_38,PTR_s_setFrame__026ca960);
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

