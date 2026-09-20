// focusOwnedOfficialControllerIfNeeded: @ 0112f89c

/* Function Stack Size: 0x18 bytes */

void WCRefineQuickRemarkEditor::focusOwnedOfficialControllerIfNeeded_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  byte local_51;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isOwnedOfficialController__026af2a0,local_28)
  ;
  if ((IVar1 & 1) == 0) {
    local_2c = 1;
  }
  else {
    uVar2 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028e357b);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if ((uVar3 & 1) == 0) {
      local_38 = 0;
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_m_nameView);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_38;
      local_38 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      local_51 = 0;
      if ((local_38 != 0) &&
         (uVar2 = local_38,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_becomeFirstResponder_0269d108)
         , (uVar2 & 1) != 0)) {
        uVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_becomeFirstResponder_0269d108);
        local_51 = (byte)uVar2;
        if (((uVar2 & 1) == 0) &&
           (uVar2 = local_38,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_isFirstResponder_0269f488),
           (uVar2 & 1) != 0)) {
          uVar2 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isFirstResponder_0269f488);
          local_51 = (byte)uVar2;
        }
      }
      if (((local_51 & 1) == 0) &&
         (uVar2 = local_28,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_28,PTR_s_respondsToSelector__026ca818,
                    PTR_s_triggerFirstResponder__026af2a8), (uVar2 & 1) != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_triggerFirstResponder__026af2a8,0);
        uVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_isFirstResponder_0269f488);
        if ((uVar2 & 1) != 0) {
          uVar2 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isFirstResponder_0269f488);
          local_51 = (byte)uVar2;
        }
      }
      uVar2 = local_28;
      if ((local_51 & 1) != 0) {
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar2,&DAT_028e357b,puVar4,1);
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      _objc_storeStrong(&local_38,0);
      local_2c = 0;
    }
    else {
      local_2c = 1;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

