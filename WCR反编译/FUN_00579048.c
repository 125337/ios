// FUN_00579048 @ 00579048

void FUN_00579048(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_5 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_dimView_026a5338);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar2 = *(undefined8 *)(param_5 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_cardView_026a5340);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  uVar1 = param_4;
  uVar3 = param_3;
  uVar5 = uVar4;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_5 + 0x20),PTR_s_bounds_026ca548);
  _CGRectGetHeight(uVar1,uVar3,param_2,uVar5);
  uVar3 = *(undefined8 *)(param_5 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_cardView_026a5340);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,uVar1,param_3,param_4);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  return;
}

