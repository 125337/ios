// ___37-[WCMCommentPresentation_dragHeader:]_block_invoke @0xf538

void ___37__WCMCommentPresentation_dragHeader___block_invoke
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_70;
  
  uVar2 = _objc_msgSend_frameOfPresentedViewInContainerView(*(undefined8 *)(param_5 + 0x20));
  _objc_msgSend_presentedView(*(undefined8 *)(param_5 + 0x20),local_70);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFrame_(uVar2,param_2,param_3,param_4,uVar1,local_70);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_presentedView(*(undefined8 *)(param_5 + 0x20),local_70);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_layoutIfNeeded(uVar1,local_70);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

