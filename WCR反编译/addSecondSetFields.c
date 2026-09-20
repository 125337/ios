// addSecondSetFields @ 01d4d328

/* Function Stack Size: 0x10 bytes */

void WCRefineScreenshotFrameEditorViewController::addSecondSetFields(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  double in_d2;
  undefined8 uVar7;
  undefined *local_160;
  undefined8 local_158;
  double local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined *local_138;
  undefined8 local_130;
  double local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined *local_110;
  undefined8 local_108;
  double local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  double local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  double local_b8;
  int local_ac;
  undefined *local_a8 [5];
  undefined8 local_80;
  undefined8 local_78;
  double local_70;
  undefined8 local_68;
  undefined *local_60;
  SEL local_58;
  ID local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = param_2;
  local_50 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_removeSecondSetFields_026c4848);
  IVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_coordinatePanel_026c4718);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc();
    IVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_coordinatePanel_026c4718);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    in_d2 = in_d2 - 30.0;
    uVar5 = 0x402e000000000000;
    uVar4 = 0x4066800000000000;
    uVar7 = 0x4034000000000000;
    FUN_01d42a30();
    local_80 = uVar5;
    local_78 = uVar4;
    local_70 = in_d2;
    local_68 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar5,uVar4,in_d2,uVar7,puVar2,PTR_s_initWithFrame__026ca6e8);
    local_60 = puVar2;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setText__026caa88,&cf___NVpMO);
    puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x402c000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
               PTR_s_boldSystemFontOfSize__0269cf28);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323d48,DAT_02323e10,DAT_02323e40,0x3ff0000000000000,
               PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setTag__026caa80,0x7531);
    IVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_coordinatePanel_026c4718);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    local_48 = &cf__N;
    local_40 = &cf_SN;
    local_38 = &cf__N;
    local_30 = &cf_SN;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4
              );
    _objc_retainAutoreleasedReturnValue();
    local_a8[0] = puVar2;
    for (local_ac = 0; local_ac < 4; local_ac = local_ac + 1) {
      local_b8 = (double)(local_ac * 0x23 + 0xd2);
      puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      _objc_alloc();
      uVar4 = 0x402e000000000000;
      uVar5 = 0x404e000000000000;
      uVar7 = 0x403e000000000000;
      dVar6 = local_b8;
      FUN_01d42a30();
      local_e0 = uVar4;
      local_d8 = dVar6;
      local_d0 = uVar5;
      local_c8 = uVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,dVar6,uVar5,uVar7,puVar2,PTR_s_initWithFrame__026ca6e8);
      puVar3 = local_a8[0];
      local_c0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a8[0],PTR_s_objectAtIndexedSubscript__0269cc78,(long)local_ac);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setText__026caa88);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setFont__026ca958);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3fd3333333333333,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithWhite_alpha__0269cf30);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setTextColor__026caa98);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_setTag__026caa80,(long)(local_ac + 0x753a));
      IVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_coordinatePanel_026c4718);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar1);
      puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      _objc_alloc();
      uVar7 = 0x403e000000000000;
      uVar4 = 0x4054000000000000;
      uVar5 = 0x4034000000000000;
      dVar6 = local_b8;
      FUN_01d42a30();
      local_108 = uVar4;
      local_100 = dVar6;
      local_f8 = uVar5;
      local_f0 = uVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,dVar6,uVar5,uVar7,puVar2,PTR_s_initWithFrame__026ca6e8);
      local_e8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setText__026caa88,&cf_X_);
      puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setFont__026ca958);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e8,PTR_s_setTag__026caa80,(long)(local_ac + 0x7544));
      IVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_coordinatePanel_026c4718);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar1);
      puVar2 = PTR__OBJC_CLASS___UITextField_026ce2a0;
      _objc_alloc();
      uVar5 = 0x4054000000000000;
      uVar7 = 0x403e000000000000;
      uVar4 = 0x4059000000000000;
      dVar6 = local_b8;
      FUN_01d42a30();
      local_130 = uVar4;
      local_128 = dVar6;
      local_120 = uVar5;
      local_118 = uVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,dVar6,uVar5,uVar7,puVar2,PTR_s_initWithFrame__026ca6e8);
      local_110 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setBorderStyle__026aa180);
      (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_setKeyboardType__026aec58);
      puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4028000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                 PTR_s_systemFontOfSize__0269cc50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_setFont__026ca958);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_110,PTR_s_setTag__026caa80,(long)(local_ac * 2 + 2000));
      (*(code *)PTR__objc_msgSend_02578628)
                (local_110,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_50,
                 PTR_s_coordinateFieldChanged2__026c4850);
      IVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_coordinatePanel_026c4718);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar1);
      puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      _objc_alloc();
      uVar5 = 0x4034000000000000;
      uVar7 = 0x403e000000000000;
      uVar4 = 0x4067c00000000000;
      dVar6 = local_b8;
      FUN_01d42a30();
      local_158 = uVar4;
      local_150 = dVar6;
      local_148 = uVar5;
      local_140 = uVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,dVar6,uVar5,uVar7,puVar2,PTR_s_initWithFrame__026ca6e8);
      local_138 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setText__026caa88,&cf_Y_);
      puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4026000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                 PTR_s_systemFontOfSize__0269cc50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setFont__026ca958);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_138,PTR_s_setTag__026caa80,(long)(local_ac + 0x754e));
      IVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_coordinatePanel_026c4718);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar1);
      puVar2 = PTR__OBJC_CLASS___UITextField_026ce2a0;
      _objc_alloc();
      uVar5 = 0x4054000000000000;
      uVar7 = 0x403e000000000000;
      uVar4 = 0x406a400000000000;
      dVar6 = local_b8;
      FUN_01d42a30();
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,dVar6,uVar5,uVar7,puVar2,PTR_s_initWithFrame__026ca6e8);
      local_160 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setBorderStyle__026aa180,3);
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_setKeyboardType__026aec58,4);
      puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4028000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                 PTR_s_systemFontOfSize__0269cc50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_setFont__026ca958);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_160,PTR_s_setTag__026caa80,(long)(local_ac * 2 + 0x7d1));
      (*(code *)PTR__objc_msgSend_02578628)
                (local_160,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_50,
                 PTR_s_coordinateFieldChanged2__026c4850,0x20000);
      IVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_coordinatePanel_026c4718);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar1);
      if (local_ac == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setLeftTopX2Field__026c4858,local_110);
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setLeftTopY2Field__026c4860,local_160);
      }
      else if (local_ac == 1) {
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setRightTopX2Field__026c4868,local_110)
        ;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setRightTopY2Field__026c4870,local_160)
        ;
      }
      else if (local_ac == 2) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_setLeftBottomX2Field__026c4878,local_110);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_setLeftBottomY2Field__026c4880,local_160);
      }
      else if (local_ac == 3) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_setRightBottomX2Field__026c4888,local_110);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_setRightBottomY2Field__026c4890,local_160);
      }
      _objc_storeStrong(&local_160);
      _objc_storeStrong(&local_138,0);
      _objc_storeStrong(&local_110,0);
      _objc_storeStrong(&local_e8,0);
      _objc_storeStrong(&local_c0,0);
    }
    _objc_storeStrong(local_ac + -4,local_a8);
    _objc_storeStrong(&local_60,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

