// _StyleMessageCell @0xde38

void _StyleMessageCell(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,
                      undefined8 param_4,undefined8 param_5)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_98;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  uVar4 = local_28;
  uVar2 = _objc_opt_class(&_OBJC_CLASS___UITableViewCell);
  uVar3 = _objc_opt_isKindOfClass(uVar4,uVar2);
  if ((uVar3 & 1) == 0) {
    local_2c = 1;
  }
  else {
    _objc_msgSend_clearColor(&_OBJC_CLASS___UIColor,local_98);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setBackgroundColor_(local_28,local_98);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    _objc_msgSend_clearColor(&_OBJC_CLASS___UIColor,local_98);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_contentView(local_28,local_98);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setBackgroundColor_(uVar2,local_98,uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    _objc_msgSend_backgroundView(local_28,local_98);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    uVar2 = _objc_opt_class(&objc::class_t::WCMMessageCardBackground);
    uVar1 = _objc_opt_isKindOfClass(uVar4,uVar2);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    if ((uVar1 & 1) == 0) {
      uVar4 = _objc_alloc(&objc::class_t::WCMMessageCardBackground);
      local_50 = _objc_msgSend_bounds(local_28,local_98);
      local_48 = param_2;
      local_40 = param_3;
      local_38 = param_4;
      uVar4 = _objc_msgSend_initWithFrame_(local_50,uVar4,local_98);
      _objc_msgSend_setBackgroundView_(local_28,local_98);
      (*(code *)PTR__objc_release_00110458)(uVar4);
    }
    _objc_msgSend_selectedBackgroundView(local_28,local_98);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    uVar2 = _objc_opt_class(&objc::class_t::WCMMessageCardBackground);
    uVar1 = _objc_opt_isKindOfClass(uVar4,uVar2);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    if ((uVar1 & 1) == 0) {
      uVar4 = _objc_alloc(&objc::class_t::WCMMessageCardBackground);
      uVar2 = _objc_msgSend_bounds(local_28,local_98);
      local_58 = _objc_msgSend_initWithFrame_(uVar2,param_2,param_3,param_4,uVar4,local_98);
      _objc_msgSend_tertiarySystemFillColor(&_OBJC_CLASS___UIColor,local_98);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_surface(local_58,local_98);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setBackgroundColor_(uVar2,local_98,uVar4);
      (*(code *)PTR__objc_release_00110458)(uVar2);
      (*(code *)PTR__objc_release_00110458)(uVar4);
      _objc_msgSend_setSelectedBackgroundView_(local_28,local_98,local_58);
      _objc_storeStrong(&local_58,0);
    }
    _objc_msgSend_contentView(local_28,local_98);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_contentView(local_28,local_98);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _StyleMessageContent(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

