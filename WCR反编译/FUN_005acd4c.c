// FUN_005acd4c @ 005acd4c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_005acd4c(double param_1,double param_2,double param_3,long param_4,undefined8 param_5,
                 undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  long local_58;
  undefined4 local_50;
  long local_40;
  undefined8 local_38;
  long local_30;
  bool local_21;
  
  local_40 = 0;
  local_38 = param_5;
  local_30 = param_4;
  _objc_storeStrong(&local_40,param_6);
  lVar5 = local_40;
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_WCRefine_panGesture_026a5768);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (lVar5 == lVar1) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    lVar5 = local_40;
    if (((ulong)puVar3 & 1) == 0) {
      local_21 = false;
      local_50 = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = lVar5;
      (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_velocityInView__026cabd0,local_30);
      dVar6 = param_2;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_locationInView__026ca798,local_30);
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
        if (param_1 < 0.0) {
          puVar2 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
        else {
          puVar2 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
        if ((dword *)puVar4 == &MACH_HEADER.cputype) {
          local_21 = false;
        }
        else if ((param_1 < 0.0) || (0.0 < param_1)) {
          local_21 = ABS(param_2) * DAT_023241d0 <= ABS(param_1);
        }
        else {
          local_21 = false;
        }
      }
      local_50 = 1;
      _objc_storeStrong(&local_58,0);
    }
  }
  else {
    lVar5 = local_30;
    (*DAT_028cb6b8)(local_30,local_38,local_40);
    local_21 = (bool)((byte)lVar5 & 1);
    local_50 = 1;
  }
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

