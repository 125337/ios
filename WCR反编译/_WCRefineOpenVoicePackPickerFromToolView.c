// _WCRefineOpenVoicePackPickerFromToolView @ 008c9e74

void _WCRefineOpenVoicePackPickerFromToolView(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_90;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  uint local_28;
  ulong local_18;
  ulong *puVar2;
  
  puVar2 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar2,param_1);
  uVar1 = (uint)puVar2;
  FUN_008ca334();
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_SNS_u);
    local_28 = 1;
  }
  else {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (((ulong)puVar4 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQ_T_uSR);
      local_28 = 1;
    }
    else {
      uVar5 = local_18;
      FUN_008caddc();
      _objc_retainAutoreleasedReturnValue();
      local_30 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_length_0269cca0);
      uVar6 = local_18;
      if (uVar5 == 0) {
        puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
        if ((uVar6 & 1) == 0) {
          local_90 = 0;
        }
        else {
          local_90 = local_18;
        }
        FUN_008cb338();
        _objc_retainAutoreleasedReturnValue();
        local_38 = local_90;
        if (local_90 == 0) {
          FUN_008cb618();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = local_38;
          local_38 = local_90;
          (*(code *)PTR__objc_release_02578630)(uVar6);
        }
        uVar6 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_GetContact_0269d2c0);
        if ((uVar6 & 1) != 0) {
          uVar6 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_GetContact_0269d2c0);
          _objc_retainAutoreleasedReturnValue();
          local_40 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar6,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsUsrName_0269d638);
          if ((uVar6 & 1) != 0) {
            uVar5 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_m_nsUsrName_0269d638);
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar5;
            FUN_008cb6a0();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = local_30;
            local_30 = uVar7;
            (*(code *)PTR__objc_release_02578630)(uVar6);
            (*(code *)PTR__objc_release_02578630)(uVar5);
          }
          _objc_storeStrong(&local_40,0);
        }
        _objc_storeStrong(&local_38,0);
      }
      uVar6 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
      if (uVar6 != 0) {
        FUN_008cb7ec(local_30);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSS_MRO);
      }
      local_28 = (uint)(uVar6 == 0);
      _objc_storeStrong(&local_30,0);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

