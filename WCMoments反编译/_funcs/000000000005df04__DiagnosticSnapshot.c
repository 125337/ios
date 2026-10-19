// _DiagnosticSnapshot @0x5df04

void _DiagnosticSnapshot(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_a0;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined **local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_00110518;
  local_58 = &cf_schema;
  local_38 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_0010fcb0;
  local_50 = &cf_environment;
  _DiagnosticEnvironment();
  uVar1 = _objc_retainAutoreleasedReturnValue();
  local_48 = &cf_videoEvents;
  local_30 = uVar1;
  _VideoTraceEvents();
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar3 = _objc_msgSend_copy(uVar2,local_a0);
  local_40 = &cf_events;
  local_28 = uVar3;
  _TraceEvents();
  uVar4 = _objc_retainAutoreleasedReturnValue();
  uVar5 = _objc_msgSend_copy(uVar4,local_a0);
  local_20 = uVar5;
  _objc_msgSend_dictionaryWithObjects_forKeys_count_
            (&_OBJC_CLASS___NSDictionary,local_a0,&local_38,&local_58,4);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar5);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  if (*(long *)PTR____stack_chk_guard_00110518 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,uVar6);
  return;
}

