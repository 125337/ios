// FUN_010baf44 @ 010baf44

void FUN_010baf44(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long local_78;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined *local_28;
  long local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setBrowseSaveScheduled__026ae6d0,0);
  _objc_autoreleasePoolPush();
  local_38 = &cf_version;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
  _objc_retainAutoreleasedReturnValue();
  local_30 = &cf_records;
  lVar3 = *(long *)(param_1 + 0x20);
  local_28 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_browseRecords_026ae688);
  _objc_retainAutoreleasedReturnValue();
  local_78 = lVar3;
  if (lVar3 == 0) {
    local_78 = *(long *)PTR____NSDictionary0___02578288;
  }
  local_20 = local_78;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_28,&local_38,2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_browseIndexPath_026ae6b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_writeToFile_atomically__0269f928,uVar5,1);
  (*(code *)PTR__objc_release_02578630)(uVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(lVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_autoreleasePoolPop(uVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

