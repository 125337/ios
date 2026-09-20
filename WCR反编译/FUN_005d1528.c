// FUN_005d1528 @ 005d1528

void FUN_005d1528(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),PTR_s_view_026cabd8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_valueForKey__0269d128,&cf_textView);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  if (uVar1 == 0) {
    local_2c = 1;
    goto LAB_005d17f0;
  }
  local_38 = 0;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
  if ((uVar1 & 1) != 0) {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_performSelector__026ca7b8,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_38;
    local_38 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  uVar2 = local_38;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  uVar1 = uVar2 & 0xffffffff;
  if ((uVar2 & 1) == 0) {
LAB_005d1738:
    pcVar4 = &cf_insertString_;
    _NSSelectorFromString(uVar1);
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,pcVar4);
    if ((uVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setValue_forKey__0269d300,*(undefined8 *)(param_1 + 0x28),&cf_text);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,pcVar4,*(undefined8 *)(param_1 + 0x28));
    }
    local_2c = 0;
  }
  else {
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    uVar1 = 0;
    if (uVar2 == 0) goto LAB_005d1738;
    local_2c = 1;
  }
  _objc_storeStrong(&local_38,0);
LAB_005d17f0:
  _objc_storeStrong(&local_28,0);
  return;
}

