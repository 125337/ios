// FUN_01ba4830 @ 01ba4830

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_01ba4830(undefined8 param_1,double param_2,undefined8 param_3,double param_4,
                 undefined8 param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  long local_118;
  undefined *local_98;
  long local_90;
  byte local_81;
  long local_80;
  byte local_71;
  long local_70;
  byte local_61;
  long local_60;
  long local_58 [4];
  undefined4 local_34;
  long local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  if (local_30 == 0) {
    local_21 = 0;
    local_34 = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (((ulong)puVar3 & 1) == 0) {
      lVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      local_61 = 0;
      local_71 = 0;
      local_81 = 0;
      local_118 = local_30;
      if (lVar4 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        local_81 = 1;
        local_80 = local_118;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        local_61 = 1;
        local_60 = local_118;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_71 = 1;
        local_70 = local_118;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_58[0] = local_118;
      if ((local_81 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      if ((local_71 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_70);
      }
      if ((local_61 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_60);
      }
      (*(code *)PTR__objc_release_02578630)(lVar4);
      lVar4 = local_58[0];
      (*(code *)PTR__objc_retain_02578638)();
      puVar2 = PTR__OBJC_CLASS___UIScreen_026cdf70;
      local_90 = lVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
      _objc_retainAutoreleasedReturnValue();
      local_98 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_bounds_026ca548);
      dVar7 = param_4;
      while (local_90 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_frame_026ca640);
        dVar6 = 1.0;
        if ((1.0 < dVar7) && (dVar6 = 1.0, 1.0 < param_4)) {
          dVar6 = 0.5;
          bVar1 = false;
          if (0.5 < param_2) {
            dVar6 = param_4 - 0.5;
            bVar1 = dVar7 < dVar6;
          }
          if (bVar1) {
            local_21 = 1;
            goto LAB_01ba4cd8;
          }
        }
        lVar5 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = local_90;
        local_90 = lVar5;
        (*(code *)PTR__objc_release_02578630)(lVar4);
        param_2 = dVar6;
      }
      local_21 = 0;
LAB_01ba4cd8:
      local_34 = 1;
      _objc_storeStrong(&local_98);
      _objc_storeStrong(&local_90,0);
      _objc_storeStrong(local_58,0);
    }
    else {
      local_21 = 1;
      local_34 = 1;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

