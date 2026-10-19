// presentationTransitionWillBegin @0xee04

/* Function Stack Size: 0x10 bytes */

void WCMCommentPresentation::presentationTransitionWillBegin(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 local_60;
  undefined8 local_48;
  undefined8 local_40;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  uVar1 = _objc_alloc(&_OBJC_CLASS___UIControl);
  _objc_msgSend_containerView(local_18,local_60);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  local_40 = _objc_msgSend_bounds(uVar2,local_60);
  uVar1 = _objc_msgSend_initWithFrame_(local_40,in_d1,in_d2,in_d3,uVar1,local_60);
  _objc_msgSend_setDimmer_(local_18,local_60);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_colorWithWhite_alpha_(0,0x3fbeb851eb851eb8,&_OBJC_CLASS___UIColor,local_60);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_dimmer(local_18,local_60);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setBackgroundColor_(uVar2,local_60,uVar1);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_dimmer(local_18,local_60);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_addTarget_action_forControlEvents_(uVar1,local_60,local_18,"dismissPanel",0x40);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_containerView(local_18,local_60);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_dimmer(local_18,local_60);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_insertSubview_atIndex_(uVar1,local_60,uVar2,0);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_presentedView(local_18,local_60);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_layer(uVar1,local_60);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setCornerRadius_(0x4038000000000000,uVar2,local_60);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_presentedView(local_18,local_60);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_layer(uVar1,local_60);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setMaskedCorners_(uVar2,local_60,3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_presentedView(local_18,local_60);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setClipsToBounds_(uVar1,local_60,1);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  uVar1 = _objc_alloc(&_OBJC_CLASS___UIPanGestureRecognizer);
  local_48 = _objc_msgSend_initWithTarget_action_(uVar1,local_60,local_18,"dragHeader:");
  _objc_msgSend_setDelegate_(local_48,local_60,local_18);
  _objc_msgSend_presentedView(local_18,local_60);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_addGestureRecognizer_(uVar1,local_60,local_48);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_storeStrong(&local_48,0);
  return;
}

