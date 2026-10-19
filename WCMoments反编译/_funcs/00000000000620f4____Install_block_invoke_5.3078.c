// ___Install_block_invoke_5.3078 @0x620f4

void ___Install_block_invoke_5_3078(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  _objc_msgSend_standardUserDefaults(&_OBJC_CLASS___NSUserDefaults,local_48);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = _objc_msgSend_boolForKey_(uVar2,local_48,&cf_WCMomentsDisabled);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  if ((uVar1 & 1) == 0) {
    _Attach(local_20);
  }
  (**(code **)(param_1 + 0x20))(local_20,"viewWillAppear:",param_3 & 1);
  _objc_msgSend_standardUserDefaults(&_OBJC_CLASS___NSUserDefaults,local_48);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = _objc_msgSend_boolForKey_(uVar2,local_48,&cf_WCMomentsDisabled);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  if ((uVar1 & 1) == 0) {
    _Attach(local_20);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

