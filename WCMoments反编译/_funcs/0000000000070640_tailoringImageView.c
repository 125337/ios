// tailoringImageView @0x70640

/* Function Stack Size: 0x10 bytes */

ID WCMYBIBImageCell::tailoringImageView(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 local_28;
  
  if (*(long *)(param_1 + (long)_tailoringImageView) == 0) {
    uVar1 = _objc_opt_new(&_OBJC_CLASS___UIImageView);
    uVar2 = *(undefined8 *)(param_1 + (long)_tailoringImageView);
    *(undefined8 *)(param_1 + (long)_tailoringImageView) = uVar1;
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_setContentMode_(*(undefined8 *)(param_1 + (long)_tailoringImageView),local_28,1);
  }
  IVar3 = _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + (long)_tailoringImageView));
  return IVar3;
}

