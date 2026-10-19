// initWithImageDataArray:oneFrameDuration:loopCount: @0x9bef0

/* Function Stack Size: 0x28 bytes */

ID WCMYYFrameImage::initWithImageDataArray_oneFrameDuration_loopCount_
             (ID param_1,SEL param_2,ID param_3,double param_4,unsigned_long_long param_5)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined8 local_50;
  int local_44;
  undefined8 local_40;
  unsigned_long_long local_38;
  double local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_38 = param_5;
  local_30 = param_4;
  local_40 = _objc_opt_new(&_OBJC_CLASS___NSMutableArray);
  local_44 = 0;
  iVar2 = _objc_msgSend_count(local_28,local_50);
  for (; IVar4 = local_18, uVar1 = local_40, local_44 < iVar2; local_44 = local_44 + 1) {
    _objc_msgSend_numberWithDouble_(local_30,&_OBJC_CLASS___NSNumber,local_50);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_addObject_(uVar1,local_50);
    (*(code *)PTR__objc_release_00110458)(uVar3);
  }
  local_18 = 0;
  local_18 = _objc_msgSend_initWithImageDataArray_frameDurations_loopCount_
                       (IVar4,local_50,local_28,local_40,local_38);
  IVar4 = (*(code *)PTR__objc_retain_00110460)();
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return IVar4;
}

