// savePersistentPluginTitleIndex @ 014c542c

/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineSearchManager::savePersistentPluginTitleIndex
          (WCRefineSearchManager *this,ID param_1,SEL param_2)

{
  long lVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  double in_d0;
  long local_130;
  cfstringStruct *local_f0;
  undefined *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90 [3];
  SEL local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  long local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_78 = param_2;
  local_70 = (cfstringStruct *)param_1;
  if (*(long *)(param_1 + 0x58) != 0) {
    lVar1 = *(long *)(param_1 + 0x58);
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_count_0269cfe0);
    if (lVar1 != 0) {
      pcVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_searchIndexDirectoryPath_026af630);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      local_90[0] = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      pcVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_currentPluginIndexSignature_026af638);
      _objc_retainAutoreleasedReturnValue();
      local_98 = pcVar2;
      _objc_storeStrong(local_70 + 3,pcVar2);
      local_68 = &cf_version;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,0x10);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_60 = &cf_signature;
      if (local_98 == (cfstringStruct *)0x0) {
        local_f0 = &::cf___;
      }
      else {
        local_f0 = local_98;
      }
      local_40 = local_f0;
      local_58 = &cf_savedAt;
      puVar5 = PTR__OBJC_CLASS___NSDate_026cdf88;
      local_48 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithLongLong__0269d808,(long)in_d0);
      _objc_retainAutoreleasedReturnValue();
      local_50 = &cf_index;
      local_130 = local_70[2].field3_0x18;
      if (local_130 == 0) {
        local_130 = *(long *)PTR____NSDictionary0___02578288;
      }
      local_30 = local_130;
      puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_38 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_48,&local_68,4);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar3 = local_a0;
      pcVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_searchIndexFilePath_026af640);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_writeToFile_atomically__0269f928,pcVar2,1);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      _objc_storeStrong(&local_a0);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(local_90,0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

