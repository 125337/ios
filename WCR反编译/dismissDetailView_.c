// dismissDetailView: @ 01b1a2c4

/* Function Stack Size: 0x18 bytes */

void WCRefineKeywordAlertHistoryCardViewController::dismissDetailView_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong local_198;
  ulong local_190;
  undefined *local_170;
  undefined4 local_168;
  undefined4 local_164;
  code *local_160;
  undefined *local_158;
  ulong local_150;
  undefined *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  code *local_138;
  undefined *local_130;
  ulong local_128;
  undefined8 local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  undefined8 local_d0;
  undefined4 local_c4;
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
  if (local_c0 == 0) {
    local_c4 = 1;
  }
  else {
    local_d0 = 0;
    _memset(auStack_118,0,0x40);
    uVar3 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_190 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_190 != 0) {
      lVar5 = *local_108;
      local_198 = 0;
      do {
        do {
          if (*local_108 - lVar5 != 0) {
            _objc_enumerationMutation(*local_108 - lVar5,uVar3);
          }
          uVar6 = *(ulong *)(local_110 + local_198 * 8);
          puVar4 = PTR__OBJC_CLASS___UIGestureRecognizer_026ce450;
          local_d8 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIGestureRecognizer_026ce450,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
          if ((uVar6 & 1) == 0) {
            _objc_storeStrong(&local_d0,local_d8);
            local_c4 = 2;
            goto LAB_01b1a4ac;
          }
          local_198 = local_198 + 1;
        } while (local_198 < local_190);
        local_190 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_198 = 0;
      } while (local_190 != 0);
    }
    local_c4 = 0;
LAB_01b1a4ac:
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_c0;
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    puVar4 = PTR___NSConcreteStackBlock_02578660;
    local_148 = PTR___NSConcreteStackBlock_02578660;
    local_140 = 0xc2000000;
    local_13c = 0;
    local_138 = FUN_01b1a668;
    local_130 = &DAT_0257a7a0;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_d0;
    local_128 = uVar3;
    (*(code *)PTR__objc_retain_02578638)();
    uVar3 = local_c0;
    local_120 = uVar2;
    local_170 = puVar4;
    local_168 = 0xc2000000;
    local_164 = 0;
    local_160 = FUN_01b1a770;
    local_158 = &DAT_02579d00;
    (*(code *)PTR__objc_retain_02578638)();
    local_150 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323da8,puVar1,PTR_s_animateWithDuration_animations_c_026ca4e8,&local_148,
               &local_170);
    _objc_storeStrong(&local_150);
    _objc_storeStrong(&local_120,0);
    _objc_storeStrong(&local_128,0);
    _objc_storeStrong(&local_d0,0);
    local_c4 = 0;
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

