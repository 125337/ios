// FUN_0002cf20 @ 0002cf20

void FUN_0002cf20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 *local_d8;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined4 local_78;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  long local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = 0;
  local_50 = param_1;
  _objc_storeStrong(&local_58);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_3);
  lVar1 = local_58;
  local_68 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    if (local_60 != 0) {
      lVar1 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_localizedDescription_0269ced0);
      _objc_retainAutoreleasedReturnValue();
      _NSLog(&cf__wcr__ai_replyerror___);
      (*(code *)PTR__objc_release_02578630)(lVar1);
    }
    if (*(long *)(param_1 + 0x48) != 0) {
      (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),0,local_60);
    }
    local_78 = 1;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(uVar2);
    puVar3 = *(undefined1 **)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_objectForKeyedSubscript__0269d098,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar3;
    if (puVar3 == (undefined1 *)0x0) {
      local_88 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = local_88;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = local_d8;
    if (puVar3 == (undefined1 *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_80;
    local_48 = &cf_role;
    local_38 = &cf_assistant;
    local_40 = &cf_content;
    local_30 = local_58;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    while (puVar3 = local_80, (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_count_0269cfe0),
          (undefined1 *)((long)&MACH_HEADER.cpusubtype + 3) <= puVar3) {
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_removeObjectAtIndex__0269d530,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setObject_forKeyedSubscript__0269d248,local_80,
               *(undefined8 *)(param_1 + 0x28));
    _objc_storeStrong(&local_80,0);
    _objc_sync_exit(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    FUN_00026278(local_58,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                 *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x38),
                 *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x58),
                 *(undefined8 *)(param_1 + 0x60));
    if (*(long *)(param_1 + 0x48) != 0) {
      (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),local_58,0);
    }
    local_78 = 0;
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

