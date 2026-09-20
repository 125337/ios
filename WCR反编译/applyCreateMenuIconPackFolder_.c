// applyCreateMenuIconPackFolder: @ 01e26b38

/* Function Stack Size: 0x18 bytes */

void WCRefineSuperFloatSettingsViewController::applyCreateMenuIconPackFolder_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 local_50;
  undefined *local_48;
  undefined *local_40;
  uint local_34;
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar4 = local_28;
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  uVar5 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_30;
  local_30 = uVar5;
  (*(code *)PTR__objc_release_02578630)(uVar4);
  uVar5 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,&::cf___);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_30;
  local_30 = uVar5;
  (*(code *)PTR__objc_release_02578630)(uVar4);
  uVar4 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (((uVar4 == 0) ||
      (uVar4 = local_30,
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&::cf__),
      (uVar4 & 1) != 0)) ||
     (uVar4 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf___),
     (uVar4 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eN9YTeHe);
    local_34 = 1;
  }
  else {
    puVar3 = PTR_WCRSuperFloatProfileStore_026cee48;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRSuperFloatProfileStore_026cee48,
               PTR_s_menuIconPackRootAbsoluteDirector_026b18d0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_stringByAppendingPathComponent__026cab30,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_50 = 0;
    puVar6 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_48 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_50;
    puVar3 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_storeStrong(&local_50,uVar2);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    bVar1 = ((ulong)puVar3 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setMenuIconPackFolder__026c61e0,
                 local_30);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_notifyChanged_026b43a0);
      puVar3 = PTR_WCRefineHelper_026ce000;
      puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___u_);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_showModernToast__0269ce78);
      (*(code *)PTR__objc_release_02578630)(puVar6);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_R_1Y_);
    }
    local_34 = (uint)!bVar1;
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

