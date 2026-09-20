// FUN_000a1b70 @ 000a1b70

byte FUN_000a1b70(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  double dVar7;
  int local_128;
  int local_cc;
  ulong local_48;
  ulong local_40;
  undefined8 local_38;
  undefined8 local_30;
  bool local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_40 = 0;
  local_38 = param_5;
  _objc_storeStrong(&local_40,param_6);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_7);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    if (DAT_028c8038 == (code *)0x0) {
      local_cc = 1;
    }
    else {
      uVar6 = local_30;
      (*DAT_028c8038)(local_30,local_38,local_40,local_48);
      local_cc = (int)uVar6;
    }
    local_21 = local_cc != 0;
    goto LAB_000a1fe0;
  }
  uVar4 = local_40;
  FUN_000a2b9c();
  if ((uVar4 & 1) != 0) {
    uVar4 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UISlider_026ce248;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UISlider_026ce248,PTR_s_class_0269cd60);
    uVar5 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    if ((uVar5 & 1) != 0) {
      local_21 = false;
      goto LAB_000a1fe0;
    }
    puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    FUN_000a5318();
    uVar4 = local_48;
    if (((ulong)puVar3 & 1) != 0) {
      local_21 = false;
      goto LAB_000a1fe0;
    }
    uVar5 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_locationInView__026ca798);
    (*(code *)PTR__objc_release_02578630)(uVar5);
    uVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    param_3 = param_3 - param_1;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    bVar1 = true;
    if (0.0 <= param_3) {
      puVar2 = PTR_WCRefineConfig_026cdf58;
      dVar7 = param_3;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = dVar7 < param_3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    if (bVar1) {
      local_21 = false;
      goto LAB_000a1fe0;
    }
  }
  if (DAT_028c8038 == (code *)0x0) {
    local_128 = 1;
  }
  else {
    uVar6 = local_30;
    (*DAT_028c8038)(local_30,local_38,local_40,local_48);
    local_128 = (int)uVar6;
  }
  local_21 = local_128 != 0;
LAB_000a1fe0:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

