// FUN_002644f0 @ 002644f0

void FUN_002644f0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined4 local_30;
  undefined8 local_20;
  ulong local_18;
  undefined8 *puVar2;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar2 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar2,param_2);
  uVar1 = (uint)puVar2;
  FUN_00264438();
  if ((uVar1 & 1) == 0) {
    local_30 = 1;
  }
  else {
    local_31 = 0;
    local_32 = 0;
    local_33 = 0;
    local_40 = 0;
    local_48 = 0;
    uVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,
               PTR_s_bIgnoreLongPressGestureEvent_026a12b0);
    if ((uVar3 & 1) != 0) {
      uVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_bIgnoreLongPressGestureEvent_026a12b0);
      local_31 = (undefined1)uVar3;
    }
    uVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_allowImagePreview_026a12b8);
    if ((uVar3 & 1) != 0) {
      uVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_allowImagePreview_026a12b8);
      local_32 = (undefined1)uVar3;
    }
    uVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_allowShareByImage_026a1198);
    if ((uVar3 & 1) != 0) {
      uVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_allowShareByImage_026a1198);
      local_33 = (undefined1)uVar3;
    }
    uVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_valueForKey__0269d128,&cf_m_longPressGestureRecognizer);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_40;
    local_40 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_valueForKey__0269d128,&cf_webView);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_50 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
    if ((uVar3 & 1) != 0) {
      uVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_gestureRecognizers_026ca650);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_48 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_40,0);
    local_30 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

