// ___Install_block_invoke.3018 @0x60f80

void ___Install_block_invoke_3018
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5,
               int param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined8 local_100;
  undefined8 local_a0;
  int local_94;
  long local_90;
  long local_88;
  int local_80;
  int local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_68 = 0;
  local_60 = param_1;
  _objc_storeStrong(&local_68);
  local_70 = 0;
  _objc_storeStrong(&local_70,param_3);
  local_88 = param_1;
  local_80 = param_6;
  local_7c = param_5;
  local_78 = param_4;
  (**(code **)(param_1 + 0x20))
            (local_68,*(undefined8 *)(param_1 + 0x28),local_70,param_4,param_5,param_6);
  uVar1 = _VideoNumber(local_70,0);
  local_90 = _objc_retainAutoreleasedReturnValue(uVar1);
  if (local_90 == 0) {
    local_94 = 1;
  }
  else {
    uVar1 = (*(code *)PTR__objc_retain_00110460)(local_70);
    _objc_sync_enter();
    uVar2 = _objc_getAssociatedObject(local_70,&_VideoDiagnosticProgressKey);
    local_a0 = _objc_retainAutoreleasedReturnValue(uVar2);
    uVar2 = _objc_msgSend_processInfo(&_OBJC_CLASS___NSProcessInfo,local_100);
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    dVar6 = (double)_objc_msgSend_systemUptime(uVar2,local_100);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    if ((local_80 <= local_7c) ||
       (dVar7 = (double)_objc_msgSend_doubleValue(local_7c - local_80,local_a0,local_100),
       1.0 <= dVar6 - dVar7)) {
      uVar2 = local_70;
      uVar3 = _objc_msgSend_numberWithDouble_(dVar6,&_OBJC_CLASS___NSNumber,local_100);
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
      _objc_setAssociatedObject(uVar2,&_VideoDiagnosticProgressKey,uVar3,1);
      (*(code *)PTR__objc_release_00110458)(uVar3);
      local_94 = 0;
    }
    else {
      local_94 = 1;
    }
    _objc_storeStrong(&local_a0,0);
    if (local_94 == 0) {
      local_94 = 0;
    }
    _objc_sync_exit(uVar1);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    uVar1 = local_70;
    if (local_94 == 0) {
      local_58 = &cf_type;
      uVar2 = _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_100,local_78);
      uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
      local_50 = &cf_current;
      local_40 = uVar2;
      uVar3 = _objc_msgSend_numberWithInt_(&_OBJC_CLASS___NSNumber,local_100,local_7c);
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
      local_48 = &cf_total;
      local_38 = uVar3;
      uVar4 = _objc_msgSend_numberWithInt_(&_OBJC_CLASS___NSNumber,local_100,local_80);
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      local_30 = uVar4;
      uVar5 = _objc_msgSend_dictionaryWithObjects_forKeys_count_
                        (&_OBJC_CLASS___NSDictionary,local_100,&local_40,&local_58,3);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      _TraceVideo(&cf_video_native_bytes,uVar1);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      (*(code *)PTR__objc_release_00110458)(uVar4);
      (*(code *)PTR__objc_release_00110458)(uVar3);
      (*(code *)PTR__objc_release_00110458)(uVar2);
      local_94 = 0;
    }
  }
  _objc_storeStrong(&local_90,0);
  if (local_94 == 0) {
    local_94 = 0;
  }
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
  }
  return;
}

