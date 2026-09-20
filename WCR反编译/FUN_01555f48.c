// FUN_01555f48 @ 01555f48

void FUN_01555f48(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  undefined4 local_1c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    pcVar1 = &cf_WCListViewController;
    _NSClassFromString();
    local_28 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_1c = 1;
    }
    else {
      _objc_alloc_init();
      local_30 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_setValue_forKey__0269d300,local_18,&cf_m_contact);
      pcVar1 = &cf_WCMomentsPageContext;
      _NSClassFromString();
      local_38 = pcVar1;
      if (pcVar1 != (cfstringStruct *)0x0) {
        _objc_alloc_init();
        local_40 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_setValue_forKey__0269d300,pcVar1,&cf_pageContext);
        _objc_storeStrong(&local_40,0);
      }
      pcVar1 = local_30;
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_setValue_forKey__0269d300,puVar2,&cf_sourceScene);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      pcVar1 = local_30;
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_setValue_forKey__0269d300,puVar2,&cf_isStarBrowsingEnabled);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      pcVar1 = local_30;
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_setValue_forKey__0269d300,puVar2,&cf_puzzleImageViewLayoutStyle);
      (*(code *)PTR__objc_release_02578630)();
      FUN_015611fc();
      _objc_retainAutoreleasedReturnValue();
      local_48 = puVar2;
      if (puVar2 == (undefined *)0x0) {
        local_1c = 1;
      }
      else {
        pcVar1 = &cf_PushViewController_animated_;
        _NSSelectorFromString();
        puVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_respondsToSelector__026ca818,pcVar1);
        if (((ulong)puVar2 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_pushViewController_animated__0269d590,local_30,1);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_48,pcVar1,local_30,1);
        }
        local_1c = 0;
      }
      _objc_storeStrong(&local_48);
      _objc_storeStrong(&local_30,0);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

