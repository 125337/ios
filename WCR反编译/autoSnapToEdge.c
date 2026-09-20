// autoSnapToEdge @ 00905e48

/* Function Stack Size: 0x10 bytes */

void LogFloatingBall::autoSnapToEdge(ID param_1,SEL param_2)

{
  double dVar1;
  undefined *puVar2;
  ID IVar3;
  double dVar4;
  double in_d2;
  double local_130;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  ID local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  undefined1 local_99;
  double local_78;
  double local_70;
  double local_50;
  double local_48;
  double local_38;
  SEL local_30;
  ID local_28;
  
  dVar1 = DAT_02324020;
  dVar4 = DAT_02324020;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_ballView_026a9f28);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_48 = dVar4;
  (*(code *)PTR__objc_release_02578630)(param_1);
  local_38 = dVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
  IVar3 = local_28;
  local_70 = dVar4;
  local_50 = in_d2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballView_026a9f28);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  in_d2 = in_d2 / 2.0;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  local_d0 = local_28;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_99 = local_38 < local_50 / 2.0;
  local_a8 = dVar1;
  if ((bool)local_99) {
    local_130 = in_d2 * dVar1;
  }
  else {
    local_130 = local_50 - dVar1 * in_d2;
  }
  local_b0 = local_130;
  local_b8 = dVar1;
  local_f0 = PTR___NSConcreteStackBlock_02578660;
  local_e8 = 0xc2000000;
  local_e4 = 0;
  local_e0 = FUN_009060b8;
  local_d8 = &DAT_02580e60;
  local_78 = in_d2;
  (*(code *)PTR__objc_retain_02578638)();
  local_c8 = local_b0;
  local_c0 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3fd3333333333333,0,DAT_02323d00,puVar2,
             PTR_s_animateWithDuration_delay_usingS_026ca4f8,0x20000,&local_f0);
  _objc_storeStrong(&local_d0,0);
  return;
}

