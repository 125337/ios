// wcr_friendlyFallbackTitleForActionId: @ 01e2a340

/* Function Stack Size: 0x18 bytes */

ID WCRefineSuperFloatSettingsViewController::wcr_friendlyFallbackTitleForActionId_
             (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined8 uVar3;
  cfstringStruct *pcVar4;
  ID IVar5;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  undefined4 local_64;
  cfstringStruct *local_60;
  SEL local_58;
  ID local_50;
  cfstringStruct *local_48;
  undefined8 local_40;
  long *local_38;
  undefined8 local_30;
  long *local_28;
  
  local_60 = (cfstringStruct *)0x0;
  local_58 = param_2;
  local_50 = param_1;
  _objc_storeStrong(&local_60,param_3);
  pcVar1 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = &cf_eR_O;
    local_64 = 1;
  }
  else {
    local_28 = &DAT_028e4790;
    local_30 = 0;
    _objc_storeStrong(&local_30,&PTR___NSConcreteGlobalBlock_0258c6f8);
    if (*local_28 + 1 != 0) {
      _dispatch_once(*local_28 + 1,local_28,local_30);
    }
    _objc_storeStrong(&local_30,0);
    pcVar2 = DAT_028e4788;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028e4788,PTR_s_objectForKeyedSubscript__0269d098,local_60);
    _objc_retainAutoreleasedReturnValue();
    local_70 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
    pcVar4 = local_60;
    pcVar1 = local_70;
    if (pcVar2 == (cfstringStruct *)0x0) {
      uVar3 = _WCRSuperFloatActionOpenURL;
      (*(code *)PTR__objc_msgSend_02578628)
                (_WCRSuperFloatActionOpenURL,PTR_s_stringByAppendingString__0269d398,&cf__);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_hasPrefix__0269d320);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if (((ulong)pcVar4 & 1) == 0) {
        pcVar4 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_hasPrefix__0269d320,&cf_wcr_sf_vc_);
        pcVar1 = local_60;
        if (((ulong)pcVar4 & 1) == 0) {
          pcVar4 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_hasPrefix__0269d320,&cf_wcr_sf_reg_);
          pcVar1 = local_60;
          if (((ulong)pcVar4 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_60,PTR_s_hasPrefix__0269d320,&cf_wcr_sf_toolbar_);
            if (((ulong)pcVar1 & 1) == 0) {
              pcVar1 = local_60;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_60,PTR_s_hasPrefix__0269d320,&cf_wcr_sf_actionmenu_);
              if (((ulong)pcVar1 & 1) == 0) {
                pcVar1 = local_60;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_60,PTR_s_hasPrefix__0269d320,&cf_wcr_sf_chatmore_);
                if (((ulong)pcVar1 & 1) == 0) {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_48 = &cf__g_TTR;
                  local_64 = 1;
                }
                else {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_48 = &cf_J_YfY;
                  local_64 = 1;
                }
              }
              else {
                (*(code *)PTR__objc_retain_02578638)();
                local_48 = &cf_R_OUS;
                local_64 = 1;
              }
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_48 = &cf__wQhR;
              local_64 = 1;
            }
          }
          else {
            pcVar4 = &cf_wcr_sf_reg_;
            (*(code *)PTR__objc_msgSend_02578628)(&cf_wcr_sf_reg_,PTR_s_length_0269cca0);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_substringFromIndex__0269d120,pcVar4);
            _objc_retainAutoreleasedReturnValue();
            local_80 = pcVar1;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
            if ((pcVar1 == (cfstringStruct *)0x0) ||
               (IVar5 = local_50,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_50,PTR_s_wcr_isTechnicalActionTitle__026c6250,local_80),
               pcVar1 = local_80, (IVar5 & 1) != 0)) {
              (*(code *)PTR__objc_retain_02578638)();
              local_48 = &cf_ibU_R;
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_48 = pcVar1;
            }
            local_64 = 1;
            _objc_storeStrong(&local_80,0);
          }
        }
        else {
          pcVar4 = &cf_wcr_sf_vc_;
          (*(code *)PTR__objc_msgSend_02578628)(&cf_wcr_sf_vc_,PTR_s_length_0269cca0);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_substringFromIndex__0269d120,pcVar4);
          _objc_retainAutoreleasedReturnValue();
          local_38 = &DAT_028e47a0;
          local_40 = 0;
          local_78 = pcVar1;
          _objc_storeStrong(&local_40,&PTR___NSConcreteGlobalBlock_0258c718);
          if (*local_38 + 1 != 0) {
            _dispatch_once(*local_38 + 1,local_38,local_40);
          }
          _objc_storeStrong(&local_40,0);
          pcVar1 = DAT_028e4798;
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_028e4798,PTR_s_objectForKeyedSubscript__0269d098,local_78);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          if (pcVar1 == (cfstringStruct *)0x0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_48 = &::cf_Sb;
          }
          else {
            pcVar1 = DAT_028e4798;
            (*(code *)PTR__objc_msgSend_02578628)
                      (DAT_028e4798,PTR_s_objectForKeyedSubscript__0269d098,local_78);
            _objc_retainAutoreleasedReturnValue();
            local_48 = pcVar1;
          }
          local_64 = 1;
          _objc_storeStrong(&local_78,0);
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_48 = &::cf_Sb;
        local_64 = 1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = pcVar1;
      local_64 = 1;
    }
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_60,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_48;
}

