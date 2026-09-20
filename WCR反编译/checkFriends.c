// checkFriends @ 00fa8094

/* Function Stack Size: 0x10 bytes */

void WCRefineHelper::checkFriends(ID param_1,SEL param_2)

{
  undefined *puVar1;
  dispatch_semaphore_t pdVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *local_238;
  undefined *local_230;
  undefined *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  code *local_168;
  undefined *local_160;
  undefined8 local_158;
  undefined8 *local_150;
  undefined4 local_148;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  undefined8 local_100;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  uVar4 = *(undefined8 *)PTR____NSArray0___02578280;
  puVar1 = PTR_WCRefineHelper_026ce000;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(puVar1 + 0x18,uVar4);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
  _objc_alloc_init();
  local_c0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setMaxConcurrentOperationCount__026aaf08,1);
  pdVar2 = _dispatch_semaphore_create(0);
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(pdVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_new_0269d288);
  puVar3 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_new_0269d288);
  puVar3 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_new_0269d288);
  puVar3 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_d8 = &local_e0;
  local_e0 = 0;
  local_d0 = 0x20000000;
  local_cc = 0x20;
  local_c8 = 1;
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_allFriends_026ace98);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_e4 = SUB84(puVar3,0);
  _memset(auStack_140,0,0x40);
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_allFriends_026ace98);
  _objc_retainAutoreleasedReturnValue();
  local_230 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_230 != (undefined *)0x0) {
    lVar5 = *local_130;
    local_238 = (undefined *)0x0;
    do {
      do {
        if (*local_130 - lVar5 != 0) {
          _objc_enumerationMutation(*local_130 - lVar5,puVar1);
        }
        puVar3 = local_c0;
        uVar4 = *(undefined8 *)(local_138 + (long)local_238 * 8);
        local_178 = PTR___NSConcreteStackBlock_02578660;
        local_170 = 0xc2000000;
        local_16c = 0;
        local_168 = FUN_00fa86b0;
        local_160 = &DAT_02583920;
        local_100 = uVar4;
        (*(code *)PTR__objc_retain_02578638)();
        local_150 = &local_e0;
        local_148 = local_e4;
        local_158 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_addOperationWithBlock__026acf10,&local_178);
        _objc_storeStrong(&local_158,0);
        local_238 = local_238 + 1;
      } while (local_238 < local_230);
      local_230 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10)
      ;
      local_238 = (undefined *)0x0;
    } while (local_230 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c0,PTR_s_addOperationWithBlock__026acf10,&PTR___NSConcreteGlobalBlock_02583950);
  __Block_object_dispose(&local_e0,8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

