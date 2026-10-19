// ___39-[WCMFeedController_publishPendingFeed]_block_invoke_2 @0x43dbc

void ___39__WCMFeedController_publishPendingFeed__block_invoke_2(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  byte local_cc;
  undefined8 local_c8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  byte local_49;
  undefined8 local_48;
  byte local_3d;
  undefined4 local_3c;
  long local_38;
  long local_30;
  long local_28;
  
  local_30 = param_1;
  local_28 = param_1;
  local_38 = _objc_loadWeakRetained(param_1 + 0x48);
  if ((local_38 == 0) ||
     (lVar3 = *(long *)(param_1 + 0x50), lVar1 = _objc_msgSend_bridgeGeneration(local_38,local_c8),
     lVar3 != lVar1)) {
    local_3c = 1;
  }
  else {
    _objc_msgSend_setBridgeBusy_(local_38,local_c8,0);
    uVar2 = _objc_msgSend_ready(local_38,local_c8);
    if ((uVar2 & 1) == 0) {
      local_3c = 1;
    }
    else {
      local_49 = 0;
      local_cc = 1;
      if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        _objc_msgSend_lastJSON(local_38,local_c8);
        local_48 = _objc_retainAutoreleasedReturnValue();
        local_49 = 1;
        local_cc = _objc_msgSend_isEqualToString_(uVar4,local_c8);
        local_cc = local_cc ^ 1;
      }
      if ((local_49 & 1) != 0) {
        (*(code *)PTR__objc_release_00110458)(local_48);
      }
      local_3d = local_cc & 1;
      _objc_msgSend_setLastJSON_(local_38,local_c8,*(undefined8 *)(param_1 + 0x20));
      _objc_msgSend_setBridgeRows_(local_38,local_c8,*(undefined8 *)(param_1 + 0x28));
      if (((local_3d & 1) != 0) && (*(long *)(param_1 + 0x30) != 0)) {
        _objc_msgSend_web(local_38,local_c8);
        uVar4 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_evaluateJavaScript_completionHandler_
                  (uVar4,local_c8,*(undefined8 *)(param_1 + 0x30));
        (*(code *)PTR__objc_release_00110458)(uVar4);
        _objc_msgSend_stringByAppendingPathComponent_
                  (*(undefined8 *)(param_1 + 0x38),local_c8,&cf_feed_json);
        local_58 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_bridgeQueue(local_38,local_c8);
        uVar4 = _objc_retainAutoreleasedReturnValue();
        local_88 = PTR___NSConcreteStackBlock_001104f0;
        local_80 = 0xc2000000;
        local_7c = 0;
        local_78 = ___39__WCMFeedController_publishPendingFeed__block_invoke_3;
        local_70 = &___block_descriptor_48_e8_32s40s_e5_v8__0l;
        local_68 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x40));
        local_60 = (*(code *)PTR__objc_retain_00110460)(local_58);
        _objc_msgSend_addOperationWithBlock_(uVar4,local_c8,&local_88);
        (*(code *)PTR__objc_release_00110458)(uVar4);
        _objc_storeStrong(&local_60,0);
        _objc_storeStrong(&local_68,0);
        _objc_storeStrong(&local_58,0);
      }
      _objc_msgSend_date(&_OBJC_CLASS___NSDate,local_c8);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      dVar5 = (double)_objc_msgSend_timeIntervalSinceReferenceDate(uVar4,local_c8);
      dVar6 = (double)_objc_msgSend_lastTrim(local_38,local_c8);
      (*(code *)PTR__objc_release_00110458)(uVar4);
      if (60.0 < dVar5 - dVar6) {
        _objc_msgSend_date(&_OBJC_CLASS___NSDate,local_c8);
        uVar4 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_timeIntervalSinceReferenceDate(uVar4,local_c8);
        _objc_msgSend_setLastTrim_(local_38,local_c8);
        (*(code *)PTR__objc_release_00110458)(uVar4);
        _objc_msgSend_mediaQueue(local_38,local_c8);
        uVar4 = _objc_retainAutoreleasedReturnValue();
        local_b0 = PTR___NSConcreteStackBlock_001104f0;
        local_a8 = 0xc2000000;
        local_a4 = 0;
        local_a0 = ___39__WCMFeedController_publishPendingFeed__block_invoke_4;
        local_98 = &___block_descriptor_40_e8_32s_e5_v8__0l;
        local_90 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x38));
        _objc_msgSend_addOperationWithBlock_(uVar4,local_c8,&local_b0);
        (*(code *)PTR__objc_release_00110458)(uVar4);
        _objc_storeStrong(&local_90,0);
      }
      _objc_msgSend_publishPendingFeed(local_38,local_c8);
      local_3c = 0;
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

