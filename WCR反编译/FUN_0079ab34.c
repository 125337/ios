// FUN_0079ab34 @ 0079ab34

void FUN_0079ab34(undefined8 param_1,undefined8 param_2,ulong param_3,uint param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  if (local_18 != 0) {
    uVar1 = local_18;
    uVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_cornerRadius_026ca5c8);
    FUN_00798f28(uVar2,param_1);
    if ((uVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,local_18,PTR_s_setCornerRadius__026ca900);
    }
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_maskedCorners_0269fc50);
    if (uVar1 != param_3) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setMaskedCorners__0269ebc8,param_3);
    }
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_masksToBounds_0269e158);
    if ((uint)uVar1 != (param_4 & 1)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setMasksToBounds__026ca9b8,param_4 & 1);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

