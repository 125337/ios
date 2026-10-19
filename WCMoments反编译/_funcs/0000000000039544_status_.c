// status: @0x39544

/* Function Stack Size: 0x18 bytes */

void WCMFeedController::status_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  uint local_3c;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_00110518;
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  uVar2 = _objc_msgSend_ready(local_28,local_58);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    local_20 = local_38;
    _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_58,&local_20,1);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_dataWithJSONObject_options_error_
              (&_OBJC_CLASS___NSJSONSerialization,local_58,uVar3,0);
    local_48 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(uVar3);
    uVar3 = _objc_alloc(&_OBJC_CLASS___NSString);
    local_50 = _objc_msgSend_initWithData_encoding_(uVar3,local_58,local_48,4);
    _objc_msgSend_web(local_28,local_58);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_stringWithFormat_(&_OBJC_CLASS___NSString,local_58,&cf_showStatus______0__);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_evaluateJavaScript_completionHandler_(uVar3,local_58,uVar4,0);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
  }
  local_3c = (uint)!bVar1;
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_18);
}

