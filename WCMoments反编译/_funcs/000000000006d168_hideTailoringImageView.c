// hideTailoringImageView @0x6d168

/* Function Stack Size: 0x10 bytes */

void WCMYBIBImageCell::hideTailoringImageView(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 local_30;
  
  if (*(long *)(param_1 + (long)_tailoringImageView) != 0) {
    _objc_msgSend_tailoringImageView(param_1,local_30);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setHidden_(uVar1,local_30,1);
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  return;
}

