// initWithStyle:reuseIdentifier: @0x86e60

/* Function Stack Size: 0x20 bytes */

ID WCMYBIBSheetCell::initWithStyle_reuseIdentifier_
             (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_68;
  ID local_40;
  class_t *local_38;
  undefined8 local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  local_40 = local_18;
  local_18 = 0;
  local_38 = &objc::class_t::WCMYBIBSheetCell;
  IVar1 = _objc_msgSendSuper2(&local_40,"initWithStyle:reuseIdentifier:",local_28,local_30);
  local_18 = IVar1;
  _objc_storeStrong(&local_18);
  if (IVar1 != 0) {
    _objc_msgSend_setSelectionStyle_(local_18,local_68,0);
    uVar2 = _objc_opt_new(&_OBJC_CLASS___UILabel);
    uVar3 = *(undefined8 *)(local_18 + (long)_titleLabel);
    *(undefined8 *)(local_18 + (long)_titleLabel) = uVar2;
    (*(code *)PTR__objc_release_00110458)(uVar3);
    _objc_msgSend_darkTextColor(&_OBJC_CLASS___UIColor,local_68);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setTextColor_(*(undefined8 *)(local_18 + (long)_titleLabel),local_68);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_fontWithName_size_
              (0x4030000000000000,&_OBJC_CLASS___UIFont,local_68,&cf_Avenir_Medium);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setFont_(*(undefined8 *)(local_18 + (long)_titleLabel),local_68);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_setTextAlignment_(*(undefined8 *)(local_18 + (long)_titleLabel),local_68,1);
    uVar2 = _objc_opt_new(&_OBJC_CLASS___CALayer);
    uVar3 = *(undefined8 *)(local_18 + (long)_line);
    *(undefined8 *)(local_18 + (long)_line) = uVar2;
    (*(code *)PTR__objc_release_00110458)(uVar3);
    _objc_msgSend_groupTableViewBackgroundColor(&_OBJC_CLASS___UIColor,local_68);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    uVar3 = _objc_msgSend_CGColor(uVar2,local_68);
    _objc_msgSend_setBackgroundColor_(*(undefined8 *)(local_18 + (long)_line),local_68,uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_contentView(local_18,local_68);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_addSubview_(uVar2,local_68,*(undefined8 *)(local_18 + (long)_titleLabel));
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_contentView(local_18,local_68);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_layer(uVar2,local_68);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_addSublayer_(uVar3,local_68,*(undefined8 *)(local_18 + (long)_line));
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
  }
  IVar1 = (*(code *)PTR__objc_retain_00110460)(local_18);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_18,0);
  return IVar1;
}

