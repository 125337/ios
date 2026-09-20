// FUN_00ee4224 @ 00ee4224

/* WARNING: Removing unreachable block (ram,0x00ee4480) */

void FUN_00ee4224(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *local_68;
  undefined4 local_5c;
  long local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = (undefined *)0x0;
  _objc_storeStrong(&local_50,param_1);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_2);
  if ((local_50 == (undefined *)0x0) ||
     (lVar1 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_5c = 1;
  }
  else {
    puVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_viewWithTag__026cabe0,0x57435254);
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)PTR__CGRectZero_025782f0,
                 *(undefined8 *)(PTR__CGRectZero_025782f0 + 8),
                 *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
                 *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18));
      puVar2 = local_68;
      local_68 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setTag__026caa80,DAT_0232c398);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setUserInteractionEnabled__026caad8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setTextAlignment__026caa90,1);
      puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4031000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_02578160,
                 PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setFont__026ca958);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setTextColor__026caa98);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addSubview__026ca4c0,local_68);
      puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
      puVar3 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_centerXAnchor_0269ce00);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_centerXAnchor_0269ce00);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_constraintEqualToAnchor__0269ce08);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = local_68;
      local_48 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_centerYAnchor_0269ce10);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_centerYAnchor_0269ce10);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_constraintEqualToAnchor__0269ce08);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = local_68;
      local_40 = puVar8;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_leadingAnchor_0269ce20);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_leadingAnchor_0269ce20);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar9;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x405e000000000000,puVar9,PTR_s_constraintGreaterThanOrEqualToAn_0269ce28);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = local_68;
      local_38 = puVar11;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_trailingAnchor_0269cf88);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_trailingAnchor_0269cf88);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar12;
      (*(code *)PTR__objc_msgSend_02578628)
                (0xc051800000000000,puVar12,PTR_s_constraintLessThanOrEqualToAncho_026ab8f0);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_30 = puVar14;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48
                 ,4);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_activateConstraints__0269ce58);
      (*(code *)PTR__objc_release_02578630)(puVar15);
      (*(code *)PTR__objc_release_02578630)(puVar14);
      (*(code *)PTR__objc_release_02578630)(puVar13);
      (*(code *)PTR__objc_release_02578630)(puVar12);
      (*(code *)PTR__objc_release_02578630)(puVar11);
      (*(code *)PTR__objc_release_02578630)(puVar10);
      (*(code *)PTR__objc_release_02578630)(puVar9);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setText__026caa88,local_58);
    _objc_storeStrong(&local_68,0);
    local_5c = 0;
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

