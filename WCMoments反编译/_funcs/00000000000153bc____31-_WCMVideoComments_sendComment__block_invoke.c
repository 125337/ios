// ___31-[WCMVideoComments_sendComment]_block_invoke @0x153bc

void ___31__WCMVideoComments_sendComment__block_invoke(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_90;
  uint local_7c;
  long local_38;
  long local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_00110518;
  local_30 = param_1;
  local_28 = param_1;
  local_38 = _objc_loadWeakRetained(param_1 + 0x20);
  local_7c = 1;
  if (local_38 != 0) {
    _objc_msgSend_account(local_38,local_90);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _Context();
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _Call(uVar2,&cf_userName,PTR____NSArray0__struct_00110718);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _Text();
    uVar4 = _objc_retainAutoreleasedReturnValue();
    local_7c = _objc_msgSend_isEqual_(uVar1,local_90);
    local_7c = local_7c ^ 1;
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  if ((local_7c & 1) == 0) {
    _objc_msgSend_facade(local_38,local_90);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_item(local_38,local_90);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    local_20 = uVar2;
    _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_90,&local_20,1);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _Call(uVar1,&cf_updateDataItemDetailByItem_);
    _objc_unsafeClaimAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    _objc_msgSend_reloadComments(local_38,local_90);
  }
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_18);
  }
  return;
}

