// FUN_000fb0dc @ 000fb0dc

void FUN_000fb0dc(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double local_98;
  long local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double dStack_58;
  undefined4 local_50;
  long local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_6);
  lVar2 = local_28;
  local_38 = param_7;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar2;
  if ((local_30 == 0) || (lVar2 == 0)) {
    local_50 = 1;
    goto LAB_000fb628;
  }
  lVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_40;
  (*(code *)PTR__objc_release_02578630)();
  if (lVar3 != lVar2) {
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addSubview__026ca4c0,local_30);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bringSubviewToFront__026ca550,local_30);
  FUN_000fd110(local_30);
  local_60 = param_1;
  dStack_58 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
  local_88 = param_2;
  local_80 = param_1;
  local_78 = param_3;
  local_70 = param_4;
  _CGRectGetWidth(param_2,param_1);
  param_2 = param_2 - local_60;
  lVar2 = local_30;
  dVar5 = local_60;
  local_68 = param_2;
  _objc_getAssociatedObject(local_30,DAT_026df888);
  _objc_retainAutoreleasedReturnValue();
  local_90 = lVar2;
  if (lVar2 == 0) {
LAB_000fb3e8:
    param_2 = param_4;
    dVar5 = param_3;
    local_98 = local_60;
    FUN_000fd67c(local_28,local_40,local_38,local_30);
    lVar2 = local_30;
    uVar1 = DAT_026df888;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(lVar2,uVar1,puVar4,1);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
    _CGRectGetHeight(param_2,dVar5);
    dVar5 = 1.0;
    if (param_2 < 1.0) goto LAB_000fb3e8;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
    local_98 = dVar5;
  }
  lVar2 = local_30;
  uVar1 = DAT_026df8a0;
  puVar4 = PTR__OBJC_CLASS___NSValue_026ce1f0;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
  (*(code *)PTR__objc_msgSend_02578628)(dVar5,param_2,puVar4,PTR_s_valueWithCGSize__0269ec00);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(lVar2,uVar1,puVar4,1);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  dVar5 = local_68;
  dVar6 = local_60;
  dVar7 = dStack_58;
  FUN_000fd7cc();
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar5,local_98,dVar6,dVar7,local_30,PTR_s_setFrame__026ca960);
  _objc_storeStrong(&local_90,0);
  local_50 = 0;
LAB_000fb628:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

