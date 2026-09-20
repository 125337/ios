// WCRefineHDMomentsInjectToActionSheet @ 00339a04

/* WCRefineHDMomentsInjectToActionSheet(objc_object*, objc_object*) */

byte WCRefineHDMomentsInjectToActionSheet(objc_object *param_1,objc_object *param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar4;
  undefined **ppuVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  ulong uVar9;
  ulong local_1d0;
  ulong local_1c8;
  char *local_178;
  char *local_170;
  undefined *local_168;
  undefined4 local_160;
  undefined4 local_15c;
  code *local_158;
  undefined *local_150;
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [8];
  undefined **local_138;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  ulong local_d8;
  int local_d0;
  ulong local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  ulong *puVar3;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  puVar3 = &local_c0;
  local_c0 = 0;
  _objc_storeStrong(puVar3,param_2);
  uVar2 = (uint)puVar3;
  FUN_0033a150();
  if ((((uVar2 & 1) == 0) || (local_b8 == 0)) || (local_c0 == 0)) {
    local_a9 = 0;
    local_d0 = 1;
  }
  else {
    uVar4 = local_b8;
    FUN_0033a1ec(local_b8,local_c0);
    if ((uVar4 & 1) == 0) {
      local_a9 = 0;
      local_d0 = 1;
    }
    else {
      uVar4 = local_c0;
      FUN_0033a3a4();
      _objc_retainAutoreleasedReturnValue();
      local_d8 = uVar4;
      _memset(auStack_120,0,0x40);
      uVar4 = local_d8;
      (*(code *)PTR__objc_retain_02578638)();
      local_1c8 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
      if (local_1c8 != 0) {
        lVar8 = *local_110;
        local_1d0 = 0;
        do {
          do {
            if (*local_110 - lVar8 != 0) {
              _objc_enumerationMutation(*local_110 - lVar8,uVar4);
            }
            uVar9 = *(ulong *)(local_118 + local_1d0 * 8);
            local_e0 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isEqualToString__0269ccc8,&cf_bngqGr_)
            ;
            if (((uVar9 & 1) != 0) ||
               (uVar9 = local_e0,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_e0,PTR_s_containsString__0269d0b0,&cf_ngqGr), (uVar9 & 1) != 0)) {
              local_a9 = 0;
              local_d0 = 1;
              goto LAB_00339cec;
            }
            local_1d0 = local_1d0 + 1;
          } while (local_1d0 < local_1c8);
          local_1c8 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                     0x10);
          local_1d0 = 0;
        } while (local_1c8 != 0);
      }
      local_d0 = 0;
LAB_00339cec:
      (*(code *)PTR__objc_release_02578630)(uVar4);
      if (local_d0 == 0) {
        _objc_initWeak(auStack_128,local_b8);
        _objc_initWeak(auStack_130,local_c0);
        ppuVar5 = &local_168;
        local_168 = PTR___NSConcreteStackBlock_02578660;
        local_160 = 0xc2000000;
        local_15c = 0;
        local_158 = FUN_0033a85c;
        local_150 = &DAT_0257c368;
        _objc_copyWeak(auStack_148,auStack_128);
        _objc_copyWeak(auStack_140,auStack_130);
        _objc_retainBlock();
        pcVar6 = "WCActionSheetItem";
        local_138 = ppuVar5;
        _objc_getClass();
        local_170 = pcVar6;
        if (((pcVar6 == (char *)0x0) ||
            ((*(code *)PTR__objc_msgSend_02578628)
                       (pcVar6,PTR_s_instancesRespondToSelector__0269da90,
                        PTR_s_initWithTitle__0269d2f8), ((ulong)pcVar6 & 1) == 0)) ||
           (uVar4 = local_c0,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_c0,PTR_s_respondsToSelector__026ca818,
                      PTR_s_addButtonWithItem_atIndex__026a2168), (uVar4 & 1) == 0)) {
          local_a9 = 0;
          local_d0 = 1;
        }
        else {
          pcVar6 = local_170;
          _objc_alloc();
          pcVar7 = pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_initWithTitle__0269d2f8,&cf_bngqGr_);
          _objc_retainAutoreleasedReturnValue();
          local_178 = pcVar7;
          (*(code *)PTR__objc_release_02578630)(pcVar6);
          pcVar6 = local_178;
          puVar1 = PTR_s_setEventAction__026a0d80;
          ppuVar5 = local_138;
          _objc_retainBlock();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar6,puVar1);
          (*(code *)PTR__objc_release_02578630)(ppuVar5);
          uVar4 = local_c0;
          pcVar6 = local_178;
          puVar1 = PTR_s_addButtonWithItem_atIndex__026a2168;
          uVar9 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0);
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,puVar1,pcVar6,uVar9);
          local_a9 = 1;
          local_d0 = 1;
          _objc_storeStrong(&local_178,0);
        }
        _objc_storeStrong(&local_138,0);
        _objc_destroyWeak(auStack_140);
        _objc_destroyWeak(auStack_148);
        _objc_destroyWeak(auStack_130);
        _objc_destroyWeak(auStack_128);
      }
      _objc_storeStrong(&local_d8,0);
    }
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

