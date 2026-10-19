// frameOfPresentedViewInContainerView @0xebf0

/* Function Stack Size: 0x10 bytes */

CGRect WCMCommentPresentation::frameOfPresentedViewInContainerView(ID param_1,SEL param_2)

{
  CGRect CVar1;
  uint uVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 in_d2;
  double in_d3;
  undefined8 local_78;
  
  _objc_msgSend_containerView(param_1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_bounds(uVar3,local_78);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  uVar2 = _objc_msgSend_expanded(param_1,local_78);
  dVar4 = 0.92;
  if ((uVar2 & 1) == 0) {
    dVar4 = 0.56;
  }
  dVar4 = in_d3 * dVar4;
  in_d3 = in_d3 - dVar4;
  uVar3 = _CGRectMake(uVar2 & 1,0);
  CVar1.field0_0x0.field1_0x8 = in_d3;
  CVar1.field0_0x0.field0_0x0 = (double)uVar3;
  CVar1.field1_0x10.field0_0x0 = (double)in_d2;
  CVar1.field1_0x10.field1_0x8 = dVar4;
  return CVar1;
}

