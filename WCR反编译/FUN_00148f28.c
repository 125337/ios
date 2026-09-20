// FUN_00148f28 @ 00148f28

void FUN_00148f28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  byte local_14c;
  ulong local_68;
  byte local_59;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  undefined4 local_40;
  undefined *local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_msgAttachmentBeautifyEnabled_0269f440);
  if (((ulong)puVar1 & 1) == 0) {
    local_40 = 1;
  }
  else {
    uVar2 = local_28;
    FUN_001495b8();
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar2;
    if (uVar2 == 0) {
      local_40 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      _objc_getAssociatedObject();
      _objc_retainAutoreleasedReturnValue();
      local_50 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_50;
      puVar1 = PTR_WCRAttachmentVideoBackgroundView_026ce310;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRAttachmentVideoBackgroundView_026ce310,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      uVar3 = local_50;
      if ((uVar2 & 1) == 0) {
        local_40 = 1;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_58 = uVar3;
        uVar2 = local_28;
        FUN_00149860();
        local_59 = (byte)uVar2;
        uVar2 = local_28;
        _objc_getAssociatedObject(local_28,&DAT_028c87e1);
        _objc_retainAutoreleasedReturnValue();
        local_14c = 0;
        local_68 = uVar2;
        if (uVar2 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_boolValue_026ca540);
          local_14c = (byte)uVar2;
        }
        uVar2 = local_28;
        if ((local_68 == 0) || ((local_59 & 1) != (local_14c & 1))) {
          puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_59 & 1
                    );
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(uVar2,&DAT_028c87e1,puVar1,1);
          (*(code *)PTR__objc_release_02578630)(puVar1);
          if ((local_59 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_stop_0269dd58);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_start_0269f448);
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_bounds_026ca548);
            uVar2 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_playerLayer_0269f290);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(param_1,param_2,param_3,param_4);
            (*(code *)PTR__objc_release_02578630)(uVar2);
          }
          local_40 = 0;
        }
        else {
          if ((local_59 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_bounds_026ca548);
            uVar2 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_playerLayer_0269f290);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(param_1,param_2,param_3,param_4);
            (*(code *)PTR__objc_release_02578630)(uVar2);
          }
          local_40 = 1;
        }
        _objc_storeStrong(&local_68);
        _objc_storeStrong(&local_58,0);
      }
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

