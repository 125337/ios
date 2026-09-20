// FUN_004c694c @ 004c694c

void FUN_004c694c(double param_1,double param_2,ulong param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  ulong local_1a8;
  ulong local_1a0;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_4;
  local_b0 = param_3;
  (*DAT_028cac30)(param_3,param_4);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if ((((ulong)puVar3 & 1) != 0) &&
     (uVar4 = local_b0,
     (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_hasMainFrameButton_026a4008),
     (uVar4 & 1) != 0)) {
    _memset(auStack_110,0,0x40);
    uVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_1a0 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1a0 != 0) {
      lVar5 = *local_100;
      local_1a8 = 0;
      do {
        do {
          dVar7 = param_1;
          dVar8 = param_2;
          if (*local_100 - lVar5 != 0) {
            _objc_enumerationMutation(*local_100 - lVar5,uVar4);
            dVar7 = param_1;
            dVar8 = param_2;
          }
          uVar6 = *(ulong *)(local_108 + local_1a8 * 8);
          local_d0 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isHidden_026ca768);
          bVar1 = false;
          param_1 = dVar7;
          param_2 = dVar8;
          if ((uVar6 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_frame_026ca640);
            dVar9 = 44.0;
            bVar1 = false;
            param_1 = dVar8;
            param_2 = dVar9;
            if (dVar8 == 44.0) {
              param_1 = dVar7;
              (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_frame_026ca640);
              param_2 = 1.0;
              bVar1 = false;
              if (param_1 < 1.0) {
                param_2 = dVar9;
                param_1 = dVar8;
                (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_frame_026ca640);
                bVar1 = 0.0 < param_1;
              }
            }
          }
          if (bVar1) {
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setHidden__026ca970,1);
          }
          local_1a8 = local_1a8 + 1;
        } while (local_1a8 < local_1a0);
        local_1a0 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
                  );
        local_1a8 = 0;
      } while (local_1a0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar4);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

