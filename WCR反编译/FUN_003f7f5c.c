// FUN_003f7f5c @ 003f7f5c

void FUN_003f7f5c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong local_158;
  ulong local_140;
  ulong local_e8;
  ulong local_b8;
  ulong local_b0;
  int local_a8;
  byte local_a1;
  ulong local_a0;
  ulong local_98;
  undefined *local_90;
  bool local_81;
  ulong local_80;
  ulong local_78;
  undefined1 local_6d;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulong local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_40 = param_4;
  local_38 = param_3;
  local_30 = param_1;
  uStack_28 = param_2;
  FUN_003f4598();
  if ((param_3 & 1) == 0) {
    uStack_48 = uStack_28;
    local_50 = local_30;
    (*DAT_028ca550)(local_30,uStack_28,local_38,local_40);
  }
  else {
    puVar3 = PTR_WCRefineInputBoxGestureSupport_026ce678;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineInputBoxGestureSupport_026ce678,
               PTR_s_hasInputTextInInputToolView__026a34f0,local_38);
    if (((ulong)puVar3 & 1) == 0) {
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      if (((ulong)puVar4 & 1) == 0) {
        puVar3 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar3 = PTR_WCRefineInputBoxGestureSupport_026ce678;
        if (((ulong)puVar4 & 1) != 0) {
          puVar4 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_normalizedAction__026a3438);
          _objc_retainAutoreleasedReturnValue();
          local_90 = puVar3;
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          puVar3 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_90,PTR_s_isEqualToString__0269ccc8,_WCRInputBoxActionNone);
          if (((ulong)puVar3 & 1) == 0) {
            local_a1 = 0;
            uVar6 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_textView_0269d0f8);
            if ((uVar6 & 1) == 0) {
              local_140 = 0;
            }
            else {
              local_140 = local_38;
              (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_textView_0269d0f8);
              _objc_retainAutoreleasedReturnValue();
              local_a1 = 1;
              local_a0 = local_140;
            }
            uVar6 = local_140;
            (*(code *)PTR__objc_retain_02578638)();
            uVar2 = (uint)uVar6;
            local_98 = local_140;
            if ((local_a1 & 1) != 0) {
              uVar6 = local_a0;
              (*(code *)PTR__objc_release_02578630)();
              uVar2 = (uint)uVar6;
            }
            if ((local_98 != 0) && (FUN_003fab0c(), (uVar2 & 1) != 0)) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineInputBoxGestureSupport_026ce678,
                         PTR_s_performAction_growTextView__026a34d0,local_90,local_98);
            }
            local_a8 = 1;
            _objc_storeStrong(&local_98,0);
          }
          else {
            local_a8 = 0;
          }
          _objc_storeStrong(&local_90,0);
          if (local_a8 != 0) {
            return;
          }
        }
        uVar6 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_textView_0269d0f8);
        bVar1 = (uVar6 & 1) == 0;
        if (bVar1) {
          local_158 = 0;
        }
        else {
          local_158 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_textView_0269d0f8);
          _objc_retainAutoreleasedReturnValue();
          local_b8 = local_158;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = local_158;
        if (!bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_b8);
        }
        FUN_003fa92c(local_b0);
        (*DAT_028ca550)(local_30,uStack_28,local_38,local_40);
        FUN_003fa92c(local_b0);
        _objc_storeStrong(&local_b0,0);
      }
      else {
        puVar3 = PTR_WCRefineInputBoxGestureSupport_026ce678;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineInputBoxGestureSupport_026ce678,
                   PTR_s_isVoiceRecordHoldActive_026a34a0);
        if (((ulong)puVar3 & 1) == 0) {
          puVar3 = PTR_WCRefineInputBoxGestureSupport_026ce678;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineInputBoxGestureSupport_026ce678,
                     PTR_s_beginVoiceRecordHoldWithInputToo_026a34c8,local_38);
          local_6d = SUB81(puVar3,0);
        }
        uVar6 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_textView_0269d0f8);
        local_81 = false;
        bVar1 = (uVar6 & 1) == 0;
        if (bVar1) {
          local_e8 = 0;
        }
        else {
          local_e8 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_textView_0269d0f8);
          _objc_retainAutoreleasedReturnValue();
          local_80 = local_e8;
        }
        local_81 = !bVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_78 = local_e8;
        if ((local_81 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_80);
        }
        FUN_003fa92c(local_78);
        _objc_storeStrong(&local_78,0);
      }
    }
    else {
      uStack_58 = uStack_28;
      local_60 = local_30;
      (*DAT_028ca550)(local_30,uStack_28,local_38,local_40);
    }
  }
  return;
}

