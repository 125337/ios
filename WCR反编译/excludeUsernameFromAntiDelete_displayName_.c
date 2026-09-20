// excludeUsernameFromAntiDelete:displayName: @ 01bdc348

/* Function Stack Size: 0x20 bytes */

void WCRefineMomentsCacheViewController::excludeUsernameFromAntiDelete_displayName_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_68;
  undefined *local_40;
  uint local_34;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  puVar5 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
  if (lVar2 == 0) {
    local_34 = 1;
  }
  else {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      local_68 = *(undefined **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_orderedSetWithArray__026a4b80,local_68);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar5 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsObject__0269cbb8,local_28);
    bVar1 = ((ulong)puVar5 & 1) == 0;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addObject__0269d180,local_28);
      puVar5 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar3 = PTR_WCRefineHelper_026ce000;
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_stringWithFormat__0269cca8,&cf___);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_showModernToast__0269ce78);
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__YS__fN2R_u7b);
    }
    local_34 = (uint)!bVar1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

