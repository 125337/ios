// FUN_003f74f0 @ 003f74f0

void FUN_003f74f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_51;
  undefined *local_50;
  uint local_48;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  plVar3 = &local_38;
  local_38 = 0;
  local_30 = param_4;
  local_28 = param_3;
  _objc_storeStrong(plVar3,param_5);
  uVar2 = (uint)plVar3;
  FUN_003f4598();
  if ((uVar2 & 1) == 0) {
    local_48 = 1;
  }
  else {
    puVar4 = PTR_WCRefineInputBoxGestureSupport_026ce678;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineInputBoxGestureSupport_026ce678,
               PTR_s_inputToolViewFromGrowTextView__026a34c0,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
    puVar4 = PTR_WCRefineInputBoxGestureSupport_026ce678;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineInputBoxGestureSupport_026ce678,PTR_s_isVoiceRecordHoldActive_026a34a0);
    if ((((ulong)puVar4 & 1) == 0) &&
       (puVar4 = PTR_WCRefineInputBoxGestureSupport_026ce678,
       (*(code *)PTR__objc_msgSend_02578628)
                 (PTR_WCRefineInputBoxGestureSupport_026ce678,
                  PTR_s_hasInputTextInGrowTextView__026a3420,local_28), ((ulong)puVar4 & 1) != 0)) {
      local_48 = 1;
    }
    else {
      puVar4 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      if (((ulong)puVar5 & 1) == 0) {
        lVar6 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
        if (lVar6 == 1) {
          puVar4 = PTR_WCRefineInputBoxGestureSupport_026ce678;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineInputBoxGestureSupport_026ce678,
                     PTR_s_hasInputTextInGrowTextView__026a3420,local_28);
          uVar2 = (uint)puVar4;
          if (((ulong)puVar4 & 1) == 0) {
            FUN_003fab0c();
            if ((uVar2 & 1) == 0) {
              local_48 = 1;
            }
            else {
              puVar4 = PTR_WCRefineConfig_026cdf58;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(puVar4);
              puVar4 = PTR_WCRefineInputBoxGestureSupport_026ce678;
              if (((ulong)puVar5 & 1) == 0) {
                local_48 = 1;
              }
              else {
                puVar5 = PTR_WCRefineConfig_026cdf58;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
                _objc_retainAutoreleasedReturnValue();
                puVar7 = puVar5;
                (*(code *)PTR__objc_msgSend_02578628)();
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_normalizedAction__026a3438);
                _objc_retainAutoreleasedReturnValue();
                local_88 = puVar4;
                (*(code *)PTR__objc_release_02578630)(puVar7);
                (*(code *)PTR__objc_release_02578630)(puVar5);
                puVar4 = local_88;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_88,PTR_s_isEqualToString__0269ccc8,_WCRInputBoxActionNone);
                bVar1 = ((ulong)puVar4 & 1) == 0;
                if (bVar1) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR_WCRefineInputBoxGestureSupport_026ce678,
                             PTR_s_performAction_growTextView__026a34d0,local_88,local_28);
                }
                local_48 = (uint)!bVar1;
                _objc_storeStrong(&local_88,0);
              }
            }
          }
          else {
            local_48 = 1;
          }
        }
        else {
          local_48 = 1;
        }
      }
      else {
        lVar6 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
        if (lVar6 == 1) {
          puVar4 = PTR_WCRefineInputBoxGestureSupport_026ce678;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineInputBoxGestureSupport_026ce678,
                     PTR_s_hasInputTextInGrowTextView__026a3420,local_28);
          if (((ulong)puVar4 & 1) == 0) {
            puVar4 = PTR_WCRefineInputBoxGestureSupport_026ce678;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineInputBoxGestureSupport_026ce678,
                       PTR_s_beginVoiceRecordHoldWithInputToo_026a34c8,local_50);
            local_51 = SUB81(puVar4,0);
            FUN_003fa92c(local_28);
            local_48 = 1;
          }
          else {
            local_48 = 1;
          }
        }
        else {
          lVar6 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
          if (lVar6 == 2) {
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_locationInView__026ca798,0);
            local_80 = param_1;
            uStack_78 = param_2;
            local_68 = param_1;
            uStack_60 = param_2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (param_1,param_2,PTR_WCRefineInputBoxGestureSupport_026ce678,
                       PTR_s_updateVoiceRecordHoldPointWithIn_026a34e0,local_50);
            local_48 = 1;
          }
          else {
            lVar6 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
            if ((lVar6 == 3) ||
               (lVar6 = local_38,
               (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20), lVar6 == 4)) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineInputBoxGestureSupport_026ce678,
                         PTR_s_endVoiceRecordHoldWithInputToolV_026a34e8,local_50);
              local_48 = 1;
            }
            else {
              local_48 = 1;
            }
          }
        }
      }
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

