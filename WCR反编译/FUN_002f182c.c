// FUN_002f182c @ 002f182c

void FUN_002f182c(double param_1,double param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *local_68;
  undefined4 local_5c;
  double local_58;
  double local_50;
  double local_38;
  double local_30;
  long local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_4;
  local_18 = param_3;
  _objc_storeStrong(&local_28,param_5);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_velocityInView__026cabd0,local_18);
  local_38 = param_1;
  local_30 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_translationInView__026cabb0,local_18);
  local_58 = param_2;
  local_50 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
  if (lVar1 == 3) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_gestureScreenshotTitleSwipeEnabl_026a1f68);
    if (((ulong)puVar2 & 1) == 0) {
      local_5c = 1;
    }
    else {
      uVar3 = local_18;
      FUN_002f67a4();
      if ((uVar3 & 1) == 0) {
        if (30.0 <= ABS(local_58)) {
          if (ABS(local_50) <= ABS(local_58)) {
            if ((0.0 < local_58) && (((ulong)puVar2 & 1) != 0)) {
              FUN_002ef120();
            }
            local_5c = 0;
          }
          else {
            local_5c = 1;
          }
        }
        else {
          local_5c = 1;
        }
      }
      else {
        local_5c = 1;
      }
    }
    _objc_storeStrong(&local_68,0);
  }
  else {
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
    if (lVar1 != 4) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
    }
    local_5c = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

