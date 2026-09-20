// FUN_01b153d8 @ 01b153d8

void FUN_01b153d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_draggingDeleteIndexPath_026bec30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_deleteDraggedRecord_atIndexPath__026bec38,uVar3)
  ;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

