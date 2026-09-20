// FUN_007210dc @ 007210dc

void FUN_007210dc(undefined8 param_1)

{
  uint uVar1;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  dispatch_time_t dVar6;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  ulong local_70;
  byte local_61;
  ulong local_60;
  ulong local_58;
  byte local_49;
  ulong local_48;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  ulong *puVar2;
  
  puVar2 = &local_28;
  local_28 = 0;
  _objc_storeStrong(puVar2,param_1);
  uVar1 = (uint)puVar2;
  if ((local_28 == 0) || (FUN_0071ef54(), (uVar1 & 1) == 0)) {
    local_38 = 1;
  }
  else {
    uVar3 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_0232427a);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_28;
    if ((uVar4 & 1) == 0) {
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar3,&DAT_0232427a,puVar5,1);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      uVar3 = local_28;
      FUN_0071f3b4();
      _objc_retainAutoreleasedReturnValue();
      local_40 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_cancelTrackingWithEvent__026a77f8,0);
      FUN_00721720();
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar3;
      if (uVar3 == 0) {
        _objc_setAssociatedObject(local_28,&DAT_0232427a,0,1);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__g_b0R_bV);
        local_38 = 1;
      }
      else {
        FUN_007218c4();
        local_49 = (byte)uVar3;
        uVar4 = local_48;
        FUN_00721a58(local_48,(uint)uVar3 & 1);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_28;
        local_58 = uVar4;
        FUN_007221a8();
        _objc_retainAutoreleasedReturnValue();
        local_60 = uVar3;
        if ((local_58 == 0) || (uVar3 == 0)) {
          _objc_setAssociatedObject(local_28,&DAT_0232427a,0,1);
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S1Y_);
          local_38 = 1;
        }
        else {
          FUN_007224e8(local_49 & 1);
          local_61 = 0;
          uVar3 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR_s_respondsToSelector__026ca818,
                     PTR_s_processInsertedAsset__026a7800);
          if ((uVar3 & 1) == 0) {
            uVar3 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_60,PTR_s_respondsToSelector__026ca818,
                       PTR_s_SendImageMessageByMMAsset__026a7808);
            if ((uVar3 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_60,PTR_s_SendImageMessageByMMAsset__026a7808,local_58);
              local_61 = 1;
            }
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_60,PTR_s_processInsertedAsset__026a7800,local_58);
            local_61 = 1;
          }
          uVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_respondsToSelector__026ca818,
                     PTR_s_hideSendCaptrueViewAnimated__026a77c0);
          if ((uVar3 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_hideSendCaptrueViewAnimated__026a77c0,1);
          }
          if ((local_61 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S1Y_);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
          }
          dVar6 = _dispatch_time(0,800000000);
          puVar5 = PTR___dispatch_main_q_02578680;
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_28;
          local_90 = PTR___NSConcreteStackBlock_02578660;
          local_88 = 0xc2000000;
          local_84 = 0;
          local_80 = FUN_007225f4;
          local_78 = &DAT_02578c20;
          (*(code *)PTR__objc_retain_02578638)();
          local_70 = uVar3;
          _dispatch_after(dVar6,puVar5,&local_90);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          _objc_storeStrong(&local_70,0);
          local_38 = 0;
        }
        _objc_storeStrong(&local_60);
        _objc_storeStrong(&local_58,0);
      }
      _objc_storeStrong(&local_48);
      _objc_storeStrong(&local_40,0);
    }
    else {
      local_38 = 1;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

