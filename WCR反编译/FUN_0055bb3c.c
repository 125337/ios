// FUN_0055bb3c @ 0055bb3c

/* WARNING: Type propagation algorithm not settling */

void FUN_0055bb3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5,undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong local_398;
  ulong local_390;
  ulong local_2f0;
  ulong local_2e8;
  ulong local_260;
  undefined1 auStack_258 [8];
  long local_250;
  long *local_248;
  ulong local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  ulong local_1e0;
  undefined1 auStack_1d8 [8];
  long local_1d0;
  long *local_1c8;
  ulong local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  int local_170;
  ulong local_160 [3];
  ulong local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_160[1] = 0;
  local_160[2] = param_6;
  local_148 = param_5;
  local_140 = param_1;
  uStack_138 = param_2;
  _objc_storeStrong(local_160 + 1,param_7);
  uVar2 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_WCRefineFindWCTimeLineCellView_026a5090);
  _objc_retainAutoreleasedReturnValue();
  local_160[0] = uVar2;
  if (uVar2 == 0) {
    local_130 = 0;
    local_170 = 1;
  }
  else {
    uStack_188 = uStack_138;
    local_190 = local_140;
    uVar8 = local_140;
    uVar9 = uStack_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_convertPoint_toView__0269e548,uVar2);
    local_180 = uVar8;
    uStack_178 = uVar9;
    _memset(auStack_1d8,0,0x40);
    uVar2 = local_160[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_160[0],PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_2e8 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_2e8 != 0) {
      lVar4 = *local_1c8;
      local_2f0 = 0;
      do {
        do {
          if (*local_1c8 - lVar4 != 0) {
            _objc_enumerationMutation(*local_1c8 - lVar4,uVar2);
          }
          uVar5 = *(ulong *)(local_1d0 + local_2f0 * 8);
          local_198 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_class_0269cd60);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          local_1e0 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar5,PTR_s_containsString__0269d0b0,&cf_RichTextView);
          if ((((uVar5 & 1) == 0) &&
              (uVar5 = local_1e0,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1e0,PTR_s_containsString__0269d0b0,&cf_TextView), (uVar5 & 1) == 0))
             && (uVar5 = local_1e0,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1e0,PTR_s_containsString__0269d0b0,&cf_ContentDescView),
                (uVar5 & 1) == 0)) {
LAB_0055bebc:
            uVar5 = local_198;
            (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_subviews_026cab40);
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar5);
            iVar3 = 0;
            if (uVar7 != 0) {
              _memset(auStack_258,0,0x40);
              uVar5 = local_198;
              (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_subviews_026cab40);
              _objc_retainAutoreleasedReturnValue();
              local_390 = uVar5;
              (*(code *)PTR__objc_msgSend_02578628)();
              if (local_390 != 0) {
                lVar6 = *local_248;
                local_398 = 0;
                do {
                  do {
                    if (*local_248 - lVar6 != 0) {
                      _objc_enumerationMutation(*local_248 - lVar6,uVar5);
                    }
                    uVar7 = *(ulong *)(local_250 + local_398 * 8);
                    local_218 = uVar7;
                    (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_class_0269cd60);
                    _NSStringFromClass();
                    _objc_retainAutoreleasedReturnValue();
                    local_260 = uVar7;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar7,PTR_s_containsString__0269d0b0,&cf_RichTextView);
                    if ((((uVar7 & 1) == 0) &&
                        (uVar7 = local_260,
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_260,PTR_s_containsString__0269d0b0,&cf_TextView),
                        (uVar7 & 1) == 0)) &&
                       (uVar7 = local_260,
                       (*(code *)PTR__objc_msgSend_02578628)
                                 (local_260,PTR_s_containsString__0269d0b0,&cf_ContentDescView),
                       (uVar7 & 1) == 0)) {
LAB_0055c228:
                      local_170 = 0;
                    }
                    else {
                      uVar8 = local_180;
                      uVar9 = uStack_178;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_160[0],PTR_s_convertPoint_toView__0269e548,local_198);
                      uVar7 = local_218;
                      (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_frame_026ca640);
                      uVar1 = (uint)uVar7;
                      _CGRectContainsPoint();
                      uVar7 = local_218;
                      if ((uVar1 & 1) == 0) goto LAB_0055c228;
                      (*(code *)PTR__objc_retain_02578638)();
                      local_130 = uVar7;
                      local_170 = 1;
                    }
                    _objc_storeStrong(&local_260,0);
                    if (local_170 != 0) goto LAB_0055c2bc;
                    local_398 = local_398 + 1;
                  } while (local_398 < local_390);
                  local_390 = uVar5;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_258,
                             auStack_128,0x10);
                  local_398 = 0;
                } while (local_390 != 0);
              }
              local_170 = 0;
LAB_0055c2bc:
              (*(code *)PTR__objc_release_02578630)(uVar5);
              iVar3 = local_170;
              if (local_170 != 0) goto LAB_0055c2fc;
            }
            local_170 = 0;
          }
          else {
            uVar5 = local_198;
            (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_frame_026ca640);
            uVar1 = (uint)uVar5;
            uStack_208 = uStack_178;
            local_210 = local_180;
            local_200 = uVar9;
            local_1f8 = uVar8;
            local_1f0 = param_3;
            local_1e8 = param_4;
            _CGRectContainsPoint();
            uVar5 = local_198;
            if ((uVar1 & 1) == 0) goto LAB_0055bebc;
            (*(code *)PTR__objc_retain_02578638)();
            local_130 = uVar5;
            local_170 = 1;
            iVar3 = 1;
          }
LAB_0055c2fc:
          _objc_storeStrong(iVar3,&local_1e0,0);
          if (local_170 != 0) goto LAB_0055c388;
          local_2f0 = local_2f0 + 1;
        } while (local_2f0 < local_2e8);
        local_2e8 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_a8,0x10
                  );
        local_2f0 = 0;
      } while (local_2e8 != 0);
    }
    local_170 = 0;
LAB_0055c388:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_170 == 0) {
      local_130 = 0;
      local_170 = 1;
    }
  }
  _objc_storeStrong(local_160);
  _objc_storeStrong(local_160 + 1,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_130);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

