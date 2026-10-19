// closeComments @0x157c4

/* Function Stack Size: 0x10 bytes */

void WCMVideoComments::closeComments(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 local_28;
  
  _objc_msgSend_input(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_resignFirstResponder(uVar1,local_28);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_dismissViewControllerAnimated_completion_(param_1,local_28,1,0);
  return;
}

