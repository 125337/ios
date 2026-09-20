// FUN_00256860 @ 00256860

void FUN_00256860(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  double dVar5;
  undefined *local_180;
  undefined *local_178;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined4 local_124;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (undefined *)0x0;
  _objc_storeStrong(&local_b8,param_2);
  local_c0 = (undefined *)0x0;
  puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _memset(auStack_120,0,0x40);
  puVar1 = local_c8;
  (*(code *)PTR__objc_retain_02578638)();
  local_178 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
  if (local_178 != (undefined *)0x0) {
    lVar3 = *local_110;
    local_180 = (undefined *)0x0;
    do {
      do {
        if (*local_110 - lVar3 != 0) {
          _objc_enumerationMutation(*local_110 - lVar3,puVar1);
        }
        uVar4 = *(ulong *)(local_118 + (long)local_180 * 8);
        local_e0 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isHidden_026ca768);
        if (((uVar4 & 1) == 0) &&
           ((*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_alpha_026ca4d8),
           DAT_02323d38 <= param_1)) {
          if (local_c0 != (undefined *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_windowLevel_026a0f70);
            dVar5 = param_1;
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_windowLevel_026a0f70);
            if (param_1 <= dVar5) goto LAB_00256b04;
          }
          _objc_storeStrong(&local_c0,local_e0);
        }
LAB_00256b04:
        local_180 = local_180 + 1;
      } while (local_180 < local_178);
      local_178 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10)
      ;
      local_180 = (undefined *)0x0;
    } while (local_178 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_c0;
  if (local_c0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_130 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_130;
    if (local_130 == (undefined *)0x0) {
      puVar1 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_findTopVCView_026a0f78);
      _objc_retainAutoreleasedReturnValue();
      local_138 = puVar1;
      if (puVar1 == (undefined *)0x0) {
        puVar1 = PTR_WCRefineHelper_026ce000;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
        _objc_retainAutoreleasedReturnValue();
        local_140 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        local_b0 = local_b8;
        if (puVar1 == (undefined *)0x0) {
          (*(code *)PTR__objc_retain_02578638)();
        }
        else {
          puVar1 = local_140;
          (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_view_026cabd8);
          _objc_retainAutoreleasedReturnValue();
          local_b0 = puVar1;
        }
        local_124 = 1;
        _objc_storeStrong(&local_140,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_124 = 1;
        local_b0 = puVar1;
      }
      _objc_storeStrong(&local_138,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = puVar1;
      local_124 = 1;
    }
    _objc_storeStrong(&local_130,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar1;
    local_124 = 1;
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

