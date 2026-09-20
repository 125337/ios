// addFrostedBackgroundTo:cornerRadius: @ 0198747c

/* Function Stack Size: 0x20 bytes */

void WCRefineFileManagerViewController::addFrostedBackgroundTo_cornerRadius_
               (ID param_1,SEL param_2,ID param_3,double param_4)

{
  double dVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *local_78;
  undefined *local_70;
  double local_68;
  undefined8 local_60;
  SEL local_58;
  ID local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_60 = 0;
  local_58 = param_2;
  local_50 = param_1;
  _objc_storeStrong(&local_60,param_3);
  puVar2 = PTR__OBJC_CLASS___UIBlurEffect_026cdf90;
  local_68 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIBlurEffect_026cdf90,PTR_s_effectWithStyle__026ca628,7);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIVisualEffectView_026cdf98;
  local_70 = puVar2;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_78 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
  dVar1 = local_68;
  puVar2 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(dVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setClipsToBounds__026ca8c8,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_insertSubview_atIndex__026ca748,local_78,0);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
  puVar3 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_leadingAnchor_0269ce20);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_leadingAnchor_0269ce20);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_constraintEqualToAnchor__0269ce08);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = local_78;
  local_48 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_trailingAnchor_0269cf88);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_trailingAnchor_0269cf88);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_constraintEqualToAnchor__0269ce08);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = local_78;
  local_40 = puVar8;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_topAnchor_0269ce30);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_topAnchor_0269ce30);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_constraintEqualToAnchor__0269ce08);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = local_78;
  local_38 = puVar11;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_bottomAnchor_0269ce38);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_bottomAnchor_0269ce38);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar12;
  (*(code *)PTR__objc_msgSend_02578628)(puVar12,PTR_s_constraintEqualToAnchor__0269ce08);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = puVar14;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_activateConstraints__0269ce58);
  (*(code *)PTR__objc_release_02578630)(puVar15);
  (*(code *)PTR__objc_release_02578630)(puVar14);
  (*(code *)PTR__objc_release_02578630)(uVar13);
  (*(code *)PTR__objc_release_02578630)(puVar12);
  (*(code *)PTR__objc_release_02578630)(puVar11);
  (*(code *)PTR__objc_release_02578630)(uVar10);
  (*(code *)PTR__objc_release_02578630)(puVar9);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_release_02578630)(uVar7);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(uVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

