// ___31-[WCMFeedController_syncPaging]_block_invoke @0x352f4

/* WARNING: Type propagation algorithm not settling */

void ___31__WCMFeedController_syncPaging__block_invoke
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_78;
  long local_40 [3];
  cfstringStruct *local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_00110518;
  local_40[1] = 0;
  local_40[2] = param_1;
  _objc_storeStrong(local_40 + 1);
  local_40[0] = 0;
  _objc_storeStrong(local_40,param_3);
  if (local_40[0] != 0) {
    local_28 = &cf_code;
    uVar1 = _objc_msgSend_code(local_40[0],local_78);
    _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_78,uVar1);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    local_20 = uVar1;
    _objc_msgSend_dictionaryWithObjects_forKeys_count_
              (&_OBJC_CLASS___NSDictionary,local_78,&local_20,&local_28,1);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _Trace(&cf_web_paging_error);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  _objc_storeStrong(local_40);
  _objc_storeStrong(local_40 + 1,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_18);
  }
  return;
}

