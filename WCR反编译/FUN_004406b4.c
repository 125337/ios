// FUN_004406b4 @ 004406b4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_004406b4(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  byte local_33c;
  ulong local_328;
  ulong local_2d0;
  ulong local_2c8;
  ulong local_1f8;
  ulong local_190;
  ulong local_188;
  ulong local_180;
  undefined1 auStack_178 [8];
  long local_170;
  long *local_168;
  ulong local_138;
  ulong local_130;
  ulong local_128;
  ulong local_120;
  ulong local_118;
  undefined *local_110;
  ulong local_108;
  ulong local_100;
  undefined4 local_f8;
  byte local_f1;
  ulong local_f0;
  ulong local_e8 [3];
  ulong local_d0;
  undefined *local_c8;
  ulong local_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  local_c8 = (undefined *)0x0;
  _objc_storeStrong(&local_c8,param_4);
  uVar7 = local_b0;
  FUN_0045210c();
  _objc_retainAutoreleasedReturnValue();
  local_f1 = 0;
  puVar3 = local_c8;
  local_d0 = uVar7;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_item_026a1890);
  if (-1 < (long)puVar3) {
    puVar3 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_item_026a1890);
    uVar7 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
    local_1f8 = local_d0;
    if ((long)puVar3 < (long)uVar7) {
      puVar3 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_item_026a1890);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1f8,PTR_s_objectAtIndexedSubscript__0269cc78,puVar3);
      _objc_retainAutoreleasedReturnValue();
      local_f1 = 1;
      local_f0 = local_1f8;
      goto LAB_0044085c;
    }
  }
  local_1f8 = 0;
LAB_0044085c:
  (*(code *)PTR__objc_retain_02578638)();
  local_e8[0] = local_1f8;
  if ((local_f1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_f0);
  }
  uVar2 = (uint)local_e8[0];
  FUN_0045299c();
  if ((uVar2 & 1) == 0) {
    uVar7 = local_d0;
    FUN_004523d4(local_d0,_WCRLocalEmoticonPid);
    puVar3 = local_c8;
    local_108 = 0;
    local_100 = uVar7;
    (*(code *)PTR__objc_retain_02578638)();
    local_110 = puVar3;
    if ((local_100 != 0x7fffffffffffffff) && (local_d0 != 0)) {
      uVar4 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d0,PTR_s_objectAtIndexedSubscript__0269cc78,local_100);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = local_108;
      local_108 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar7);
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_removeObjectAtIndex__0269d530,local_100);
      puVar5 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_item_026a1890);
      puVar3 = PTR__OBJC_CLASS___NSIndexPath_026ce288;
      if ((long)local_100 < (long)puVar5) {
        puVar5 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_item_026a1890);
        puVar6 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_section_0269e988);
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_indexPathForItem_inSection__026a3d28,puVar5 + -1,puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = local_110;
        local_110 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
    }
    (*DAT_028ca9f0)(local_b0,local_b8,local_c0,local_110);
    uVar7 = local_100;
    if ((local_108 != 0) && (local_d0 != 0)) {
      local_118 = local_100;
      uVar4 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
      if ((long)uVar4 < (long)uVar7) {
        uVar7 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
        local_118 = uVar7;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d0,PTR_s_insertObject_atIndex__0269eac0,local_108,local_118);
    }
    uVar7 = local_e8[0];
    FUN_004512d8();
    _objc_retainAutoreleasedReturnValue();
    local_120 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_length_0269cca0);
    if ((uVar7 != 0) &&
       (uVar7 = local_b0,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_b0,PTR_s_respondsToSelector__026ca818,PTR_s_setSelectedPid__026a3d30),
       (uVar7 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setSelectedPid__026a3d30,local_120);
    }
    uVar7 = local_c0;
    puVar3 = PTR__OBJC_CLASS___UICollectionView_026ce1f8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UICollectionView_026ce1f8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
    uVar4 = local_c0;
    if ((uVar7 & 1) == 0) {
      local_f8 = 1;
    }
    else {
      uVar7 = local_c0;
      (*(code *)PTR__objc_retain_02578638)();
      local_128 = uVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,PTR_s_selectItemAtIndexPath_animated_s_026a3d38,local_c8,0,0);
      uVar7 = local_128;
      (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_visibleCells_0269fc48);
      _objc_retainAutoreleasedReturnValue();
      local_130 = uVar7;
      _memset(auStack_178,0,0x40);
      uVar7 = local_130;
      (*(code *)PTR__objc_retain_02578638)();
      local_2c8 = uVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8,0x10);
      if (local_2c8 != 0) {
        lVar9 = *local_168;
        local_2d0 = 0;
        do {
          do {
            if (*local_168 - lVar9 != 0) {
              _objc_enumerationMutation(*local_168 - lVar9,uVar7);
            }
            local_138 = *(ulong *)(local_170 + local_2d0 * 8);
            uVar4 = local_128;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_128,PTR_s_indexPathForCell__0269e208,local_138);
            _objc_retainAutoreleasedReturnValue();
            bVar1 = false;
            local_180 = uVar4;
            if ((uVar4 == 0) ||
               ((*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_item_026a1890), (long)uVar4 < 0))
            {
LAB_00440fdc:
              local_328 = 0;
            }
            else {
              uVar4 = local_180;
              (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_item_026a1890);
              uVar8 = local_d0;
              (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
              local_328 = local_d0;
              if ((long)uVar8 <= (long)uVar4) goto LAB_00440fdc;
              uVar4 = local_180;
              (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_item_026a1890);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_328,PTR_s_objectAtIndexedSubscript__0269cc78,uVar4);
              _objc_retainAutoreleasedReturnValue();
              bVar1 = true;
              local_190 = local_328;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_188 = local_328;
            if (bVar1) {
              (*(code *)PTR__objc_release_02578630)(local_190);
            }
            uVar4 = local_120;
            (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0);
            local_33c = 0;
            if (uVar4 != 0) {
              uVar4 = local_188;
              FUN_004512d8();
              _objc_retainAutoreleasedReturnValue();
              uVar8 = uVar4;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_33c = (byte)uVar8;
              (*(code *)PTR__objc_release_02578630)(uVar4);
            }
            uVar4 = local_138;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_138,PTR_s_respondsToSelector__026ca818,PTR_s_setWxSelected__026a3cf0);
            if ((uVar4 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_138,PTR_s_setWxSelected__026a3cf0,local_33c & 1);
            }
            _objc_storeStrong(&local_188);
            _objc_storeStrong(&local_180,0);
            local_2d0 = local_2d0 + 1;
          } while (local_2d0 < local_2c8);
          local_2c8 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8,
                     0x10);
          local_2d0 = 0;
        } while (local_2c8 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar7);
      _objc_storeStrong(&local_130);
      _objc_storeStrong(&local_128,0);
      local_f8 = 0;
    }
    _objc_storeStrong(&local_120);
    _objc_storeStrong(&local_110,0);
    _objc_storeStrong(&local_108,0);
  }
  else {
    (*DAT_028ca9f0)(local_b0,local_b8,local_c0,local_c8);
    local_f8 = 1;
  }
  _objc_storeStrong(local_e8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

