// FUN_0055b6d8 @ 0055b6d8

void FUN_0055b6d8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long local_48;
  uint local_40;
  undefined *local_30;
  ulong local_28;
  undefined8 local_20;
  long local_18;
  
  local_28 = 0;
  local_20 = param_4;
  local_18 = param_3;
  _objc_storeStrong(&local_28,param_5);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_momentsLongPressCommentEnabled_026a4fa8);
  if (((ulong)puVar1 & 1) == 0) {
    local_40 = 1;
  }
  else {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
    if (uVar2 == 1) {
      uVar2 = local_28;
      FUN_00566cbc(0,local_28,local_18);
      if ((uVar2 & 1) == 0) {
        FUN_00566ea0();
        lVar3 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_WCRefineFindTimelineDataItem_026a5088);
        _objc_retainAutoreleasedReturnValue();
        local_48 = lVar3;
        if (lVar3 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_locationInView__026ca798,local_18);
          (*(code *)PTR__objc_msgSend_02578628)
                    (param_1,param_2,local_18,PTR_s_WCRefinePerformLongPressActionFo_026a5028,
                     local_48);
        }
        local_40 = (uint)(lVar3 == 0);
        _objc_storeStrong(&local_48,0);
      }
      else {
        local_40 = 1;
      }
    }
    else {
      local_40 = 1;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

