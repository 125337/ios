// FUN_001ca3a4 @ 001ca3a4

void FUN_001ca3a4(ulong param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  int local_48;
  ulong local_38;
  ulong local_30;
  byte local_21;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028c8e20)(param_1,param_2);
  local_21 = 0;
  uVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_nextResponder_0269d0d8);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar2;
  do {
    if (local_30 == 0) break;
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_containsString__0269d0b0,&cf_BaseMsgContentViewController);
    if ((uVar2 & 1) == 0) {
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_nextResponder_0269d0d8);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_30;
      local_30 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      local_48 = 0;
    }
    else {
      local_21 = 1;
      local_48 = 3;
    }
    _objc_storeStrong(&local_38,0);
  } while (local_48 == 0);
  bVar1 = false;
  if ((local_21 & 1) != 0) {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_contentImageView_026a0848);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = uVar2 != 0;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  if (bVar1) {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_contentImageView_026a0848);
    _objc_retainAutoreleasedReturnValue();
    FUN_0021bf24();
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  _objc_storeStrong(&local_30,0);
  return;
}

