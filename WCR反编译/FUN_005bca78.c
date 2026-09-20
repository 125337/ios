// FUN_005bca78 @ 005bca78

byte FUN_005bca78(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  bool local_49;
  ulong local_48;
  ulong local_40;
  undefined4 local_38;
  long local_28;
  ulong local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if ((local_20 == 0) ||
     (lVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     uVar3 = local_20, lVar1 == 0)) {
    local_11 = false;
    local_38 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) != 0) {
      uVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_view_026cabd8);
      _objc_unsafeClaimAutoreleasedReturnValue(uVar3);
    }
    uVar3 = local_20;
    FUN_0059d260(local_20,&cf_textView);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar3;
    FUN_0059d260(uVar3,&cf_text);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_48 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((uVar3 & 1) == 0) ||
       (uVar3 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
       uVar3 == 0)) {
      uVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_setText__026caa88);
      if ((uVar3 & 1) == 0) {
        local_49 = local_40 != 0;
        if (local_49) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_setValue_forKey__0269d300,local_28,&cf_text);
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setText__026caa88,local_28);
        local_49 = true;
      }
      local_11 = local_49;
    }
    else {
      local_11 = true;
    }
    local_38 = 1;
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

