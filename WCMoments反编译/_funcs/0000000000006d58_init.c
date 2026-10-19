// init @0x6d58

/* Function Stack Size: 0x10 bytes */

ID WCMQQRefreshControl::init(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined8 local_68;
  ID local_40;
  class_t *local_38;
  SEL local_30;
  long local_28;
  
  local_28 = 0;
  local_38 = &objc::class_t::WCMQQRefreshControl;
  local_40 = param_1;
  local_30 = param_2;
  lVar1 = _objc_msgSendSuper2(&local_40,"init");
  local_28 = lVar1;
  _objc_storeStrong(&local_28);
  if (lVar1 != 0) {
    _objc_msgSend_clearColor(&_OBJC_CLASS___UIColor,local_68);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setTintColor_(local_28,local_68);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_clearColor(&_OBJC_CLASS___UIColor,local_68);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setBackgroundColor_(local_28,local_68);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_setOpaque_(local_28,local_68,0);
    _objc_msgSend_setClipsToBounds_(local_28,local_68,0);
    uVar2 = _objc_alloc(&_OBJC_CLASS___UIView);
    uVar2 = _objc_msgSend_initWithFrame_
                      (*(undefined8 *)PTR__CGRectZero_001108d8,
                       *(undefined8 *)(PTR__CGRectZero_001108d8 + 8),
                       *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x10),
                       *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x18),uVar2,local_68);
    _objc_msgSend_setQqIndicatorView_(local_28,local_68);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_qqIndicatorView(local_28,local_68);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setUserInteractionEnabled_(uVar2,local_68,0);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_qqIndicatorView(local_28,local_68);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setHidden_(uVar2,local_68,1);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_layer(&_OBJC_CLASS___CAShapeLayer,local_68);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setQqRingLayer_(local_28,local_68);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_qqIndicatorView(local_28,local_68);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_layer(uVar2,local_68);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_qqRingLayer(local_28,local_68);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_addSublayer_(uVar3,local_68);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    uVar2 = _objc_alloc(&_OBJC_CLASS___UIImageView);
    _objc_msgSend_systemImageNamed_(&_OBJC_CLASS___UIImage,local_68,&cf_arrow_down);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uVar2 = _objc_msgSend_initWithImage_(uVar2,local_68);
    _objc_msgSend_setQqSymbolView_(local_28,local_68);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_68);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_qqSymbolView(local_28,local_68);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setTintColor_(uVar3,local_68,uVar2);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_qqSymbolView(local_28,local_68);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setContentMode_(uVar2,local_68,1);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_qqIndicatorView(local_28,local_68);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_qqSymbolView(local_28,local_68);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_addSubview_(uVar2,local_68);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    uVar2 = _objc_opt_new(&_OBJC_CLASS___UILabel);
    _objc_msgSend_setQqMessageLabel_(local_28,local_68);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_systemFontOfSize_(0x4028000000000000,&_OBJC_CLASS___UIFont,local_68);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_qqMessageLabel(local_28,local_68);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setFont_(uVar3,local_68,uVar2);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_secondaryLabelColor(&_OBJC_CLASS___UIColor,local_68);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_qqMessageLabel(local_28,local_68);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setTextColor_(uVar3,local_68,uVar2);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_qqMessageLabel(local_28,local_68);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setTextAlignment_(uVar2,local_68,0);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_qqIndicatorView(local_28,local_68);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_qqMessageLabel(local_28,local_68);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_addSubview_(uVar2,local_68);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    lVar1 = local_28;
    _objc_msgSend_qqIndicatorView(local_28,local_68);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_addSubview_(lVar1,local_68);
    (*(code *)PTR__objc_release_00110458)(uVar2);
  }
  IVar5 = (*(code *)PTR__objc_retain_00110460)(local_28);
  _objc_storeStrong(&local_28,0);
  return IVar5;
}

