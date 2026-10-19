// ___Install_block_invoke.3047 @0x61644

void ___Install_block_invoke_3047
               (long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_a0;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  long local_30;
  cfstringStruct *local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_00110518;
  local_38 = 0;
  local_30 = param_1;
  _objc_storeStrong();
  local_48 = 0;
  local_3c = param_3;
  _objc_storeStrong(&local_48,param_4);
  local_50 = param_1;
  _VideoMediaForArgs(local_48);
  local_58 = _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x20))(local_38,*(undefined8 *)(param_1 + 0x28),local_3c,local_48);
  uVar1 = local_58;
  local_28 = &cf_error;
  _objc_msgSend_numberWithInt_(&_OBJC_CLASS___NSNumber,local_a0,local_3c);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  local_20 = uVar2;
  _objc_msgSend_dictionaryWithObjects_forKeys_count_
            (&_OBJC_CLASS___NSDictionary,local_a0,&local_20,&local_28,1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _TraceVideo(&cf_video_native_startFailed,uVar1);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_18);
  }
  return;
}

