// scrapeFromPayTransferViewController: @ 00eac754

/* Function Stack Size: 0x18 bytes */

void WCRefineAuthNameHelper::scrapeFromPayTransferViewController_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ID IVar5;
  ulong local_70;
  ID local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    uVar1 = local_28;
    FUN_00eacaa4(local_28,&cf_m_data);
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar1;
    FUN_00eacaa4(uVar1,&cf_m_oSelectedContact);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar1;
    FUN_00eacaa4(uVar1,&cf_m_nsUsrName);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_48 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar1 & 1) == 0) {
      local_70 = 0;
    }
    else {
      local_70 = local_48;
    }
    FUN_00eaa404();
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
    if (local_70 == 0) {
      local_2c = 1;
    }
    else {
      uVar1 = local_28;
      FUN_00eacaa4(local_28,&cf_transferMarknameLabel);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      FUN_00eacbb0();
      _objc_retainAutoreleasedReturnValue();
      local_58 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      uVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_containsString__0269d0b0,&cf__);
      if ((uVar1 & 1) == 0) {
        uVar3 = local_28;
        FUN_00eacaa4(local_28,&cf_transferDisplaynameLabel);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        FUN_00eacbb0();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_58;
        local_58 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar1);
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      uVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_containsString__0269d0b0,&cf__);
      if ((uVar1 & 1) == 0) {
        uVar3 = local_28;
        FUN_00eacaa4(local_28,&cf_nameContainerView);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        FUN_00eacd04();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_58;
        local_58 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar1);
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      IVar5 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_lastCharFromMaskedPayLabel__026ab170,local_58);
      _objc_retainAutoreleasedReturnValue();
      local_60 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_length_0269cca0);
      if (IVar5 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_rememberLastChar_forUser__026ab178,local_60,local_50);
      }
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_58,0);
      local_2c = 0;
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

