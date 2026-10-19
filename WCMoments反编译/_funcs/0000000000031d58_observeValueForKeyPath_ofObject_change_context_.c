// observeValueForKeyPath:ofObject:change:context: @0x31d58

/* Function Stack Size: 0x30 bytes */

void WCMFeedController::observeValueForKeyPath_ofObject_change_context_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,void *param_6)

{
  undefined8 uVar1;
  double in_d1;
  double local_b8;
  undefined8 local_b0;
  ID local_88;
  class_t *local_80;
  undefined4 local_74;
  double local_70;
  undefined8 local_68;
  double local_58;
  int local_4c;
  undefined8 local_48;
  void *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  local_40 = param_6;
  if (param_6 == &_RefreshOffsetKey) {
    local_48 = (*(code *)PTR__objc_retain_00110460)(local_30);
    local_4c = 0;
    local_68 = _objc_msgSend_contentOffset(local_48,local_b0);
    local_58 = (double)_objc_msgSend_refreshBaseInset(local_18,local_b0);
    local_58 = -in_d1 - local_58;
    local_b8 = local_58;
    if (local_58 <= (double)(long)local_4c) {
      local_b8 = (double)(long)local_4c;
    }
    local_70 = local_b8;
    _objc_msgSend_setPullDistance_(local_b8,local_18,local_b0);
    _objc_msgSend_refreshControl(local_18,local_b0);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_pullDistance(local_18,local_b0);
    _objc_msgSend_setPullDistance_(uVar1,local_b0);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    local_74 = 1;
    _objc_storeStrong(&local_48,0);
  }
  else {
    local_88 = local_18;
    local_80 = &objc::class_t::WCMFeedController;
    _objc_msgSendSuper2(&local_88,"observeValueForKeyPath:ofObject:change:context:",local_28,
                        local_30,local_38,param_6);
    local_74 = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

