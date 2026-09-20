// FUN_017a4fe0 @ 017a4fe0

void FUN_017a4fe0(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *local_88;
  undefined *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  char *local_60 [3];
  char *local_48;
  char *local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  pcVar1 = "MMServiceCenter";
  local_30 = param_2;
  local_28 = param_1;
  _objc_getClass();
  local_38 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_performSelector__026ca7b8,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_s_getService__0269d170;
  pcVar2 = "CContactMgr";
  local_40 = pcVar1;
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_performSelector_withObject__026ca7c0,puVar3,pcVar2);
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_performSelector__026ca7b8,PTR_s_getSelfContact_0269da60);
  _objc_retainAutoreleasedReturnValue();
  local_60[0] = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_performSelector__026ca7b8,PTR_s_m_nsUsrName_0269d638);
  _objc_retainAutoreleasedReturnValue();
  local_68 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (pcVar1 != (char *)0x0) {
    if (DAT_028e41f8 == (char *)0x0) {
      pcVar1 = "ThemeBoxRedeemViewController";
      _objc_getClass();
      DAT_028e41f8 = pcVar1;
    }
    pcVar1 = DAT_028e41f8;
    _objc_retainAutoreleaseReturnValue();
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_initWithWXID__026b4198,local_68);
    local_70 = pcVar1;
    if (DAT_028e41d8 == (char *)0x0) {
      pcVar1 = "WCRefineHelper";
      _objc_getClass();
      DAT_028e41d8 = pcVar1;
    }
    pcVar1 = DAT_028e41d8;
    _objc_retainAutoreleaseReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_findTopVC_0269d290);
    _objc_retainAutoreleasedReturnValue();
    local_78 = pcVar1;
    if ((pcVar1 != (char *)0x0) && (local_70 != (char *)0x0)) {
      FUN_017af468();
      if (((ulong)pcVar1 & 1) == 0) {
        pcVar1 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (pcVar1 == (char *)0x0) {
          puVar3 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_initWithRootViewController__0269d2a0,local_70);
          local_88 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setModalPresentationStyle__0269d2a8,2);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_78,PTR_s_presentViewController_animated_c_0269d2b0,local_88,1,0);
          _objc_storeStrong(&local_88,0);
        }
        else {
          pcVar1 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_navigationController_0269d458);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar1);
        }
      }
      else {
        puVar3 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_initWithRootViewController__0269d2a0,local_70);
        local_80 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setModalPresentationStyle__0269d2a8,2);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_78,PTR_s_presentViewController_animated_c_0269d2b0,local_80,1,0);
        _objc_storeStrong(&local_80,0);
      }
    }
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(local_60,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  return;
}

