// ___Install_block_invoke_3 @0x60e14

void ___Install_block_invoke_3
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_98;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  cfstringStruct *local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_00110518;
  local_38 = 0;
  local_30 = param_1;
  _objc_storeStrong();
  local_40 = 0;
  _objc_storeStrong(&local_40,param_3);
  (**(code **)(param_1 + 0x28))(local_38,*(undefined8 *)(param_1 + 0x30),local_40,param_4);
  uVar1 = local_40;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  local_28 = &cf_type;
  _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_98,param_4);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  local_20 = uVar2;
  _objc_msgSend_dictionaryWithObjects_forKeys_count_
            (&_OBJC_CLASS___NSDictionary,local_98,&local_20,&local_28,1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _TraceVideo(uVar4,uVar1);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_18);
  }
  return;
}

