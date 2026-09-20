// wcr_chipIndexAtPoint: @ 01696fa8

/* Function Stack Size: 0x20 bytes */

long_long WCRWordSegPickerController::wcr_chipIndexAtPoint_(ID param_1,SEL param_2,CGPoint param_3)

{
  uint uVar1;
  ID IVar2;
  ID IVar3;
  long_long local_40;
  ID IVar4;
  
  local_40 = 0;
  while( true ) {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_chipViews_026b29c8);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if ((long)IVar3 <= (long)local_40) {
      return 0x7fffffffffffffff;
    }
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_chipViews_026b29c8);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    uVar1 = (uint)IVar4;
    _CGRectContainsPoint();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if ((uVar1 & 1) != 0) break;
    local_40 = local_40 + 1;
  }
  return local_40;
}

