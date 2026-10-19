// ___ExportDiagnostics_block_invoke_2 @0x5e06c

void ___ExportDiagnostics_block_invoke_2
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_a0;
  undefined8 local_38;
  long local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_00110518;
  local_30 = param_5;
  local_28 = param_5;
  if ((*(byte *)(param_5 + 0x38) & 1) != 0) {
    uVar1 = _objc_alloc(&_OBJC_CLASS___UIActivityViewController);
    _objc_msgSend_fileURLWithPath_(&_OBJC_CLASS___NSURL,local_a0,*(undefined8 *)(param_5 + 0x20));
    uVar2 = _objc_retainAutoreleasedReturnValue();
    local_20 = uVar2;
    _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_a0,&local_20,1);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    local_38 = _objc_msgSend_initWithActivityItems_applicationActivities_(uVar1,local_a0);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_view(*(undefined8 *)(param_5 + 0x28),local_a0);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_popoverPresentationController(local_38,local_a0);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setSourceView_(uVar2,local_a0,uVar1);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    _objc_msgSend_tableView(*(undefined8 *)(param_5 + 0x28),local_a0);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    uVar3 = _objc_msgSend_rectForRowAtIndexPath_(uVar1,local_a0,*(undefined8 *)(param_5 + 0x30));
    _objc_msgSend_popoverPresentationController(local_38,local_a0);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setSourceRect_(uVar3,param_2,param_3,param_4,uVar2,local_a0);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    _objc_msgSend_presentViewController_animated_completion_
              (*(undefined8 *)(param_5 + 0x28),local_a0,local_38,1,0);
    _objc_storeStrong(&local_38,0);
  }
  if (*(long *)PTR____stack_chk_guard_00110518 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_18);
}

