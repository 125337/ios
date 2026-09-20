// FUN_0055b15c @ 0055b15c

void FUN_0055b15c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028cb478)(param_1,param_2);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_window_026cabf0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (uVar1 != 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_momentsDoubleTapLikeEnabled_026a5178);
    puVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_momentsLongPressCommentEnabled_026a4fa8);
    if (((((ulong)puVar2 & 1) != 0) || (((ulong)puVar3 & 1) != 0)) &&
       (uVar1 = local_18,
       (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_WCRefineIsTimelineCell_026a5080),
       (uVar1 & 1) != 0)) {
      if (((ulong)puVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_WCRefineAddDoubleTapGesture_026a5060);
      }
      if (((ulong)puVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_WCRefineAddLongPressGesture_026a5008);
      }
    }
    _objc_storeStrong(&local_28,0);
  }
  return;
}

