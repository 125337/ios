// cachedDurationSecondsForItem: @ 015b053c

/* Function Stack Size: 0x18 bytes */

double __thiscall
WCRefineVoicePackStore::cachedDurationSecondsForItem_
          (WCRefineVoicePackStore *this,ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  double in_d0;
  double local_a8;
  long local_50;
  undefined *local_48;
  undefined4 local_40;
  byte local_39;
  long local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  double local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_39 = 0;
  bVar1 = true;
  if (local_30 != 0) {
    lVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_absolutePath_026ae300);
    _objc_retainAutoreleasedReturnValue();
    local_39 = 1;
    local_38 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = lVar2 == 0;
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (bVar1) {
    local_18 = -1.0;
    local_40 = 1;
  }
  else {
    lVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_absolutePath_026ae300);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_modificationDate_026a6fc8);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_fileSize_026a1640);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf______0f__llu);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar3;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    lVar2 = DAT_028e3ae8;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(lVar2);
    lVar4 = DAT_028e3ae8;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028e3ae8,PTR_s_objectForKeyedSubscript__0269d098,local_48);
    _objc_retainAutoreleasedReturnValue();
    local_50 = lVar4;
    if (lVar4 == 0) {
      local_a8 = -1.0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_doubleValue_026ca608);
      local_a8 = in_d0;
    }
    local_18 = local_a8;
    local_40 = 1;
    _objc_storeStrong(&local_50);
    _objc_sync_exit(lVar2);
    (*(code *)PTR__objc_release_02578630)(lVar2);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

