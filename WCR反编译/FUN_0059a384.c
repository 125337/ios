// FUN_0059a384 @ 0059a384

void FUN_0059a384(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [8];
  byte local_88;
  uint local_84;
  long local_80 [3];
  byte local_61;
  undefined *local_60;
  long local_58;
  long local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
  local_58 = param_1;
  local_50 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4034000000000000,PTR__OBJC_CLASS___NSDate_026cdf88,
             PTR_s_dateWithTimeIntervalSinceNow__0269cf50);
  _objc_retainAutoreleasedReturnValue();
  local_61 = 0;
  local_60 = puVar4;
  do {
    puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar4 = puVar4 + 1;
    if (puVar4 != (undefined *)0x0) break;
    lVar3 = *(long *)(param_1 + 0x20);
    local_48 = &cf_getFormatVideoPath;
    local_40 = &cf_pathForSightData;
    local_38 = &cf_pathForData;
    local_30 = &cf_pathForExistData;
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4
              );
    _objc_retainAutoreleasedReturnValue();
    FUN_00599978();
    _objc_retainAutoreleasedReturnValue();
    local_80[0] = lVar3;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    lVar3 = local_80[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_80[0],PTR_s_length_0269cca0);
    if (lVar3 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323da8,PTR__OBJC_CLASS___NSThread_026ce0a8,
                 PTR_s_sleepForTimeInterval__0269d9e8);
      local_84 = 0;
    }
    else {
      local_61 = 1;
      local_84 = 3;
    }
    _objc_storeStrong(local_80,0);
    puVar4 = (undefined *)(ulong)local_84;
  } while (local_84 == 0);
  puVar1 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue(puVar4);
  _objc_retainAutoreleasedReturnValue();
  local_b8 = PTR___NSConcreteStackBlock_02578660;
  local_b0 = 0xc2000000;
  local_ac = 0;
  local_a8 = FUN_0059a740;
  local_a0 = &DAT_0257a1e8;
  _objc_copyWeak(auStack_90,param_1 + 0x28);
  local_88 = local_61 & 1;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_98 = uVar2;
  _dispatch_async(puVar1,&local_b8);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_98);
  _objc_destroyWeak(auStack_90);
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

