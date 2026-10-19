// viewDidLayoutSubviews @0x15694

/* Function Stack Size: 0x10 bytes */

void WCMVideoComments::viewDidLayoutSubviews(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double in_d2;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_b0;
  ID local_30;
  class_t *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = &objc::class_t::WCMVideoComments;
  local_30 = param_1;
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSendSuper2(&local_30,"viewDidLayoutSubviews");
  _objc_msgSend_view(local_18,local_b0);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_bounds(uVar1,local_b0);
  uVar6 = 0x4042000000000000;
  uVar5 = 0x4020000000000000;
  uVar7 = 0x4014000000000000;
  uVar4 = _CGRectMake((in_d2 - 36.0) / 2.0);
  _objc_msgSend_view(local_18,local_b0);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_viewWithTag_(uVar2,local_b0,0x2c5);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFrame_(uVar4,uVar5,uVar6,uVar7,uVar3,local_b0);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

