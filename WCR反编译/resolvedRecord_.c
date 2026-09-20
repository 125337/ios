// resolvedRecord: @ 01b22d80

/* Function Stack Size: 0x18 bytes */

ID WCRefineKeywordAlertHistoryViewController::resolvedRecord_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  uint local_114;
  ID local_108;
  ID local_100;
  ID local_b8;
  byte local_aa;
  byte local_a9;
  ID local_a8;
  byte local_99;
  ID local_98;
  ID local_90;
  ID local_88;
  ID local_80;
  ID local_78;
  ID local_70;
  ID local_68;
  ID local_60;
  ID local_58;
  ID local_50;
  undefined4 local_44;
  ID local_40;
  SEL local_38;
  ID local_30;
  ID local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  IVar2 = local_40;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((IVar2 & 1) == 0) {
    local_28 = 0;
    local_44 = 1;
  }
  else {
    IVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_sessionUserName);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    FUN_01b1fc40();
    _objc_retainAutoreleasedReturnValue();
    local_50 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_sessionName);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    FUN_01b1fc40();
    _objc_retainAutoreleasedReturnValue();
    local_58 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar3 = local_50;
    (*(code *)PTR__objc_retain_02578638)();
    IVar2 = local_58;
    local_60 = IVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = IVar2;
    IVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_content);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    FUN_01b1fc40();
    _objc_retainAutoreleasedReturnValue();
    local_70 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_40;
    FUN_01b234fc();
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_60;
    local_78 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
    if (IVar3 == 0) {
      IVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_resolvedSessionUserNameForRecord_026bed78,local_40);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_60;
      local_60 = IVar3;
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    IVar2 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
    if (IVar2 == 0) {
      IVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
      if (IVar2 != 0) {
        IVar3 = local_60;
        FUN_01b20ef4(IVar2);
        _objc_retainAutoreleasedReturnValue();
        IVar2 = local_68;
        local_68 = IVar3;
        (*(code *)PTR__objc_release_02578630)(IVar2);
      }
    }
    IVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_dedupKey);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    FUN_01b1fc40();
    _objc_retainAutoreleasedReturnValue();
    local_80 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_40;
    FUN_01b24028();
    _objc_retainAutoreleasedReturnValue();
    local_88 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0);
    local_99 = 0;
    local_a9 = 0;
    if (IVar2 == 0) {
      IVar2 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
      if (IVar2 == 0) {
        local_108 = local_40;
        FUN_01b24660(0);
        _objc_retainAutoreleasedReturnValue();
        local_a9 = 1;
        local_a8 = local_108;
      }
      else {
        local_108 = local_78;
        FUN_01b242ac();
        _objc_retainAutoreleasedReturnValue();
        local_99 = 1;
        local_98 = local_108;
      }
      local_100 = local_108;
    }
    else {
      local_100 = local_88;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = local_100;
    if ((local_a9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_a8);
    }
    if ((local_99 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_98);
    }
    IVar2 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isEqualToString__0269ccc8,local_50);
    local_114 = 1;
    if ((IVar2 & 1) != 0) {
      IVar2 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isEqualToString__0269ccc8,local_58);
      local_114 = 1;
      if ((IVar2 & 1) != 0) {
        IVar2 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_isEqualToString__0269ccc8,local_70);
        local_114 = 1;
        if ((IVar2 & 1) != 0) {
          IVar2 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_isEqualToString__0269ccc8,local_80);
          local_114 = (uint)IVar2 ^ 1;
        }
      }
    }
    IVar2 = local_40;
    local_aa = (byte)local_114 & 1;
    if ((local_114 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = IVar2;
      local_44 = 1;
    }
    else {
      IVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_mutableCopy_0269d8a0);
      IVar2 = local_40;
      local_b8 = IVar3;
      if (IVar3 == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = IVar2;
      }
      else {
        IVar2 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
        if (IVar2 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_setObject_forKeyedSubscript__0269d248,local_60,
                     &cf_sessionUserName);
        }
        IVar2 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
        if (IVar2 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_setObject_forKeyedSubscript__0269d248,local_68,&cf_sessionName);
        }
        IVar2 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
        if (IVar2 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_setObject_forKeyedSubscript__0269d248,local_78,&cf_content);
        }
        IVar2 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
        if (IVar2 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_setObject_forKeyedSubscript__0269d248,local_90,&cf_dedupKey);
        }
        IVar2 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_copy_0269d150);
        local_28 = IVar2;
      }
      local_44 = 1;
      _objc_storeStrong(&local_b8,0);
    }
    _objc_storeStrong(&local_90);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return local_28;
}

