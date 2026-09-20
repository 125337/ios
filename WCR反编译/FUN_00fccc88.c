// FUN_00fccc88 @ 00fccc88

void FUN_00fccc88(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *local_50;
  ulong local_48;
  uint local_3c;
  long local_38;
  ulong local_30;
  undefined *local_28;
  undefined *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  if ((local_30 == 0) ||
     (lVar2 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    local_3c = 1;
  }
  else {
    uVar3 = local_30;
    _objc_getAssociatedObject(local_30,&DAT_028e3022);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    local_48 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    bVar1 = (uVar3 & 1) == 0;
    if (bVar1) {
      puVar4 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      _objc_alloc_init();
      local_50 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setText__026caa88,local_38);
      puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4028000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                 PTR_s_systemFontOfSize__0269cc50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setFont__026ca958);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setTextColor__026caa98);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setTextAlignment__026caa90);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setTag__026caa80,0xe1b55);
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_addSubview__026ca4c0,local_50);
      puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
      puVar5 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_centerXAnchor_0269ce00);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_centerXAnchor_0269ce00);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_constraintEqualToAnchor__0269ce08);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = local_50;
      local_28 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_topAnchor_0269ce30);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_centerYAnchor_0269ce10);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4020000000000000,puVar7,PTR_s_constraintEqualToAnchor_constant_0269ce18);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_20 = puVar9;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_28
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_activateConstraints__0269ce58);
      (*(code *)PTR__objc_release_02578630)(puVar10);
      (*(code *)PTR__objc_release_02578630)(puVar9);
      (*(code *)PTR__objc_release_02578630)(uVar8);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      _objc_setAssociatedObject(local_30,&DAT_028e3022,local_50,1);
      _objc_storeStrong(&local_50,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setText__026caa88,local_38);
    }
    local_3c = (uint)!bVar1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

