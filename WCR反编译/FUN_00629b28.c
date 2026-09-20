// FUN_00629b28 @ 00629b28

void FUN_00629b28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  long local_c0 [5];
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  long local_68 [4];
  long local_48;
  undefined4 local_3c;
  long local_38;
  undefined8 local_30;
  long local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  if (local_38 == 0) {
    local_3c = 1;
  }
  else {
    local_48 = 0;
    lVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_m_nsUsrName_0269d638);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_48;
    local_48 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    local_68[0] = 0;
    lVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_m_nsNickName_0269d758);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_68[0];
    local_68[0] = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    pcVar3 = &cf_WCListViewController;
    _NSClassFromString();
    local_78 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_3c = 1;
    }
    else {
      _objc_alloc_init();
      local_80 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_setValue_forKey__0269d300,local_38,&cf_m_contact);
      pcVar3 = &cf_WCMomentsPageContext;
      _NSClassFromString();
      local_90 = pcVar3;
      if (pcVar3 != (cfstringStruct *)0x0) {
        _objc_alloc_init();
        local_98 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_80,PTR_s_setValue_forKey__0269d300,pcVar3,&cf_pageContext);
        _objc_storeStrong(&local_98,0);
      }
      pcVar3 = local_80;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_setValue_forKey__0269d300,puVar4,&cf_sourceScene);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      pcVar3 = local_80;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_setValue_forKey__0269d300,puVar4,&cf_isStarBrowsingEnabled);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      pcVar3 = local_80;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_setValue_forKey__0269d300,puVar4,&cf_puzzleImageViewLayoutStyle);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      local_c0[0] = 0;
      lVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_performSelector__026ca7b8,PTR_s_currentNavigationController_026a5e00
                );
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_c0[0];
      local_c0[0] = lVar2;
      (*(code *)PTR__objc_release_02578630)(lVar1);
      if (local_c0[0] != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0[0],PTR_s_PushViewController_animated__0269cd40,local_80,1);
      }
      _objc_storeStrong(local_c0);
      _objc_storeStrong(&local_80,0);
      local_3c = 0;
    }
    _objc_storeStrong(local_68);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

