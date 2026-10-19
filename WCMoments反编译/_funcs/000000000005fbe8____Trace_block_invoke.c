// ___Trace_block_invoke @0x5fbe8

void ___Trace_block_invoke(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  if (_MediaFinished_block_invoke_missing == 0) {
    lVar2 = _objc_opt_new(&_OBJC_CLASS___NSMutableSet);
    lVar1 = _MediaFinished_block_invoke_missing;
    _MediaFinished_block_invoke_missing = lVar2;
    (*(code *)PTR__objc_release_00110458)(lVar1);
  }
  uVar3 = _objc_msgSend_hasPrefix_(*(undefined8 *)(param_1 + 0x20),local_40,&cf_api_missing_);
  if ((uVar3 & 1) != 0) {
    uVar3 = _objc_msgSend_containsObject_
                      (_MediaFinished_block_invoke_missing,local_40,*(undefined8 *)(param_1 + 0x20))
    ;
    if ((uVar3 & 1) != 0) {
      return;
    }
    _objc_msgSend_addObject_
              (_MediaFinished_block_invoke_missing,local_40,*(undefined8 *)(param_1 + 0x20));
  }
  uVar3 = _objc_msgSend_hasPrefix_(*(undefined8 *)(param_1 + 0x20),local_40,&cf_video_);
  if ((uVar3 & 1) != 0) {
    _VideoTraceEvents();
    local_28 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_addObject_(local_28,local_40,*(undefined8 *)(param_1 + 0x28));
    while( true ) {
      uVar3 = _objc_msgSend_count(local_28,local_40);
      if (uVar3 < 0x200 || uVar3 - 0x200 == 0) break;
      _objc_msgSend_removeObjectAtIndex_(local_28,local_40,0);
    }
    _objc_storeStrong(uVar3 - 0x200,&local_28,0);
  }
  _TraceEvents();
  local_30 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_addObject_(local_30,local_40,*(undefined8 *)(param_1 + 0x28));
  while( true ) {
    uVar3 = _objc_msgSend_count(local_30,local_40);
    if (uVar3 < 0x100 || uVar3 - 0x100 == 0) break;
    _objc_msgSend_removeObjectAtIndex_(local_30,local_40,0);
  }
  _objc_storeStrong(uVar3 - 0x100,&local_30,0);
  return;
}

