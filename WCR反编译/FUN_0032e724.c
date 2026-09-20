// FUN_0032e724 @ 0032e724

cfstringStruct * FUN_0032e724(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_160;
  cfstringStruct *local_f0;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_78;
  cfstringStruct *local_70 [2];
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined4 local_40;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar2 = local_30;
  pcVar1 = &cf_ContactsViewController;
  _NSClassFromString();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,pcVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    local_28 = (cfstringStruct *)0xffffffffffffffff;
  }
  else {
    local_48 = (cfstringStruct *)0xffffffffffffffff;
    local_50 = (cfstringStruct *)0xffffffffffffffff;
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_m_countLabel);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    local_58 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      local_f0 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_f0 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = local_f0;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_60;
      FUN_0032b128();
      if (-1 < (long)pcVar1) {
        local_48 = pcVar1;
      }
      local_50 = pcVar1;
      _objc_storeStrong(&local_60,0);
    }
    _objc_storeStrong(&local_58,0);
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_valueForKey__0269d128,&cf_m_contactsDataLogic);
    _objc_retainAutoreleasedReturnValue();
    local_70[0] = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getContactCount_026a20d8);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar1 = local_70[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_70[0],PTR_s_getContactCount_026a20d8);
      local_78 = (cfstringStruct *)((ulong)pcVar1 & 0xffffffff);
      if ((long)local_48 < 0) {
        local_48 = local_78;
      }
    }
    _objc_storeStrong(local_70,0);
    if ((long)local_48 < 0) {
      pcVar1 = &cf_MMServiceCenter;
      _NSClassFromString();
      pcVar2 = &cf_CContactMgr;
      local_88 = pcVar1;
      _NSClassFromString();
      local_90 = pcVar2;
      if (((local_88 != (cfstringStruct *)0x0) && (pcVar2 != (cfstringStruct *)0x0)) &&
         (pcVar1 = local_88,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_88,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0),
         ((ulong)pcVar1 & 1) != 0)) {
        pcVar1 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_defaultCenter_026ca5e0);
        _objc_retainAutoreleasedReturnValue();
        local_98 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
        if (((ulong)pcVar1 & 1) != 0) {
          pcVar1 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_getService__0269d170,local_90);
          _objc_retainAutoreleasedReturnValue();
          local_a0 = pcVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getContactCount_026a20d8);
          if (((ulong)pcVar1 & 1) != 0) {
            pcVar1 = local_a0;
            (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_getContactCount_026a20d8);
            local_48 = (cfstringStruct *)((ulong)pcVar1 & 0xffffffff);
          }
          _objc_storeStrong(&local_a0,0);
        }
        _objc_storeStrong(&local_98,0);
      }
    }
    if ((long)local_48 < 0) {
      local_160 = (cfstringStruct *)0xffffffffffffffff;
    }
    else {
      local_160 = local_48;
    }
    local_28 = local_160;
  }
  local_40 = 1;
  _objc_storeStrong(&local_30,0);
  return local_28;
}

