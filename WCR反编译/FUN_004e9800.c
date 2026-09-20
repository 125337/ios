// FUN_004e9800 @ 004e9800

byte FUN_004e9800(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  undefined4 local_48;
  ulong local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  uVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_anon_at);
  if (((uVar1 & 1) == 0) &&
     (uVar1 = local_38,
     (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_anon_at_all)
     , (uVar1 & 1) == 0)) {
    local_21 = 0;
    local_48 = 1;
  }
  else {
    puVar2 = PTR_WCRefineAnonymousAtHelper_026ce0e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineAnonymousAtHelper_026ce0e0,PTR_s_isCurrentGroupChat_026a43e0);
    if (((ulong)puVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRN_W_Jel_ST_yr);
      local_21 = 1;
      local_48 = 1;
    }
    else {
      local_50 = 0;
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_viewModel_0269d080);
      if ((uVar1 & 1) != 0) {
        uVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_viewModel_0269d080);
        _objc_retainAutoreleasedReturnValue();
        local_58 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_messageWrap_0269d070);
        if ((uVar1 & 1) != 0) {
          uVar3 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_messageWrap_0269d070);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = local_50;
          local_50 = uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar1);
        }
        _objc_storeStrong(&local_58,0);
      }
      if ((local_50 == 0) &&
         (uVar1 = local_30,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_messageWrap_0269d070),
         (uVar1 & 1) != 0)) {
        uVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_messageWrap_0269d070);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_50;
        local_50 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_isEqualToString__0269ccc8,&cf_anon_at_all);
      if ((uVar1 & 1) == 0) {
        uVar1 = local_30;
        FUN_004e7498();
        _objc_retainAutoreleasedReturnValue();
        local_60 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
        if ((uVar1 == 0) ||
           (uVar3 = local_60,
           (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_hasSuffix__0269d018,&cf__chatroom),
           uVar1 = local_60, (uVar3 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSS);
          local_21 = 1;
          local_48 = 1;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_68 = uVar1;
          uVar1 = local_60;
          FUN_004e7f84();
          _objc_retainAutoreleasedReturnValue();
          local_70 = uVar1;
          if ((uVar1 != 0) &&
             ((*(code *)PTR__objc_msgSend_02578628)
                        (uVar1,PTR_s_respondsToSelector__026ca818,
                         PTR_s_getContactDisplayName_0269d160), (uVar1 & 1) != 0)) {
            uVar1 = local_70;
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_getContactDisplayName_0269d160);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_78 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
            if (((uVar1 & 1) != 0) &&
               (uVar1 = local_78,
               (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0), uVar1 != 0)) {
              _objc_storeStrong(uVar1,&local_68,local_78);
            }
            _objc_storeStrong(&local_78,0);
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineAnonymousAtHelper_026ce0e0,
                     PTR_s_promptAnonymousAtUsers_displayNa_026a43f0,local_60,local_68,local_50);
          local_21 = 1;
          local_48 = 1;
          _objc_storeStrong(&local_70);
          _objc_storeStrong(&local_68,0);
        }
        _objc_storeStrong(&local_60,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineAnonymousAtHelper_026ce0e0,
                   PTR_s_promptAnonymousAtAllWithReferMsg_026a43e8,local_50);
        local_21 = 1;
        local_48 = 1;
      }
      _objc_storeStrong(&local_50,0);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

