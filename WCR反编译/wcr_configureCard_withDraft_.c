// wcr_configureCard:withDraft: @ 01bf0ddc

/* Function Stack Size: 0x20 bytes */

void WCRefineMomentsDraftListViewController::wcr_configureCard_withDraft_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_100;
  cfstringStruct *local_78;
  long local_68;
  long local_60;
  undefined *local_58;
  long local_50;
  byte local_41;
  long local_40;
  undefined8 local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_41 = 0;
  lVar3 = local_40;
  FUN_01bef300(local_40,&local_41);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_50 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar4;
  if ((local_41 & 1) == 0) {
    lVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
    puVar1 = local_58;
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    if (lVar3 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180,&::cf__);
  }
  lVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_poiInfo_026a4da0);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  FUN_01bf1350();
  _objc_retainAutoreleasedReturnValue();
  local_60 = lVar5;
  (*(code *)PTR__objc_release_02578630)(lVar3);
  lVar3 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
  if (lVar3 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_addObject__0269d180,local_60);
  }
  lVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_lastSaveDate_026ae600);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  pcVar6 = local_28;
  puVar1 = local_58;
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (lVar3 != 0) {
    lVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_lastSaveDate_026ae600);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_formatDate__026c0af0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf_OX_N);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar6);
    (*(code *)PTR__objc_release_02578630)(lVar3);
  }
  uVar2 = local_38;
  lVar3 = local_40;
  FUN_01bef094();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_lastSaveDate_026ae600);
  _objc_retainAutoreleasedReturnValue();
  local_100 = local_28;
  if (lVar5 == 0) {
    local_100 = &::cf___;
  }
  else {
    local_68 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_lastSaveDate_026ae600);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_formatDate__026c0af0);
    _objc_retainAutoreleasedReturnValue();
    local_78 = local_100;
  }
  puVar4 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,PTR_s_componentsJoinedByString__0269d140,&::cf_space_s_);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_configureTitle_time_status_meta__026c0b40,lVar3,local_100,&cf_I_z,puVar4,
             local_50,local_41 & 1,&cf__eS,&cf__,0);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  if (lVar5 != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  (*(code *)PTR__objc_release_02578630)(lVar5);
  (*(code *)PTR__objc_release_02578630)(lVar3);
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

