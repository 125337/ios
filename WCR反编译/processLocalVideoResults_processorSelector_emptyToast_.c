// processLocalVideoResults:processorSelector:emptyToast: @ 017f5890

/* Function Stack Size: 0x28 bytes */

void WCRefineAssistFunctionViewController::processLocalVideoResults_processorSelector_emptyToast_
               (ID param_1,SEL param_2,ID param_3,SEL param_4,ID param_5)

{
  ulong uVar1;
  ID IVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  cfstringStruct *local_1d0;
  ulong local_190;
  ulong local_188;
  undefined *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  code *local_148;
  undefined *local_140;
  ID local_138;
  SEL local_130;
  undefined4 local_124;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  long local_d8;
  cfstringStruct *local_d0;
  SEL local_c8;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  local_d0 = (cfstringStruct *)0x0;
  local_c8 = param_4;
  _objc_storeStrong(&local_d0,param_5);
  local_d8 = 0;
  _memset(auStack_120,0,0x40);
  uVar1 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_188 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
  if (local_188 != 0) {
    lVar4 = *local_110;
    local_190 = 0;
    do {
      do {
        if (*local_110 - lVar4 != 0) {
          _objc_enumerationMutation(*local_110 - lVar4,uVar1);
        }
        uVar5 = *(ulong *)(local_118 + local_190 * 8);
        local_e0 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_itemProvider_026b3100);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar5);
        if ((uVar3 & 1) != 0) {
          _objc_storeStrong(&local_d8,local_e0);
          local_124 = 2;
          goto LAB_017f5a94;
        }
        local_190 = local_190 + 1;
      } while (local_190 < local_188);
      local_188 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
      local_190 = 0;
    } while (local_188 != 0);
  }
  local_124 = 0;
LAB_017f5a94:
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (local_d8 == 0) {
    if (local_d0 == (cfstringStruct *)0x0) {
      local_1d0 = &cf__gb;
    }
    else {
      local_1d0 = local_d0;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,local_1d0);
    local_124 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_ck_WSU_O__);
    lVar4 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_itemProvider_026b3100);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_b0;
    uVar6 = *(undefined8 *)PTR__kUTTypeMovie_02578728;
    local_158 = PTR___NSConcreteStackBlock_02578660;
    local_150 = 0xc2000000;
    local_14c = 0;
    local_148 = FUN_017f5c84;
    local_140 = &DAT_02589368;
    (*(code *)PTR__objc_retain_02578638)();
    local_138 = IVar2;
    local_130 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar4,PTR_s_loadFileRepresentationForTypeIde_026b5990,uVar6,&local_158);
    _objc_unsafeClaimAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(lVar4);
    _objc_storeStrong(&local_138,0);
    local_124 = 0;
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

