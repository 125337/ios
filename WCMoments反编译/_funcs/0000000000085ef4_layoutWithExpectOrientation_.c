// layoutWithExpectOrientation: @0x85ef4

/* Function Stack Size: 0x18 bytes */

void WCMYBIBToolViewHandler::layoutWithExpectOrientation_(ID param_1,SEL param_2,long_long param_3)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double in_d1;
  double in_d3;
  undefined8 local_b0;
  
  _objc_msgSend_wcm_yb_containerSize(param_1);
  lVar1 = _objc_retainAutoreleasedReturnValue();
  dVar3 = (double)(**(code **)(lVar1 + 0x10))(lVar1,param_3);
  (*(code *)PTR__objc_release_00110458)(lVar1);
  uVar4 = _WCMYBIBPaddingByBrowserOrientation(param_3);
  in_d3 = (dVar3 - in_d1) - in_d3;
  uVar5 = _objc_msgSend_defaultHeight(&objc::class_t::WCMYBIBTopView,local_b0);
  uVar6 = _CGRectMake(in_d1);
  _objc_msgSend_topView(param_1,local_b0);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFrame_(uVar6,uVar4,in_d3,uVar5,uVar2,local_b0);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  return;
}

