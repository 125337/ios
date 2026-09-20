// wcr_toggleFunctionBodyFromSwipe: @ 0155d400

/* Function Stack Size: 0x18 bytes */

void WCRefineTopBarProfileCardPresenter::wcr_toggleFunctionBodyFromSwipe_
               (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_50;
  ulong local_48;
  byte local_3a;
  byte local_39;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
  if (uVar1 == 3) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (((ulong)puVar3 & 1) == 0) {
      local_2c = 1;
    }
    else {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_38 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar1 & 1) == 0) {
        local_2c = 1;
      }
      else {
        FUN_01545618();
        if (uVar1 == 2) {
          uVar1 = local_38;
          _objc_getAssociatedObject(local_38,DAT_028c5eb8);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar1);
          local_39 = (byte)uVar4;
          uVar1 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_direction_026a5bb0);
          if ((uVar1 == 2) ||
             (uVar1 = local_28,
             (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_direction_026a5bb0), uVar1 == 1))
          {
            FUN_01555510(0);
            FUN_0155d844(local_38,(local_39 ^ 1) & 1,1);
            local_2c = 1;
          }
          else if ((local_39 & 1) == 0) {
            uVar1 = local_38;
            _objc_getAssociatedObject(local_38,DAT_028c5eb0);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar1);
            local_3a = (byte)uVar4;
            uVar1 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_direction_026a5bb0);
            if ((uVar1 == 8) && ((local_3a & 1) != 0)) {
              FUN_01555510();
              FUN_0155e5e0(local_38,0,1);
            }
            else {
              uVar1 = local_28;
              (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_direction_026a5bb0);
              if ((uVar1 == 4) && ((local_3a & 1) == 0)) {
                FUN_01555510();
                FUN_0155e5e0(local_38,1,1);
              }
            }
            local_2c = 1;
          }
          else {
            local_2c = 1;
          }
        }
        else {
          uVar1 = local_38;
          _objc_getAssociatedObject(local_38,DAT_028c5e80);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = local_38;
          local_48 = uVar1;
          _objc_getAssociatedObject(local_38,DAT_028c5e88);
          _objc_retainAutoreleasedReturnValue();
          local_50 = uVar4;
          if ((local_48 == 0) || (uVar4 == 0)) {
            local_2c = 1;
          }
          else {
            FUN_01555510();
            uVar1 = local_38;
            _objc_getAssociatedObject(local_38,DAT_028c5ea8);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar1);
            FUN_01550f58(local_38,((uint)uVar4 & 0xff ^ 1) & 1,1);
            local_2c = 0;
          }
          _objc_storeStrong(&local_50);
          _objc_storeStrong(&local_48,0);
        }
      }
      _objc_storeStrong(&local_38,0);
    }
  }
  else {
    local_2c = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

