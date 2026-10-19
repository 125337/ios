// _VideoNumber @0x2747c

void _VideoNumber(undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_b8;
  undefined8 local_a8;
  bool local_61;
  undefined8 local_60;
  undefined8 local_58 [3];
  long local_40;
  undefined4 local_38;
  byte local_31;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_31 = param_2;
  if (local_30 == 0) {
    local_28 = 0;
    local_38 = 1;
  }
  else {
    local_18 = &_VideoNumber_once;
    local_20 = 0;
    _objc_storeStrong(&local_20,&___block_literal_global_2970);
    if (*local_18 + 1 != 0) {
      _dispatch_once(*local_18 + 1,local_18,local_20);
    }
    _objc_storeStrong(&local_20,0);
    uVar1 = (*(code *)PTR__objc_retain_00110460)(_VideoNumber_lock);
    _objc_sync_enter();
    uVar2 = _objc_getAssociatedObject(local_30,&_VideoDiagnosticKey);
    local_40 = _objc_retainAutoreleasedReturnValue(uVar2);
    if (local_40 == 0) {
      uVar2 = _Call(local_30,&cf_mid,PTR____NSArray0__struct_00110718);
      uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
      uVar3 = _Text();
      local_58[0] = _objc_retainAutoreleasedReturnValue(uVar3);
      (*(code *)PTR__objc_release_00110458)(uVar2);
      lVar4 = _objc_msgSend_length(local_58[0],local_a8);
      if (lVar4 == 0) {
        local_b8 = 0;
      }
      else {
        uVar2 = _objc_msgSend_objectForKeyedSubscript_(_VideoNumber_ids,local_a8,local_58[0]);
        local_b8 = _objc_retainAutoreleasedReturnValue(uVar2);
        local_60 = local_b8;
      }
      local_61 = lVar4 != 0;
      _objc_storeStrong(&local_40,local_b8);
      if (local_61) {
        (*(code *)PTR__objc_release_00110458)(local_60);
      }
      if ((local_40 == 0) && ((local_31 & 1) != 0)) {
        _VideoNumber_next = _VideoNumber_next + 1;
        uVar2 = _objc_msgSend_numberWithUnsignedInteger_(&_OBJC_CLASS___NSNumber,local_a8);
        lVar5 = _objc_retainAutoreleasedReturnValue(uVar2);
        lVar4 = local_40;
        local_40 = lVar5;
        (*(code *)PTR__objc_release_00110458)(lVar4);
      }
      if (local_40 != 0) {
        _objc_setAssociatedObject(local_30,&_VideoDiagnosticKey,local_40,1);
        lVar4 = _objc_msgSend_length(local_58[0],local_a8);
        if (lVar4 != 0) {
          uVar6 = _objc_msgSend_count(_VideoNumber_ids,local_a8);
          if (0x1ff < uVar6) {
            _objc_msgSend_removeAllObjects(_VideoNumber_ids,local_a8);
          }
          _objc_msgSend_setObject_forKeyedSubscript_(_VideoNumber_ids,local_a8,local_40,local_58[0])
          ;
        }
      }
      local_28 = (*(code *)PTR__objc_retain_00110460)(local_40);
      local_38 = 1;
      _objc_storeStrong(local_58,0);
    }
    else {
      local_28 = (*(code *)PTR__objc_retain_00110460)(local_40);
      local_38 = 1;
    }
    _objc_storeStrong(&local_40,0);
    _objc_sync_exit(uVar1);
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

