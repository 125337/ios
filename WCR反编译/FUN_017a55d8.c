// FUN_017a55d8 @ 017a55d8

void FUN_017a55d8(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  long *local_100;
  cfstringStruct *local_e8;
  cfstringStruct *local_d0;
  undefined *local_98;
  undefined *local_90;
  char *local_88;
  char *local_80;
  long local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60 [3];
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  pcVar1 = "MMServiceCenter";
  local_30 = param_2;
  local_28 = param_1;
  _objc_getClass();
  local_38 = (cfstringStruct *)pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_performSelector__026ca7b8,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_s_getService__0269d170;
  pcVar2 = "CContactMgr";
  local_40 = (cfstringStruct *)pcVar1;
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_performSelector_withObject__026ca7c0,puVar4,pcVar2);
  _objc_retainAutoreleasedReturnValue();
  local_48 = (cfstringStruct *)pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_performSelector__026ca7b8,PTR_s_getSelfContact_0269da60);
  _objc_retainAutoreleasedReturnValue();
  local_60[0] = (cfstringStruct *)pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_performSelector__026ca7b8,PTR_s_m_nsAliasName_026a6a58);
  local_d0 = (cfstringStruct *)pcVar1;
  if ((cfstringStruct *)pcVar1 == (cfstringStruct *)0x0) {
    local_d0 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = local_d0;
  local_e8 = local_60[0];
  (*(code *)PTR__objc_msgSend_02578628)
            (local_60[0],PTR_s_performSelector__026ca7b8,PTR_s_m_nsUsrName_0269d638);
  if (local_e8 == (cfstringStruct *)0x0) {
    local_e8 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = local_e8;
  pcVar3 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_100 = (long *)&local_70;
  }
  else {
    local_100 = (long *)&local_68;
  }
  pcVar3 = (cfstringStruct *)*local_100;
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = (long)pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSS_MR_SOo_zTQ);
  }
  else {
    if (DAT_028e4208 == (char *)0x0) {
      pcVar1 = "SuanGuoRedeemViewController";
      _objc_getClass();
      DAT_028e4208 = pcVar1;
    }
    pcVar1 = DAT_028e4208;
    _objc_retainAutoreleaseReturnValue();
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_initWithWechatUsername__026b35c0,local_78);
    local_80 = pcVar1;
    if (DAT_028e41d8 == (char *)0x0) {
      pcVar1 = "WCRefineHelper";
      _objc_getClass();
      DAT_028e41d8 = pcVar1;
    }
    pcVar1 = DAT_028e41d8;
    _objc_retainAutoreleaseReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_findTopVC_0269d290);
    _objc_retainAutoreleasedReturnValue();
    local_88 = pcVar1;
    if ((pcVar1 != (char *)0x0) && (local_80 != (char *)0x0)) {
      FUN_017af468();
      if (((ulong)pcVar1 & 1) == 0) {
        pcVar1 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (pcVar1 == (char *)0x0) {
          puVar4 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_initWithRootViewController__0269d2a0,local_80);
          local_98 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setModalPresentationStyle__0269d2a8,2);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_88,PTR_s_presentViewController_animated_c_0269d2b0,local_98,1,0);
          _objc_storeStrong(&local_98,0);
        }
        else {
          pcVar1 = local_88;
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_navigationController_0269d458);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar1);
        }
      }
      else {
        puVar4 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_initWithRootViewController__0269d2a0,local_80);
        local_90 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setModalPresentationStyle__0269d2a8,2);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_88,PTR_s_presentViewController_animated_c_0269d2b0,local_90,1,0);
        _objc_storeStrong(&local_90,0);
      }
      pcVar3 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
      if ((pcVar3 == (cfstringStruct *)0x0) &&
         (pcVar3 = local_70, (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0),
         pcVar3 != (cfstringStruct *)0x0)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__gS0R_OS_RV);
      }
    }
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_80,0);
  }
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(local_60,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  return;
}

