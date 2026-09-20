// FUN_000a34a0 @ 000a34a0

void FUN_000a34a0(double param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  bool local_cc;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  long local_a8;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  long local_80;
  undefined *local_78;
  byte local_70;
  undefined *local_68;
  byte local_5a;
  undefined1 local_59;
  double local_58;
  undefined8 local_50;
  double local_48;
  double local_40;
  undefined4 local_34;
  long local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = local_28;
  FUN_000a38b4();
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar2;
  if (lVar2 == 0) {
    local_34 = 1;
  }
  else {
    FUN_000a4284(local_28,0);
    FUN_000a49c0(local_28);
    lVar2 = local_28;
    lVar3 = local_28;
    local_40 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_velocityInView__026cabd0);
    local_58 = param_1;
    local_50 = param_2;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    puVar4 = PTR__OBJC_CLASS___UIApplication_026ce010;
    local_48 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = puVar5 == (undefined1 *)((long)&MACH_HEADER.magic + 1);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_cc = true;
    dVar8 = local_40;
    if (local_40 < DAT_02323d18) {
      dVar8 = local_48;
      if (bVar1) {
        local_cc = 450.0 < local_48;
      }
      else {
        local_cc = local_48 < -450.0;
      }
    }
    local_5a = local_cc;
    puVar4 = PTR_WCRefineConfig_026cdf58;
    local_59 = bVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_68 = puVar6;
    if ((long)puVar6 < 1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_removeFromSuperview_026ca800);
      local_34 = 1;
    }
    else {
      puVar7 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      lVar2 = local_30;
      puVar6 = PTR___NSConcreteStackBlock_02578660;
      local_a0 = PTR___NSConcreteStackBlock_02578660;
      local_98 = 0xc2000000;
      local_94 = 0;
      local_90 = FUN_000a521c;
      local_88 = &DAT_02579cd0;
      (*(code *)PTR__objc_retain_02578638)();
      lVar3 = local_30;
      local_80 = lVar2;
      local_78 = local_68;
      local_70 = local_5a & 1;
      local_c8 = puVar6;
      local_c0 = 0xc2000000;
      local_bc = 0;
      local_b8 = FUN_000a52d4;
      local_b0 = &DAT_02579d00;
      (*(code *)PTR__objc_retain_02578638)();
      local_a8 = lVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar8,puVar4,PTR_s_animateWithDuration_animations_c_026ca4e8,&local_a0,&local_c8);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      _objc_storeStrong(&local_a8);
      _objc_storeStrong(&local_80,0);
      local_34 = 0;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

