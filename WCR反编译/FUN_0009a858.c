// FUN_0009a858 @ 0009a858

void FUN_0009a858(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  uint local_58;
  undefined *local_50;
  ulong local_48;
  int local_40;
  byte local_29;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028c7fc0)(param_1,param_2);
  uVar1 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_02323d08);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  FUN_0009b1c0();
  local_58 = 1;
  if ((uVar1 & 1) == 0) {
    local_58 = 1;
    FUN_0009b25c();
  }
  local_29 = (byte)local_58 & 1;
  if (((local_58 & 1) == 0) || (uVar1 = local_18, FUN_0009b33c(), (uVar1 & 1) == 0)) {
    if (local_28 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_removeGestureRecognizer__026ca808,local_28);
      _objc_setAssociatedObject(local_18,&DAT_02323d08,0,1);
    }
    local_40 = 1;
  }
  else {
    if (local_28 != 0) {
      uVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_valueForKey__0269d128,&cf_gestureRecognizers);
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar1;
      if ((uVar1 == 0) ||
         ((*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_containsObject__0269cbb8,local_28),
         (uVar1 & 1) == 0)) {
        local_40 = 0;
      }
      else {
        local_40 = 1;
      }
      _objc_storeStrong(&local_48,0);
      if (local_40 != 0) goto LAB_0009ab78;
    }
    puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_initWithTarget_action__026ca718,local_18,
               PTR_s_handleAvatarLinkLongPress__0269e278);
    local_50 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323d00,puVar2,PTR_s_setMinimumPressDuration__026ca9c8);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_addGestureRecognizer__026ca4a8,local_50);
    uVar1 = local_18;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_setValue_forKey__0269d300,puVar2,&cf_userInteractionEnabled);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_setAssociatedObject(local_18,&DAT_02323d08,local_50,1);
    _objc_storeStrong(&local_50,0);
    local_40 = 0;
  }
LAB_0009ab78:
  _objc_storeStrong(&local_28,0);
  return;
}

