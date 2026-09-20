// FUN_021defc8 @ 021defc8

void FUN_021defc8(undefined *param_1)

{
  double *pdVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  double dVar5;
  undefined *local_e8;
  undefined8 local_78;
  undefined1 auStack_48 [24];
  
  pdVar1 = (double *)(unaff_x20 + WCRSuperFloatFanMenuView::buttonSize);
  _swift_beginAccess(pdVar1,auStack_48,0x20,0);
  dVar5 = *pdVar1;
  _swift_endAccess(auStack_48);
  dVar5 = dVar5 * 0.5;
  puVar2 = param_1;
  FUN_02222960(param_1,local_78);
  _objc_retainAutoreleasedReturnValue();
  FUN_02222f40(dVar5);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  _objc_opt_self();
  FUN_022220e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_02222d60(param_1,local_78);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  FUN_02222e60(param_1,local_78,1);
  puVar2 = param_1;
  FUN_021e34b8();
  puVar3 = puVar2;
  FUN_02222960();
  _objc_retainAutoreleasedReturnValue();
  FUN_02222f40();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  _objc_opt_self();
  FUN_022220e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_02222d60(puVar2,local_78);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  FUN_021e3048();
  puVar3 = param_1;
  FUN_02222960(param_1,local_78);
  _objc_retainAutoreleasedReturnValue();
  FUN_02222da0(dVar5);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = param_1;
  FUN_02222960(param_1,local_78);
  _objc_retainAutoreleasedReturnValue();
  if (dVar5 <= 0.0) {
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    _objc_opt_self();
    FUN_022220e0();
    _objc_retainAutoreleasedReturnValue();
    local_e8 = puVar4;
    FUN_02221d00();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  else {
    puVar4 = puVar3;
    FUN_021e2a0c();
    local_e8 = puVar4;
    FUN_02221d00();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  FUN_02222d80(puVar3,local_78);
  (*(code *)PTR__objc_release_02578630)(local_e8);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  FUN_021e3654(param_1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  return;
}

