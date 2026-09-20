// rebuildSceneChips @ 01c2844c

/* Function Stack Size: 0x10 bytes */

void WCRNameplateAdjustmentFloatingPanel::rebuildSceneChips(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  long lVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double local_270;
  ulong local_220;
  ulong local_218;
  undefined *local_158;
  double local_150;
  undefined8 local_148;
  double local_140;
  ID local_138;
  long local_130;
  undefined *local_128;
  double local_120;
  ID local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  undefined8 local_d0;
  SEL local_c8;
  ID local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = param_2;
  local_c0 = param_1;
  _memset(auStack_110,0,0x40);
  IVar1 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_chipScroll_026b29f8);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  local_218 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
  if (local_218 != 0) {
    lVar4 = *local_100;
    local_220 = 0;
    do {
      do {
        if (*local_100 - lVar4 != 0) {
          _objc_enumerationMutation(*local_100 - lVar4,IVar2);
        }
        local_d0 = *(undefined8 *)(local_108 + local_220 * 8);
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_removeFromSuperview_026ca800);
        local_220 = local_220 + 1;
      } while (local_220 < local_218);
      local_218 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
      local_220 = 0;
    } while (local_218 != 0);
  }
  (*(code *)PTR__objc_release_02578630)();
  FUN_01c28b2c();
  _objc_retainAutoreleasedReturnValue();
  local_120 = 12.0;
  uVar6 = *(undefined8 *)PTR__UIFontWeightMedium_02578150;
  dVar5 = 13.0;
  puVar3 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  local_118 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
  _objc_retainAutoreleasedReturnValue();
  local_128 = puVar3;
  for (local_130 = 0; lVar4 = local_130, IVar1 = local_118,
      (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_count_0269cfe0), lVar4 < (long)IVar1;
      local_130 = local_130 + 1) {
    IVar1 = local_118;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_118,PTR_s_objectAtIndexedSubscript__0269cc78,local_130);
    _objc_retainAutoreleasedReturnValue();
    local_b8 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
    local_b0 = local_128;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_138 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_b0,&local_b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_sizeWithAttributes__026cab08);
    local_150 = dVar5;
    local_148 = uVar6;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIButton_026cdfc8;
    local_140 = dVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,1);
    _objc_retainAutoreleasedReturnValue();
    local_158 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTag__026caa80,&UNK_00002454 + local_130);
    local_270 = local_140 + 22.0;
    if (local_270 <= 52.0) {
      local_270 = 52.0;
    }
    uVar6 = 0x4018000000000000;
    uVar7 = 0x403c000000000000;
    dVar5 = local_120;
    FUN_01c269f8();
    (*(code *)PTR__objc_msgSend_02578628)(dVar5,local_158,PTR_s_setFrame__026ca960);
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_setTitle_forState__026caab8,local_138,0);
    puVar3 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_titleLabel_026caba0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    dVar5 = 14.0;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_158,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_c0,
               PTR_s_sceneChipTapped__026c15e8,0x40);
    IVar1 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_chipScroll_026b29f8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_frame_026ca640);
    _CGRectGetMaxX(dVar5,uVar6,local_270,uVar7);
    uVar6 = 0x4020000000000000;
    dVar5 = dVar5 + 8.0;
    local_120 = dVar5;
    _objc_storeStrong(&local_158);
    _objc_storeStrong(&local_138,0);
  }
  dVar5 = local_120 + 4.0;
  uVar6 = 0x4044000000000000;
  FUN_01c28420();
  IVar1 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_chipScroll_026b29f8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(dVar5,uVar6);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  _objc_storeStrong(&local_128);
  _objc_storeStrong(&local_118,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

