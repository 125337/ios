// ___Install_block_invoke_5 @0x61ac0

void ___Install_block_invoke_5(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_60;
  cfstringStruct *local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_00110518;
  _objc_msgSend_defaultCenter(&_OBJC_CLASS___NSNotificationCenter);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  local_28 = &cf_failed;
  _objc_msgSend_numberWithBool_(&_OBJC_CLASS___NSNumber,local_60,*(byte *)(param_1 + 0x28) & 1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  local_20 = uVar2;
  _objc_msgSend_dictionaryWithObjects_forKeys_count_
            (&_OBJC_CLASS___NSDictionary,local_60,&local_20,&local_28,1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_postNotificationName_object_userInfo_
            (uVar1,local_60,&cf_WCMomentsTimelineFinished,uVar4);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_18);
  }
  return;
}

