// ___31-[WCMFeedController_openVideo:]_block_invoke.2153 @0x55a64

void ___31__WCMFeedController_openVideo___block_invoke_2153(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long local_a0;
  undefined8 local_88;
  long local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_00110518;
  local_38 = 0;
  local_30 = param_1;
  _objc_storeStrong(&local_38);
  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);
  _objc_msgSend_items(uVar1,local_88);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_objectForKeyedSubscript_(uVar2,local_88,local_38);
  lVar3 = _objc_retainAutoreleasedReturnValue();
  local_a0 = lVar3;
  if (lVar3 == 0) {
    _Service(&cf_WCFacade);
    local_48 = _objc_retainAutoreleasedReturnValue();
    local_20 = local_38;
    _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_88,&local_20,1);
    local_58 = _objc_retainAutoreleasedReturnValue();
    _Call(local_48,&cf_getDataItemByID_);
    local_68 = _objc_retainAutoreleasedReturnValue();
    local_a0 = local_68;
  }
  local_28 = (*(code *)PTR__objc_retain_00110460)(local_a0);
  if (lVar3 == 0) {
    (*(code *)PTR__objc_release_00110458)(local_68);
    (*(code *)PTR__objc_release_00110458)(local_58);
    (*(code *)PTR__objc_release_00110458)(local_48);
  }
  (*(code *)PTR__objc_release_00110458)(lVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_00110518 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_28);
  return;
}

