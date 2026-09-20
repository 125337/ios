// FUN_00596490 @ 00596490

void FUN_00596490(long param_1,undefined8 param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long local_78;
  char *local_70;
  undefined *local_68;
  undefined *local_60;
  char *local_58;
  char *local_50;
  char *local_38;
  undefined8 local_30;
  long local_28;
  
  pcVar1 = "WCWebSearchViewControllerNewH5";
  local_30 = param_2;
  local_28 = param_1;
  _objc_getClass();
  pcVar2 = "WebSearchContext";
  local_38 = pcVar1;
  _objc_getClass();
  if ((local_38 != (char *)0x0) && (pcVar2 != (char *)0x0)) {
    local_50 = pcVar2;
    _objc_alloc_init();
    local_58 = pcVar2;
    if (pcVar2 != (char *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0xe);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_setValue_forKey__0269d300,puVar3,&cf_scene)
      ;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      pcVar1 = local_58;
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_setValue_forKey__0269d300,puVar3,&cf_bizType);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_setValue_forKey__0269d300,&cf___,&cf_query);
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_stringWithFormat__0269cca8,&cf_WCRefine_moments__lld);
      _objc_retainAutoreleasedReturnValue();
      local_60 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_setValue_forKey__0269d300,local_60,&cf_sessionId);
      _objc_storeStrong(&local_60,0);
    }
    local_68 = PTR_s_initWithParams__026a5580;
    pcVar1 = local_38;
    _objc_alloc();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_performSelector_withObject__026ca7c0,local_68,local_58);
    _objc_retainAutoreleasedReturnValue();
    local_70 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    if (local_70 != (char *)0x0) {
      lVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_valueForKey__0269d128,&cf_navigationController);
      _objc_retainAutoreleasedReturnValue();
      local_78 = lVar5;
      if (lVar5 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (lVar5,PTR_s_pushViewController_animated__0269d590,local_70,1);
      }
      _objc_storeStrong(&local_78,0);
    }
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_58,0);
  }
  return;
}

