// init @0x938dc

/* Function Stack Size: 0x10 bytes */

ID WCMYYImageDecoder::init(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 local_48;
  ID local_18;
  
  local_18 = param_1;
  _objc_msgSend_mainScreen(&_OBJC_CLASS___UIScreen);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_scale(uVar1,local_48);
  local_18 = 0;
  local_18 = _objc_msgSend_initWithScale_(param_1,local_48);
  IVar2 = (*(code *)PTR__objc_retain_00110460)();
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_storeStrong(&local_18,0);
  return IVar2;
}

