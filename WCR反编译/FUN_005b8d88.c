// FUN_005b8d88 @ 005b8d88

void FUN_005b8d88(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_40;
  ulong local_38 [3];
  undefined8 local_20;
  ulong local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    (*DAT_028cb720)(local_18,local_20);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setForceDisableProgressBar__026a5c08,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setM_toolViewHidden__026a5c10,0);
    uVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_controlView_026a5c18);
    _objc_retainAutoreleasedReturnValue();
    local_38[0] = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_respondsToSelector__026ca818,PTR_s_setToolViewHidden__026a5c20);
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_setToolViewHidden__026a5c20,0);
    }
    uVar3 = local_38[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38[0],PTR_s_respondsToSelector__026ca818,PTR_s_showProgressBarView_026a5c28);
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_showProgressBarView_026a5c28);
    }
    uVar3 = local_38[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38[0],PTR_s_respondsToSelector__026ca818,
               PTR_s_onUpdateProgressExpandingStatus__026a5c30);
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38[0],PTR_s_onUpdateProgressExpandingStatus__026a5c30,1);
    }
    local_40 = 0;
    uVar3 = local_38[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38[0],PTR_s_respondsToSelector__026ca818,PTR_s_progressBar_026a5c38);
    if ((uVar3 & 1) != 0) {
      uVar4 = local_38[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_progressBar_026a5c38);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_40;
      local_40 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    uVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,
               PTR_s_isExpandingProgressWithAnimation_026a5c40);
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_isExpandingProgressWithAnimation_026a5c40,1);
    }
    _objc_storeStrong(&local_40);
    _objc_storeStrong(local_38,0);
  }
  return;
}

