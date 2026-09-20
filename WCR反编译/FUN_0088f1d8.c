// FUN_0088f1d8 @ 0088f1d8

void FUN_0088f1d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_5);
  if ((local_18 != 0) &&
     (uVar1 = local_18, (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isHidden_026ca768),
     (uVar1 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setHidden__026ca970,1);
    uVar2 = 0;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setAlpha__026ca860);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_frame_026ca640);
    if (0.0 < param_4) {
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,param_2,param_3,0,local_18,PTR_s_setFrame__026ca960);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

