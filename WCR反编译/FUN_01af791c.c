// FUN_01af791c @ 01af791c

void FUN_01af791c(double param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  ulong uVar6;
  double dVar7;
  undefined *local_f8;
  undefined *local_e8;
  undefined *local_e0;
  undefined *local_88;
  undefined *local_78;
  undefined *local_68;
  undefined *local_58;
  undefined *local_50;
  double local_48;
  undefined *local_40;
  undefined4 local_34;
  double local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = param_1;
  if ((local_28 == 0) || (param_1 <= 0.0)) {
    local_34 = 1;
  }
  else {
    puVar5 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    dVar7 = local_30;
    local_40 = puVar5;
    FUN_01b03158();
    local_48 = dVar7;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setClipsToBounds__026ca8c8,1);
    uVar6 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar6);
    dVar7 = local_48;
    uVar6 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar6);
    puVar5 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_avatarCornerBorderEnabled_0269dfc8);
    if ((((ulong)puVar5 & 1) == 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_avatarCornerBorderSize_0269dfd0),
       dVar7 <= 0.0)) {
      uVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0);
      (*(code *)PTR__objc_release_02578630)(uVar6);
      uVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar6);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_avatarCornerBorderSize_0269dfd0);
      uVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(dVar7);
      (*(code *)PTR__objc_release_02578630)();
      FUN_01b032e4();
      bVar4 = false;
      bVar1 = false;
      bVar3 = false;
      bVar2 = false;
      if ((uVar6 & 1) == 0) {
        local_78 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_avatarCornerBorderColorLight_0269dfd8);
        _objc_retainAutoreleasedReturnValue();
        bVar3 = true;
        bVar2 = local_78 == (undefined *)0x0;
        local_f8 = local_78;
        if (bVar2) {
          local_88 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_lightGrayColor_0269dfe0);
          _objc_retainAutoreleasedReturnValue();
          local_f8 = local_88;
        }
        local_e8 = local_f8;
      }
      else {
        local_58 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_avatarCornerBorderColorDark_0269dfe8);
        _objc_retainAutoreleasedReturnValue();
        bVar4 = true;
        bVar1 = local_58 == (undefined *)0x0;
        local_e0 = local_58;
        if (bVar1) {
          local_68 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_lightGrayColor_0269dfe0);
          _objc_retainAutoreleasedReturnValue();
          local_e0 = local_68;
        }
        local_e8 = local_e0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_50 = local_e8;
      if (bVar2) {
        (*(code *)PTR__objc_release_02578630)(local_88);
      }
      if (bVar3) {
        (*(code *)PTR__objc_release_02578630)(local_78);
      }
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      if (bVar4) {
        (*(code *)PTR__objc_release_02578630)(local_58);
      }
      puVar5 = local_50;
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_CGColor_026ca470);
      uVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar6);
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

