// layoutIndicatorContent @0x7848

/* Function Stack Size: 0x10 bytes */

void WCMQQRefreshControl::layoutIndicatorContent(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_150;
  
  _objc_msgSend_qqMessageLabel(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar2 = _CGSizeMake(0x4066800000000000);
  dVar3 = (double)_objc_msgSend_sizeThatFits_(uVar2,uVar1,local_150);
  dVar3 = (double)(long)dVar3;
  (*(code *)PTR__objc_release_00110458)(uVar1);
  dVar4 = (191.0 - dVar3) / 2.0;
  _objc_msgSend_begin(&_OBJC_CLASS___CATransaction,local_150);
  _objc_msgSend_setDisableActions_(&_OBJC_CLASS___CATransaction,local_150,1);
  uVar7 = 0x4036000000000000;
  uVar6 = 0x4010000000000000;
  uVar1 = uVar7;
  uVar5 = _CGRectMake(dVar4);
  _objc_msgSend_qqRingLayer(param_1,local_150);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFrame_(uVar5,uVar6,uVar7,uVar1,uVar2,local_150);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_commit(&_OBJC_CLASS___CATransaction,local_150);
  uVar5 = 0;
  uVar7 = 0x402c000000000000;
  uVar6 = 0x402c000000000000;
  uVar2 = _CGRectMake(0);
  _objc_msgSend_qqSymbolView(param_1,local_150);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setBounds_(uVar2,uVar5,uVar6,uVar7,uVar1,local_150);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  uVar5 = 0x402e000000000000;
  uVar2 = _CGPointMake(dVar4 + 11.0);
  _objc_msgSend_qqSymbolView(param_1,local_150);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setCenter_(uVar2,uVar5,uVar1,local_150);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  uVar5 = 0x4010000000000000;
  uVar6 = 0x4036000000000000;
  uVar2 = _CGRectMake(dVar4 + 29.0);
  _objc_msgSend_qqMessageLabel(param_1,local_150);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFrame_(uVar2,uVar5,dVar3,uVar6,uVar1,local_150);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

