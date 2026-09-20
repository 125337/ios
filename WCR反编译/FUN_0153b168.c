// FUN_0153b168 @ 0153b168

void FUN_0153b168(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  int local_54;
  undefined *local_40;
  ulong local_38;
  byte local_29;
  uint local_28;
  undefined1 local_21;
  undefined *local_20;
  undefined *local_18;
  
  _objc_storeWeak(&DAT_028e38a8);
  DAT_028e3940 = 0;
  puVar2 = &DAT_028e38b0;
  _objc_storeWeak(&DAT_028e38b0,0);
  FUN_01562e38();
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar2;
  FUN_0157bd44();
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    FUN_0157b998();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_20;
    local_20 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  puVar2 = local_20;
  puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((ulong)puVar2 & 1) == 0) {
    local_54 = 0;
  }
  else {
    puVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isFirstResponder_0269f488);
    local_54 = (int)puVar2;
  }
  local_21 = local_54 != 0;
  if (((local_20 == (undefined *)0x0) || (!(bool)local_21)) ||
     (puVar3 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_resignFirstResponder_0269ea18),
     puVar2 = local_18, ((ulong)puVar3 & 1) == 0)) {
    local_28 = 1;
  }
  else {
    local_29 = 0;
    local_38 = 0;
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_view_026cabd8);
      if (((ulong)puVar2 & 1) != 0) {
        puVar2 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
        local_40 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
        if (((ulong)puVar2 & 1) != 0) {
          _objc_storeStrong(&local_38,local_40);
        }
        _objc_storeStrong(&local_40,0);
      }
    }
    else {
      _objc_storeStrong(&local_38,local_18);
    }
    if ((local_38 != 0) &&
       (uVar4 = local_38,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_endEditing__026a2e70),
       (uVar4 & 1) != 0)) {
      uVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_endEditing__026a2e70,1);
      local_29 = (byte)uVar4;
    }
    if ((local_29 & 1) == 0) {
      puVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_resignFirstResponder_0269ea18);
      local_29 = (byte)puVar2;
    }
    bVar1 = (local_29 & 1) != 0;
    if (bVar1) {
      _objc_storeWeak(&DAT_028e38a8,local_20);
      _objc_storeWeak(&DAT_028e38b0,local_18);
      DAT_028e3940 = 1;
      FUN_01562d20(local_18,0);
    }
    local_28 = (uint)!bVar1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

