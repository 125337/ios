// FUN_01011aac @ 01011aac

void FUN_01011aac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  long lVar6;
  ulong uVar7;
  cfstringStruct *local_128;
  cfstringStruct *local_e8;
  cfstringStruct *local_a0;
  undefined1 local_91;
  cfstringStruct *local_90 [3];
  undefined *local_78;
  long local_70;
  undefined8 local_68;
  undefined *local_60;
  long local_58;
  long local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  long local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = 0;
  local_50 = param_1;
  _objc_storeStrong(&local_58);
  local_60 = (undefined *)0x0;
  _objc_storeStrong(&local_60,param_3);
  local_68 = 0;
  _objc_storeStrong(&local_68,param_4);
  lVar6 = local_58;
  local_70 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  puVar1 = local_60;
  if (lVar6 == 0) {
    uVar7 = *(ulong *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_lastObject_0269d200);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isEqualToString__0269ccc8);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if ((uVar7 & 1) != 0) {
      pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSURL_026ce328;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,
                 *(undefined8 *)(param_1 + 0x28));
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_128 = pcVar5;
      if (pcVar5 == (cfstringStruct *)0x0) {
        local_128 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_a0 = local_128;
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      _objc_storeStrong(&local_a0,0);
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSData_026ce1d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,local_58);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_78;
      local_78 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    puVar1 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
    if (puVar1 != (undefined *)0x0) {
      local_48 = &cf_path;
      local_38 = local_58;
      local_40 = &cf_data;
      local_30 = local_78;
      puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      uVar3 = *(undefined8 *)(lVar6 + 0x28);
      *(undefined **)(lVar6 + 0x28) = puVar2;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      (*(code *)PTR__objc_retain_02578638)();
      _objc_sync_enter(uVar3);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__0269d180,
                 *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28));
      _objc_sync_exit(uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18) = 1;
    }
    pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,
               *(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_e8 = pcVar5;
    if (pcVar5 == (cfstringStruct *)0x0) {
      local_e8 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_90[0] = local_e8;
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    puVar1 = PTR_WCRefineLinkParser_026ce168;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLinkParser_026ce168,PTR_s_douyinImageURLLooksWatermarkTemp_026adb38,
               *(undefined8 *)(param_1 + 0x28));
    local_91 = SUB81(puVar1,0);
    _objc_storeStrong(local_90);
    _objc_storeStrong(&local_78,0);
  }
  _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(param_1 + 0x38));
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

