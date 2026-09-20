// FUN_0008b6d0 @ 0008b6d0

byte FUN_0008b6d0(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_58;
  ulong local_50;
  int local_48;
  ulong local_38;
  long local_30;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = uVar2;
  for (local_30 = 0; local_28 != 0 && local_30 < 6; local_30 = local_30 + 1) {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_isEqualToString__0269ccc8,&cf_QuickReplyMsgNotifyView);
    if ((((uVar2 & 1) == 0) &&
        (uVar2 = local_38,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_isEqualToString__0269ccc8,&cf_QuickReplyMsgView), (uVar2 & 1) == 0
        )) && (uVar2 = local_38,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_38,PTR_s_containsString__0269d0b0,&cf_QuickReplyMsg),
              (uVar2 & 1) == 0)) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_28;
      local_28 = uVar1;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      local_48 = 0;
    }
    else {
      local_11 = 1;
      local_48 = 1;
    }
    _objc_storeStrong(&local_38,0);
    if (local_48 != 0) goto LAB_0008ba54;
  }
  uVar2 = local_20;
  FUN_00071ca0();
  _objc_retainAutoreleasedReturnValue();
  local_50 = uVar2;
  if (uVar2 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_58 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_isEqualToString__0269ccc8,&cf_QuickReplyMsgViewController);
    if (((uVar2 & 1) == 0) &&
       (uVar2 = local_58,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_58,PTR_s_containsString__0269d0b0,&cf_QuickReplyMsg), (uVar2 & 1) == 0)) {
      local_48 = 0;
    }
    else {
      local_11 = 1;
      local_48 = 1;
    }
    _objc_storeStrong(&local_58,0);
    if (local_48 != 0) goto LAB_0008ba34;
  }
  local_11 = 0;
  local_48 = 1;
LAB_0008ba34:
  _objc_storeStrong(&local_50,0);
LAB_0008ba54:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

