// FUN_0103c704 @ 0103c704

void FUN_0103c704(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  dispatch_time_t dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  double dVar11;
  void *local_1a8;
  void *local_1a0;
  undefined *local_170;
  undefined4 local_168;
  undefined4 local_164;
  code *local_160;
  undefined *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  long local_138;
  byte local_130;
  double local_128;
  double local_120;
  long local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  long local_c8;
  long local_c0;
  undefined8 local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = param_1;
  local_c0 = param_1;
  pvVar1 = _memset(auStack_110,0,0x40);
  FUN_0103cbd8();
  _objc_retainAutoreleasedReturnValue();
  pvVar2 = pvVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(pvVar1);
  local_1a0 = pvVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (pvVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
  if (local_1a0 != (void *)0x0) {
    lVar9 = *local_100;
    local_1a8 = (void *)0x0;
    do {
      do {
        if (*local_100 - lVar9 != 0) {
          _objc_enumerationMutation(*local_100 - lVar9,pvVar2);
        }
        uVar10 = *(ulong *)(local_108 + (long)local_1a8 * 8);
        local_d0 = uVar10;
        (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_platform_026ad958);
        if ((uVar10 == 1) &&
           (uVar3 = local_d0,
           (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_finished_026a15b0),
           uVar10 = local_d0, puVar5 = PTR__OBJC_CLASS___NSError_026ce470, (uVar3 & 1) == 0)) {
          local_b8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
          local_b0 = &cf_bg_Sm;
          puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_b0,&local_b8,1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar5,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineLinkParser,
                     0xfffffffffffffffb);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_finishWithResult_error__026adfc0,0);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(puVar4);
        }
        local_1a8 = (void *)((long)local_1a8 + 1);
      } while (local_1a8 < local_1a0);
      local_1a0 = pvVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pvVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10)
      ;
      local_1a8 = (void *)0x0;
    } while (local_1a0 != (void *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(pvVar2);
  DAT_028e31d8 = DAT_028e31d8 + 1;
  local_120 = 0.0;
  local_118 = DAT_028e31d8;
  if (0.0 < DAT_028e31e0) {
    dVar11 = DAT_028e31e0;
    _CFAbsoluteTimeGetCurrent();
    local_128 = dVar11 - DAT_028e31e0;
    if (local_128 < 0.5) {
      local_120 = 0.5 - local_128;
    }
  }
  dVar6 = _dispatch_time(0,(long)(local_120 * 1000000000.0));
  puVar5 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_170 = PTR___NSConcreteStackBlock_02578660;
  local_168 = 0xc2000000;
  local_164 = 0;
  local_160 = FUN_0103cc4c;
  local_158 = &DAT_02582b08;
  local_138 = local_118;
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  (*(code *)PTR__objc_retain_02578638)();
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  local_140 = uVar7;
  (*(code *)PTR__objc_retain_02578638)();
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  local_150 = uVar8;
  (*(code *)PTR__objc_retain_02578638)();
  local_130 = *(byte *)(param_1 + 0x38) & 1;
  local_148 = uVar7;
  _dispatch_after(dVar6,puVar5,&local_170);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  _objc_storeStrong(&local_148);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

