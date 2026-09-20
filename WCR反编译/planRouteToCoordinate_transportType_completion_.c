// planRouteToCoordinate:transportType:completion: @ 00f5d9a0

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x30 bytes */

void WCRefineFakeLocationEngine::planRouteToCoordinate_transportType_completion_
               (ID param_1,SEL param_2,CLLocationCoordinate2D param_3,long_long param_4,ID param_5,
               undefined4 param_6)

{
  undefined *puVar1;
  double dVar2;
  long lVar3;
  undefined8 in_d0;
  undefined8 uVar4;
  undefined8 in_d1;
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  code *local_e8;
  undefined *local_e0;
  long local_d8;
  undefined1 auStack_d0 [40];
  double local_a8;
  undefined8 local_a0;
  byte local_98;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  byte local_79;
  double local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined *local_58;
  long local_50;
  double local_48;
  SEL local_40;
  double local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_48 = param_3.field0_0x0;
  local_50 = 0;
  local_40 = param_2;
  local_38 = (double)param_1;
  local_30 = in_d0;
  uStack_28 = in_d1;
  _objc_storeStrong(&local_50,param_3.field1_0x8);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_fakeLocationLatitude_026ac690);
  puVar1 = local_58;
  uVar4 = in_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_fakeLocationLongitude_026ac698);
  _CLLocationCoordinate2DMake();
  local_68 = in_d0;
  uStack_60 = uVar4;
  _CLLocationCoordinate2DIsValid(in_d0,uVar4);
  if ((((ulong)puVar1 & 1) == 0) ||
     (_CLLocationCoordinate2DIsValid(local_30,uStack_28), ((ulong)puVar1 & 1) == 0)) {
    if (local_50 != 0) {
      (**(code **)(local_50 + 0x10))(local_50,0,&cf_w_peHe);
    }
    local_6c = 1;
  }
  else {
    local_78 = local_48;
    if (local_48 == 2.96439387504748e-323) {
      dVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(local_68,uStack_60,local_30,uStack_28);
      local_78 = dVar2;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setFakeLocationMoveSpeedMps__026ac748);
    if ((local_78 == 1.97626258336499e-323) || (local_78 == 2.47032822920623e-323)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,uStack_60,local_30,uStack_28,local_38,
                 PTR_s_applyStraightRouteFrom_to_comple_026ac750,local_50);
      local_6c = 1;
    }
    else {
      local_79 = local_78 == 4.94065645841247e-324 || local_78 == 9.88131291682493e-324;
      local_88 = 2;
      if (local_78 != 4.94065645841247e-324 && local_78 != 9.88131291682493e-324) {
        local_88 = 1;
      }
      _objc_initWeak(auStack_90,local_38);
      dVar2 = local_38;
      uVar4 = local_88;
      local_f8 = PTR___NSConcreteStackBlock_02578660;
      local_f0 = 0xc2000000;
      local_ec = 0;
      local_e8 = FUN_00f5ddcc;
      local_e0 = &DAT_02583368;
      _objc_copyWeak(auStack_d0,auStack_90);
      local_98 = local_79 & 1;
      local_a8 = local_78;
      lVar3 = local_50;
      (*(code *)PTR__objc_retain_02578638)();
      local_a0 = local_88;
      local_d8 = lVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,uStack_60,local_30,uStack_28,dVar2,
                 PTR_s_requestMKDirectionsFrom_to_mkTra_026ac760,uVar4,&local_f8);
      _objc_storeStrong(&local_d8,0);
      _objc_destroyWeak(auStack_d0);
      _objc_destroyWeak(auStack_90);
      local_6c = 0;
    }
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  return;
}

