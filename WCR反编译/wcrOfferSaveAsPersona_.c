// wcrOfferSaveAsPersona: @ 017e6110

/* Function Stack Size: 0x18 bytes */

void WCRefineAISettingsViewController::wcrOfferSaveAsPersona_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  dispatch_time_t dVar5;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [12];
  undefined4 local_34;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  lVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_34 = 1;
  }
  else {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_wcrPersonaCategoryForPrompt__026b54f8,local_30);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if (IVar4 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_setPendingPersonaPrompt__026b5518,local_30);
      _objc_initWeak(auStack_40,local_18);
      dVar5 = _dispatch_time(0,350000000);
      puVar1 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_68 = PTR___NSConcreteStackBlock_02578660;
      local_60 = 0xc2000000;
      local_5c = 0;
      local_58 = FUN_017e6344;
      local_50 = &DAT_0257be28;
      _objc_copyWeak(auStack_48,auStack_40);
      _dispatch_after(dVar5,puVar1,&local_68);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      _objc_destroyWeak(auStack_48);
      _objc_destroyWeak(auStack_40);
      local_34 = 0;
    }
    else {
      local_34 = 1;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

