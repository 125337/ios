// initValue @0x62d80

/* Function Stack Size: 0x10 bytes */

void WCMYBImageBrowser::initValue(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_00110518;
  *(undefined1 *)(param_1 + (long)_hideTransitioning) = 0;
  *(undefined1 *)(param_1 + (long)_showTransitioning) = 0;
  *(undefined1 *)(param_1 + (long)_transitioning) = 0;
  uVar1 = _objc_opt_new(&objc::class_t::WCMYBIBAnimatedTransition);
  uVar2 = *(undefined8 *)(param_1 + (long)_animatedTransition);
  *(undefined8 *)(param_1 + (long)_animatedTransition) = uVar1;
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_storeWeak(param_1 + (long)_defaultAnimatedTransition,uVar1);
  uVar1 = _objc_opt_new(&objc::class_t::WCMYBIBToolViewHandler);
  local_20 = uVar1;
  _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_40,&local_20,1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + (long)_toolViewHandlers);
  *(undefined8 *)(param_1 + (long)_toolViewHandlers) = uVar2;
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_objectAtIndexedSubscript_
            (*(undefined8 *)(param_1 + (long)_toolViewHandlers),local_40,0);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + (long)_defaultToolViewHandler);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  uVar1 = _objc_opt_new(&objc::class_t::WCMYBIBAuxiliaryViewHandler);
  uVar2 = *(undefined8 *)(param_1 + (long)_auxiliaryViewHandler);
  *(undefined8 *)(param_1 + (long)_auxiliaryViewHandler) = uVar1;
  (*(code *)PTR__objc_release_00110458)(uVar2);
  *(undefined1 *)(param_1 + (long)_shouldHideStatusBar) = 1;
  *(undefined1 *)(param_1 + (long)_autoHideProjectiveView) = 1;
  if (*(long *)PTR____stack_chk_guard_00110518 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_18);
  }
  return;
}

