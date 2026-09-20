// FUN_003f61a0 @ 003f61a0

void FUN_003f61a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_98;
  undefined1 local_89;
  undefined *local_88 [3];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puVar3 = PTR_WCRefineInputBoxGestureSupport_026ce678;
  local_40 = param_4;
  local_38 = param_3;
  local_30 = param_1;
  uStack_28 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineInputBoxGestureSupport_026ce678,PTR_s_isChatInputGrowTextView__026a3418,
             param_3);
  if (((ulong)puVar3 & 1) == 0) {
    uStack_48 = uStack_28;
    local_50 = local_30;
    (*DAT_028ca548)(local_30,uStack_28,local_38,local_40);
  }
  else {
    FUN_003f4598();
    if (((ulong)puVar3 & 1) == 0) {
      uStack_58 = uStack_28;
      local_60 = local_30;
      (*DAT_028ca548)(local_30,uStack_28,local_38,local_40);
    }
    else {
      puVar3 = PTR_WCRefineInputBoxGestureSupport_026ce678;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineInputBoxGestureSupport_026ce678,
                 PTR_s_hasInputTextInGrowTextView__026a3420,local_38);
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
            (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0)
            ;
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_normalizedAction__026a3438);
            _objc_retainAutoreleasedReturnValue();
            local_98 = puVar3;
            (*(code *)PTR__objc_release_02578630)(puVar5);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            puVar3 = local_98;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_98,PTR_s_isEqualToString__0269ccc8,_WCRInputBoxActionNone);
            uVar2 = (uint)puVar3;
            if (((ulong)puVar3 & 1) == 0) {
              FUN_003fab0c();
              if ((uVar2 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineInputBoxGestureSupport_026ce678,
                           PTR_s_performAction_growTextView__026a34d0,local_98,local_38);
              }
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            _objc_storeStrong(&local_98,0);
            if (bVar1) {
              return;
            }
          }
          FUN_003fa92c(local_38);
          (*DAT_028ca548)(local_30,uStack_28,local_38,local_40);
          FUN_003fa92c(local_38);
        }
        else {
          puVar3 = PTR_WCRefineInputBoxGestureSupport_026ce678;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineInputBoxGestureSupport_026ce678,
                     PTR_s_inputToolViewFromGrowTextView__026a34c0,local_38);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR_WCRefineInputBoxGestureSupport_026ce678;
          local_88[0] = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineInputBoxGestureSupport_026ce678,
                     PTR_s_isVoiceRecordHoldActive_026a34a0);
          if (((ulong)puVar4 & 1) == 0) {
            puVar3 = PTR_WCRefineInputBoxGestureSupport_026ce678;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineInputBoxGestureSupport_026ce678,
                       PTR_s_beginVoiceRecordHoldWithInputToo_026a34c8,local_88[0]);
            local_89 = SUB81(puVar3,0);
          }
          FUN_003fa92c(local_38);
          _objc_storeStrong(local_88,0);
        }
      }
      else {
        uStack_68 = uStack_28;
        local_70 = local_30;
        (*DAT_028ca548)(local_30,uStack_28,local_38,local_40);
      }
    }
  }
  return;
}

