// dismissPanel @0xf604

/* Function Stack Size: 0x10 bytes */

void WCMCommentPresentation::dismissPanel(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 local_30;
  
  _objc_msgSend_presentedViewController(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_dismissViewControllerAnimated_completion_(uVar1,local_30,1,0);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

