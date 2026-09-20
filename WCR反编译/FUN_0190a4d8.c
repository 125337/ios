// FUN_0190a4d8 @ 0190a4d8

void FUN_0190a4d8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__UIEdgeInsetsZero_02578118;
  uVar5 = *(undefined8 *)(PTR__UIEdgeInsetsZero_02578118 + 8);
  uVar3 = *(undefined8 *)PTR__UIEdgeInsetsZero_02578118;
  uVar6 = *(undefined8 *)(PTR__UIEdgeInsetsZero_02578118 + 0x18);
  uVar4 = *(undefined8 *)(PTR__UIEdgeInsetsZero_02578118 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_scrollView_0269dcc0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,uVar5,uVar4,uVar6);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar5 = *(undefined8 *)(puVar1 + 8);
  uVar3 = *(undefined8 *)puVar1;
  uVar6 = *(undefined8 *)(puVar1 + 0x18);
  uVar4 = *(undefined8 *)(puVar1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_scrollView_0269dcc0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,uVar5,uVar4,uVar6);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  return;
}

