// FUN_00578b20 @ 00578b20

void FUN_00578b20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(param_5 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_dimView_026a5338);
  _objc_retainAutoreleasedReturnValue();
  dVar2 = 1.0;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_5 + 0x20),PTR_s_bounds_026ca548);
  _CGRectGetHeight(dVar2,param_2);
  dVar5 = *(double *)(param_5 + 0x28);
  dVar2 = dVar2 - dVar5;
  dVar3 = dVar2;
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_5 + 0x20),PTR_s_bounds_026ca548);
  _CGRectGetWidth(dVar3,dVar5,param_3,param_4);
  uVar6 = *(undefined8 *)(param_5 + 0x28);
  uVar4 = 0;
  FUN_005768f8();
  uVar1 = *(undefined8 *)(param_5 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_cardView_026a5340);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,dVar2,dVar3,uVar6);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

