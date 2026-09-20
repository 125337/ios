// FUN_0081ee94 @ 0081ee94

void FUN_0081ee94(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong local_40;
  ulong local_38;
  long local_30;
  undefined4 local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_0081f228();
  lVar2 = DAT_028cd078;
  if ((uVar1 & 1) == 0) {
    local_28 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
    if ((lVar2 == 0) ||
       (uVar1 = DAT_028cd090,
       (*(code *)PTR__objc_msgSend_02578628)(DAT_028cd090,PTR_s_isEqualToString__0269ccc8,local_30),
       (uVar1 & 1) == 0)) {
      local_28 = 1;
    }
    else {
      lVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copy_0269d150);
      lVar2 = DAT_028cd098;
      DAT_028cd098 = lVar3;
      (*(code *)PTR__objc_release_02578630)(lVar2);
      (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000,local_18,PTR_s_setAlpha__026ca860);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setUserInteractionEnabled__026caad8,1);
      lVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copy_0269d150);
      lVar2 = DAT_028cd0a0;
      DAT_028cd0a0 = lVar3;
      (*(code *)PTR__objc_release_02578630)(lVar2);
      uVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      local_38 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setUserInteractionEnabled__026caad8,1);
      FUN_0081f43c(local_38);
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      local_40 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setNeedsLayout_0269deb8);
      uVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar1);
      FUN_0081f55c(local_18);
      _objc_storeStrong(&local_40);
      _objc_storeStrong(&local_38,0);
      local_28 = 0;
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

