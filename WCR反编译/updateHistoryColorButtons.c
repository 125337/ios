// updateHistoryColorButtons @ 018fc44c

/* Function Stack Size: 0x10 bytes */

void WCRefineColorPickerController::updateHistoryColorButtons(ID param_1,SEL param_2)

{
  ulong uVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ID IVar11;
  ID IVar12;
  ID IVar13;
  ID IVar14;
  ID IVar15;
  ID IVar16;
  ID IVar17;
  ID IVar18;
  ID IVar19;
  ID IVar20;
  ID IVar21;
  ID IVar22;
  ID IVar23;
  ID IVar24;
  ID IVar25;
  ID IVar26;
  ID IVar27;
  ID IVar28;
  ID IVar29;
  ID IVar30;
  ID IVar31;
  ID IVar32;
  ID IVar33;
  undefined *puVar34;
  long lVar35;
  double dVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  ulong local_1c0;
  ulong local_1b8;
  undefined *local_170;
  ulong local_168;
  long local_160;
  double local_158;
  undefined8 local_150;
  double local_148;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  undefined8 local_100;
  SEL local_f8;
  ID local_f0;
  ID local_e8;
  ID local_e0;
  ID local_d8;
  ID local_d0;
  ID local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_f8 = param_2;
  local_f0 = param_1;
  _memset(auStack_140,0,0x40);
  IVar2 = local_f0;
  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_historyColorContentView_026b86f0);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  local_1b8 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10);
  if (local_1b8 != 0) {
    lVar35 = *local_130;
    local_1c0 = 0;
    do {
      do {
        if (*local_130 - lVar35 != 0) {
          _objc_enumerationMutation(*local_130 - lVar35,IVar3);
        }
        local_100 = *(undefined8 *)(local_138 + local_1c0 * 8);
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_removeFromSuperview_026ca800);
        local_1c0 = local_1c0 + 1;
      } while (local_1c0 < local_1b8);
      local_1b8 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10);
      local_1c0 = 0;
    } while (local_1b8 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar2 = local_f0;
  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_historyColors_026b88d8);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (IVar3 != 0) {
    local_148 = 36.0;
    local_150 = 0x4028000000000000;
    local_158 = 0.0;
    local_160 = 0;
    local_168 = 0;
    while( true ) {
      uVar1 = local_168;
      IVar2 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_historyColors_026b88d8);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
      if (IVar3 <= uVar1) break;
      puVar4 = PTR__OBJC_CLASS___UIButton_026cdfc8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,0);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_f0;
      local_170 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_historyColors_026b88d8);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      dVar36 = local_148 / 2.0;
      puVar4 = local_170;
      (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(dVar36);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = local_170;
      (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x4000000000000000);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
      _objc_retainAutoreleasedReturnValue();
      puVar34 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(0x3fe0000000000000);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar34,PTR_s_CGColor_026ca470);
      puVar5 = local_170;
      (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar34);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_CGColor_026ca470);
      puVar34 = local_170;
      (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar34);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      uVar38 = 0x4000000000000000;
      uVar37 = 0;
      FUN_018f9b3c();
      puVar4 = local_170;
      (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar37,uVar38);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = local_170;
      (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x3e4ccccd);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = local_170;
      (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x4008000000000000);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_setTag__026caa80,local_168);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_170,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_f0,
                 PTR_s_historyColorTapped__026b88e0,0x40);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_170,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
      IVar2 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_historyColorContentView_026b86f0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
      puVar5 = local_170;
      (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_widthAnchor_0269ce40);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_148);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = local_170;
      local_c0 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_heightAnchor_0269ce50);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_148);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = local_170;
      local_b8 = puVar8;
      (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_centerYAnchor_0269ce10);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_historyColorContentView_026b86f0);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_constraintEqualToAnchor__0269ce08);
      _objc_retainAutoreleasedReturnValue();
      puVar34 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_b0 = puVar10;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0
                 ,3);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_activateConstraints__0269ce58);
      (*(code *)PTR__objc_release_02578630)(puVar34);
      (*(code *)PTR__objc_release_02578630)(puVar10);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar9);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      if (local_160 == 0) {
        puVar4 = local_170;
        (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_leadingAnchor_0269ce20);
        _objc_retainAutoreleasedReturnValue();
        IVar2 = local_f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_historyColorContentView_026b86f0);
        _objc_retainAutoreleasedReturnValue();
        IVar3 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        puVar34 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_158,puVar4,PTR_s_constraintEqualToAnchor_constant_0269ce18);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar34);
        (*(code *)PTR__objc_release_02578630)(IVar3);
        (*(code *)PTR__objc_release_02578630)(IVar2);
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      else {
        puVar4 = local_170;
        (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_leadingAnchor_0269ce20);
        _objc_retainAutoreleasedReturnValue();
        lVar35 = local_160;
        (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_trailingAnchor_0269cf88);
        _objc_retainAutoreleasedReturnValue();
        puVar34 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_150,puVar4,PTR_s_constraintEqualToAnchor_constant_0269ce18);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar34);
        (*(code *)PTR__objc_release_02578630)(lVar35);
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      uVar1 = local_168;
      IVar2 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_historyColors_026b88d8);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      if (uVar1 == IVar3 - 1) {
        puVar4 = local_170;
        (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_trailingAnchor_0269cf88);
        _objc_retainAutoreleasedReturnValue();
        IVar2 = local_f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_historyColorContentView_026b86f0);
        _objc_retainAutoreleasedReturnValue();
        IVar3 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        puVar34 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (-local_158,puVar4,PTR_s_constraintEqualToAnchor_constant_0269ce18);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar34);
        (*(code *)PTR__objc_release_02578630)(IVar3);
        (*(code *)PTR__objc_release_02578630)(IVar2);
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      _objc_storeStrong(&local_160,local_170);
      _objc_storeStrong(&local_170,0);
      local_168 = local_168 + 1;
    }
    IVar2 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_historyColorContentView_026b86f0);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar11 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_historyColorScrollView_026b86e0);
    _objc_retainAutoreleasedReturnValue();
    IVar12 = IVar11;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar13 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    IVar14 = local_f0;
    local_e8 = IVar13;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_historyColorContentView_026b86f0);
    _objc_retainAutoreleasedReturnValue();
    IVar15 = IVar14;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar16 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_historyColorScrollView_026b86e0);
    _objc_retainAutoreleasedReturnValue();
    IVar17 = IVar16;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar18 = IVar15;
    (*(code *)PTR__objc_msgSend_02578628)(IVar15,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    IVar19 = local_f0;
    local_e0 = IVar18;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_historyColorContentView_026b86f0);
    _objc_retainAutoreleasedReturnValue();
    IVar20 = IVar19;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar21 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_historyColorScrollView_026b86e0);
    _objc_retainAutoreleasedReturnValue();
    IVar22 = IVar21;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar23 = IVar20;
    (*(code *)PTR__objc_msgSend_02578628)(IVar20,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    IVar24 = local_f0;
    local_d8 = IVar23;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_historyColorContentView_026b86f0);
    _objc_retainAutoreleasedReturnValue();
    IVar25 = IVar24;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar26 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_historyColorScrollView_026b86e0);
    _objc_retainAutoreleasedReturnValue();
    IVar27 = IVar26;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar28 = IVar25;
    (*(code *)PTR__objc_msgSend_02578628)(IVar25,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    IVar29 = local_f0;
    local_d0 = IVar28;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_historyColorContentView_026b86f0);
    _objc_retainAutoreleasedReturnValue();
    IVar30 = IVar29;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar31 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_historyColorScrollView_026b86e0);
    _objc_retainAutoreleasedReturnValue();
    IVar32 = IVar31;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar33 = IVar30;
    (*(code *)PTR__objc_msgSend_02578628)(IVar30,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    puVar34 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_c8 = IVar33;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_e8,5
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_activateConstraints__0269ce58);
    (*(code *)PTR__objc_release_02578630)(puVar34);
    (*(code *)PTR__objc_release_02578630)(IVar33);
    (*(code *)PTR__objc_release_02578630)(IVar32);
    (*(code *)PTR__objc_release_02578630)(IVar31);
    (*(code *)PTR__objc_release_02578630)(IVar30);
    (*(code *)PTR__objc_release_02578630)(IVar29);
    (*(code *)PTR__objc_release_02578630)(IVar28);
    (*(code *)PTR__objc_release_02578630)(IVar27);
    (*(code *)PTR__objc_release_02578630)(IVar26);
    (*(code *)PTR__objc_release_02578630)(IVar25);
    (*(code *)PTR__objc_release_02578630)(IVar24);
    (*(code *)PTR__objc_release_02578630)(IVar23);
    (*(code *)PTR__objc_release_02578630)(IVar22);
    (*(code *)PTR__objc_release_02578630)(IVar21);
    (*(code *)PTR__objc_release_02578630)(IVar20);
    (*(code *)PTR__objc_release_02578630)(IVar19);
    (*(code *)PTR__objc_release_02578630)(IVar18);
    (*(code *)PTR__objc_release_02578630)(IVar17);
    (*(code *)PTR__objc_release_02578630)(IVar16);
    (*(code *)PTR__objc_release_02578630)(IVar15);
    (*(code *)PTR__objc_release_02578630)(IVar14);
    (*(code *)PTR__objc_release_02578630)(IVar13);
    (*(code *)PTR__objc_release_02578630)(IVar12);
    (*(code *)PTR__objc_release_02578630)(IVar11);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_storeStrong(&local_160,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

