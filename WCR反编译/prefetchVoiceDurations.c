// prefetchVoiceDurations @ 01f89e64

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineVoicePackPickerViewController::prefetchVoiceDurations
          (WCRefineVoicePackPickerViewController *this,ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  undefined *puVar4;
  ID IVar5;
  long lVar6;
  ulong uVar7;
  double in_d0;
  ulong local_198;
  ulong local_190;
  undefined *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  code *local_148;
  undefined *local_140;
  undefined1 auStack_138 [8];
  ID local_130;
  undefined1 auStack_128 [8];
  ID local_120;
  uint local_118;
  byte local_111;
  ulong local_110;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  ulong local_c8;
  undefined *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_durationPrefetchPending_026c9b60);
  if ((param_1 & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = puVar4;
    _memset(auStack_108,0,0x40);
    IVar5 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_items_0269e4b0);
    _objc_retainAutoreleasedReturnValue();
    local_190 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_190 != 0) {
      lVar6 = *local_f8;
      local_198 = 0;
      do {
        do {
          if (*local_f8 - lVar6 != 0) {
            _objc_enumerationMutation(*local_f8 - lVar6,IVar5);
          }
          uVar7 = *(ulong *)(local_100 + local_198 * 8);
          local_c8 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isDirectory_026b0ba0);
          local_111 = 0;
          bVar3 = true;
          if ((uVar7 & 1) == 0) {
            uVar7 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_absolutePath_026ae300);
            _objc_retainAutoreleasedReturnValue();
            local_111 = 1;
            local_110 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)();
            bVar3 = uVar7 == 0;
          }
          if ((local_111 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_110);
          }
          if ((!bVar3) &&
             ((*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineVoicePackStore_026cea20,
                         PTR_s_cachedDurationSecondsForItem__026b0c48,local_c8), puVar4 = local_c0,
             in_d0 < 0.0)) {
            uVar7 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_absolutePath_026ae300);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(uVar7);
          }
          local_198 = local_198 + 1;
        } while (local_198 < local_190);
        local_190 = IVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10
                  );
        local_198 = 0;
      } while (local_190 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar5);
    puVar4 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
    if (puVar4 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setDurationPrefetchPending__026c9b68,1);
      IVar5 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_statsGeneration_026c99b0);
      local_120 = IVar5;
      _objc_initWeak(auStack_128,local_b0);
      puVar2 = local_c0;
      puVar1 = PTR_WCRefineVoicePackStore_026cea20;
      local_158 = PTR___NSConcreteStackBlock_02578660;
      local_150 = 0xc2000000;
      local_14c = 0;
      local_148 = FUN_01f8a31c;
      local_140 = &DAT_0258cf00;
      _objc_copyWeak(auStack_138,auStack_128);
      local_130 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_prefetchDurationsForPaths_comple_026c9810,puVar2,&local_158);
      _objc_destroyWeak(auStack_138);
      _objc_destroyWeak(auStack_128);
    }
    local_118 = (uint)(puVar4 == (undefined *)0x0);
    _objc_storeStrong(&local_c0,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

