// FUN_00ef8e1c @ 00ef8e1c

byte FUN_00ef8e1c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_110;
  cfstringStruct *local_f0;
  cfstringStruct *local_b8;
  long local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  bool local_91;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  bool local_79;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_44;
  undefined *local_40;
  long local_38;
  cfstringStruct *local_30;
  byte local_21;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = PTR_s_showSearchEmoticonViewController_026a3e80;
  if ((local_30 == (cfstringStruct *)0x0) ||
     (pcVar3 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_30,PTR_s_respondsToSelector__026ca818,
                PTR_s_showSearchEmoticonViewController_026a3e80), ((ulong)pcVar3 & 1) == 0)) {
    pcVar3 = &cf_NewEmoticonSearchViewController;
    _NSClassFromString();
    pcVar4 = &cf_initWithCurrentTextAndCid_chatId_sourceScene_includeCustomEmoji_;
    local_50 = pcVar3;
    _NSSelectorFromString();
    local_58 = pcVar4;
    if ((local_50 == (cfstringStruct *)0x0) ||
       (pcVar3 = local_50,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_50,PTR_s_instancesRespondToSelector__0269da90,pcVar4),
       ((ulong)pcVar3 & 1) == 0)) {
      local_21 = 0;
      local_44 = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = &cf___;
      pcVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_getChatUsername_0269d2b8);
      if (((ulong)pcVar3 & 1) != 0) {
        pcVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getChatUsername_0269d2b8);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_68 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
        if (((ulong)pcVar3 & 1) != 0) {
          _objc_storeStrong(&local_60,local_68);
        }
        _objc_storeStrong(&local_68,0);
      }
      pcVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
      if (pcVar3 == (cfstringStruct *)0x0) {
        pcVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_getContactForReport_026ab9a8);
        local_79 = false;
        bVar1 = ((ulong)pcVar3 & 1) == 0;
        if (bVar1) {
          local_f0 = (cfstringStruct *)0x0;
        }
        else {
          local_f0 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getContactForReport_026ab9a8);
          _objc_retainAutoreleasedReturnValue();
          local_78 = local_f0;
        }
        local_79 = !bVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_70 = local_f0;
        if ((local_79 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_78);
        }
        pcVar4 = local_70;
        FUN_00eee4f4(local_70,&cf_m_nsUsrName);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = pcVar4;
        FUN_00eee23c();
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_60;
        local_60 = pcVar6;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        _objc_storeStrong(&local_70,0);
      }
      pcVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_textView_0269d0f8);
      local_91 = false;
      bVar1 = ((ulong)pcVar3 & 1) == 0;
      if (bVar1) {
        local_110 = (cfstringStruct *)0x0;
      }
      else {
        local_110 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_textView_0269d0f8);
        _objc_retainAutoreleasedReturnValue();
        local_90 = local_110;
      }
      local_91 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = local_110;
      if ((local_91 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
      pcVar3 = local_88;
      FUN_00eee4f4(local_88,&cf_text);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar3;
      FUN_00eee23c();
      _objc_retainAutoreleasedReturnValue();
      local_a0 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar3 = local_50;
      _objc_alloc();
      pcVar4 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_a8 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      if (local_a8 == (cfstringStruct *)0x0) {
        local_21 = 0;
        local_44 = 1;
      }
      else {
        pcVar3 = local_a8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a8,PTR_s_respondsToSelector__026ca818,PTR_s_setDelegate__026ca910);
        if (((ulong)pcVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setDelegate__026ca910,local_30);
        }
        pcVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_respondsToSelector__026ca818,
                   PTR_s_setSearchEmoticonViewControllerH_026ab9b0);
        if (((ulong)pcVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_setSearchEmoticonViewControllerH_026ab9b0,local_a8);
        }
        lVar2 = local_38;
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = lVar2;
        pcVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_respondsToSelector__026ca818,
                   PTR_s_GetCurrentViewController_0269d2d0);
        if (((ulong)pcVar3 & 1) != 0) {
          pcVar3 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_GetCurrentViewController_0269d2d0);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___UIViewController_026cdf80;
          local_b8 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
          if (((ulong)pcVar3 & 1) != 0) {
            _objc_storeStrong(&local_b0,local_b8);
          }
          _objc_storeStrong(&local_b8,0);
        }
        puVar5 = PTR_s_showFromViewController_animated__0269ffa0;
        if ((local_b0 == 0) ||
           (pcVar3 = local_a8,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_a8,PTR_s_respondsToSelector__026ca818,
                      PTR_s_showFromViewController_animated__0269ffa0), ((ulong)pcVar3 & 1) == 0)) {
          pcVar3 = local_a8;
          FUN_00ef8900(local_a8,local_38);
          local_21 = (byte)pcVar3;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_a8,puVar5,local_b0,1);
          local_21 = 1;
        }
        local_21 = local_21 & 1;
        local_44 = 1;
        _objc_storeStrong(&local_b0,0);
      }
      _objc_storeStrong(&local_a8);
      _objc_storeStrong(&local_a0,0);
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(&local_60,0);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,local_40,0);
    local_21 = 1;
    local_44 = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

