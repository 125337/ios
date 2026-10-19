// layoutSubviews @0x84d34

/* Function Stack Size: 0x10 bytes */

void WCMYBIBTopView::layoutSubviews(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double in_d2;
  double dVar5;
  undefined8 in_d3;
  undefined8 local_130;
  ID local_40;
  class_t *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = &objc::class_t::WCMYBIBTopView;
  local_40 = param_1;
  local_30 = param_2;
  local_28 = param_1;
  _objc_msgSendSuper2(&local_40,"layoutSubviews");
  _objc_msgSend_bounds(local_28,local_130);
  _objc_msgSend_bounds(local_28,local_130);
  dVar5 = in_d2 / 3.0;
  uVar4 = 0;
  uVar2 = in_d3;
  uVar3 = _CGRectMake(0x4030000000000000);
  _objc_msgSend_pageLabel(local_28,local_130);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFrame_(uVar3,uVar4,dVar5,uVar2,uVar1,local_130);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  uVar3 = 0;
  uVar4 = 0x404b000000000000;
  uVar1 = _CGRectMake(in_d2 - 54.0);
  _objc_msgSend_operationButton(local_28,local_130);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFrame_(uVar1,uVar3,uVar4,in_d3,uVar2,local_130);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  return;
}

