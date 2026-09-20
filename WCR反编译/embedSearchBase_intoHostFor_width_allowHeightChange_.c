// embedSearchBase:intoHostFor:width:allowHeightChange: @ 00fcfd7c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x2c bytes */

ID WCRefineHomeTableHeaderHost::embedSearchBase_intoHostFor_width_allowHeightChange_
             (ID param_1,SEL param_2,ID param_3,ID param_4,double param_5,bool param_6)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  undefined *local_1d0;
  undefined *local_1c8;
  undefined *local_160;
  undefined *local_158;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  ulong local_110;
  undefined8 local_108;
  undefined8 local_100;
  double local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined4 local_e0;
  byte local_d9;
  double local_d8;
  undefined *local_d0;
  undefined *local_c8;
  SEL local_c0;
  ID local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = (undefined *)0x0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  local_d0 = (undefined *)0x0;
  _objc_storeStrong(&local_d0,param_4);
  local_d9 = (byte)param_6;
  puVar3 = local_c8;
  local_d8 = param_5;
  FUN_00fcee64();
  if (((ulong)puVar3 & 1) == 0) {
    local_b0 = (undefined *)0x0;
    local_e0 = 1;
  }
  else {
    puVar3 = local_d0;
    _objc_getAssociatedObject(local_d0,&DAT_028e3040);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_tag_026cab98);
    if (puVar3 != (undefined *)0x7f152) {
      puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
      _objc_alloc();
      uVar10 = 0;
      uVar7 = 0;
      uVar8 = 0;
      dVar9 = local_d8;
      FUN_00fcfd30();
      local_108 = uVar7;
      local_100 = uVar8;
      local_f8 = dVar9;
      local_f0 = uVar10;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar7,uVar8,dVar9,uVar10,puVar4,PTR_s_initWithFrame__026ca6e8);
      puVar3 = local_e8;
      local_e8 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e8,PTR_s_setTag__026caa80,_kWCRHomeTableHeaderHostTag);
      puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setClipsToBounds__026ca8c8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setUserInteractionEnabled__026caad8,1);
    }
    _memset(auStack_150,0,0x40);
    puVar3 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_1c8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,0x10);
    if (local_1c8 != (undefined *)0x0) {
      lVar5 = *local_140;
      local_1d0 = (undefined *)0x0;
      do {
        do {
          if (*local_140 - lVar5 != 0) {
            _objc_enumerationMutation(*local_140 - lVar5,puVar4);
          }
          uVar6 = *(ulong *)(local_148 + (long)local_1d0 * 8);
          local_110 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_tag_026cab98);
          if ((((uVar6 != 0x7f154) &&
               (uVar6 = local_110,
               (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_tag_026cab98), uVar6 != 0x7f155
               )) && (local_110 - (long)local_c8 != 0)) &&
             (uVar6 = local_110, FUN_00fcee64(local_110 - (long)local_c8), (uVar6 & 1) == 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_removeFromSuperview_026ca800);
          }
          local_1d0 = local_1d0 + 1;
        } while (local_1d0 < local_1c8);
        local_1c8 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,
                   0x10);
        local_1d0 = (undefined *)0x0;
      } while (local_1c8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar3 = local_e8;
    _objc_getAssociatedObject(local_e8,&DAT_028e3044);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = false;
    bVar2 = false;
    local_158 = puVar3;
    if ((puVar3 != (undefined *)0x0) && (bVar2 = false, puVar3 != local_c8)) {
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      bVar2 = puVar3 == local_e8;
      local_160 = puVar3;
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_160);
    }
    if (bVar2) {
      (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_removeFromSuperview_026ca800);
    }
    puVar4 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_e8;
    (*(code *)PTR__objc_release_02578630)();
    if (puVar4 != puVar3) {
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_removeFromSuperview_026ca800);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e8,PTR_s_insertSubview_atIndex__026ca748,local_c8,0);
    }
    _objc_setAssociatedObject(local_e8,&DAT_028e3044,local_c8);
    _objc_setAssociatedObject(local_d0,&DAT_028e3040,local_e8,1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d8,local_b8,PTR_s_layoutSlotsInHost_base_tableView_026ad190,local_e8,local_c8,
               local_d0,local_d9 & 1);
    puVar3 = local_e8;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar3;
    local_e0 = 1;
    _objc_storeStrong(&local_158);
    _objc_storeStrong(&local_e8,0);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

