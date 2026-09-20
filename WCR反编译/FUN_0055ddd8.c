// FUN_0055ddd8 @ 0055ddd8

void FUN_0055ddd8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long local_50;
  undefined4 local_44;
  undefined1 local_3d;
  undefined1 *local_30;
  undefined8 local_28;
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
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_momentsDoubleTapLikeEnabled_026a5178);
  local_3d = SUB81(puVar1,0);
  if (((ulong)puVar1 & 1) == 0) {
    local_44 = 1;
  }
  else {
    FUN_00566ea0();
    lVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_WCRefineFindTimelineDataItem_026a5088);
    _objc_retainAutoreleasedReturnValue();
    local_50 = lVar2;
    if (lVar2 == 0) {
      local_44 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_locationInView__026ca798,local_18);
      puVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_momentsDoubleTapGestureAction_026a5198);
      lVar2 = local_18;
      if (puVar3 == (undefined1 *)((long)&MACH_HEADER.cputype + 1)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (param_1,param_2,local_18,PTR_s_WCRefineShowDoubleTapActionMenuF_026a5070,local_50
                  );
        local_44 = 1;
      }
      else {
        FUN_005693e4();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (param_1,param_2,lVar2,PTR_s_WCRefinePerformDoubleTapActionVa_026a4fe0,puVar3,
                   local_50);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        local_44 = 0;
      }
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

