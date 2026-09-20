// FUN_0027d494 @ 0027d494

byte FUN_0027d494(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_68;
  ulong local_60 [4];
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == 0) {
    local_21 = 0;
    local_34 = 1;
  }
  else {
    local_40 = 0;
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_decodeKey);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_40;
    local_40 = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_40;
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((uVar3 & 1) == 0) ||
       (uVar3 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
       uVar3 == 0)) {
      uVar3 = local_30;
      FUN_0027b0fc();
      _objc_retainAutoreleasedReturnValue();
      local_60[0] = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_respondsToSelector__026ca818,PTR_s_decodeKey_026a16b0);
      if ((uVar3 & 1) != 0) {
        uVar1 = local_60[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_decodeKey_026a16b0);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_40;
        local_40 = uVar1;
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      _objc_storeStrong(local_60,0);
    }
    uVar3 = local_40;
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((uVar3 & 1) == 0) ||
       (uVar3 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
       uVar3 == 0)) {
      local_68 = 0;
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_encryptKey);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_68;
      local_68 = uVar1;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_68;
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      local_21 = false;
      if ((uVar3 & 1) != 0) {
        uVar3 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
        local_21 = uVar3 != 0;
      }
      local_34 = 1;
      _objc_storeStrong(&local_68,0);
    }
    else {
      local_21 = 1;
      local_34 = 1;
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

