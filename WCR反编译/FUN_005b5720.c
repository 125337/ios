// FUN_005b5720 @ 005b5720

byte FUN_005b5720(double param_1,double param_2,double param_3,long param_4,undefined8 param_5,
                 undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  double dVar6;
  double dVar7;
  long local_170;
  long local_80;
  long local_48;
  long local_40;
  undefined8 local_38;
  long local_30;
  bool local_21;
  
  local_40 = 0;
  local_38 = param_5;
  local_30 = param_4;
  _objc_storeStrong(&local_40,param_6);
  lVar1 = local_30;
  _objc_getAssociatedObject(local_30,&DAT_028cb786);
  _objc_retainAutoreleasedReturnValue();
  local_48 = lVar1;
  if (local_40 == lVar1) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    lVar1 = local_48;
    if (((ulong)puVar3 & 1) == 0) {
      local_21 = false;
    }
    else {
      lVar4 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_velocityInView__026cabd0);
      dVar6 = param_2;
      (*(code *)PTR__objc_release_02578630)(lVar4);
      lVar1 = local_48;
      lVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      local_170 = lVar4;
      if (lVar4 == 0) {
        local_80 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        local_170 = local_80;
      }
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_locationInView__026ca798,local_170);
      if (lVar4 == 0) {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      (*(code *)PTR__objc_release_02578630)(lVar4);
      puVar2 = PTR__OBJC_CLASS___UIScreen_026cdf70;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      dVar7 = param_3;
      FUN_005ce40c();
      if ((dVar6 < param_3 / 6.0) || (param_3 - dVar7 < dVar6)) {
        local_21 = false;
      }
      else {
        if (0.0 <= param_1) {
          puVar2 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
        else {
          puVar2 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
        if (((dword *)puVar5 == &MACH_HEADER.cputype) || ((0.0 <= param_1 && (param_1 <= 0.0)))) {
          local_21 = false;
        }
        else {
          local_21 = ABS(param_2) * DAT_023241d0 <= ABS(param_1);
        }
      }
    }
  }
  else {
    lVar1 = local_30;
    (*DAT_028cb6f0)(local_30,local_38,local_40);
    local_21 = (bool)((byte)lVar1 & 1);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

