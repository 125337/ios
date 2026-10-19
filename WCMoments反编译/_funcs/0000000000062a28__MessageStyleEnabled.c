// _MessageStyleEnabled @0x62a28

byte _MessageStyleEnabled(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_58;
  int local_2c;
  long local_28;
  undefined8 local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = (*(code *)PTR__objc_retain_00110460)(local_20);
  do {
    lVar4 = local_28;
    if (local_28 == 0) {
      local_2c = 2;
LAB_00062b74:
      _objc_storeStrong(&local_28,0);
      local_2c = local_2c + -2;
      if (local_2c == 0) {
        local_2c = 1;
        local_11 = 0;
      }
      _objc_storeStrong(local_2c,&local_20,0);
      return local_11 & 1;
    }
    uVar2 = _objc_opt_class(&_OBJC_CLASS___UIViewController);
    uVar3 = _objc_opt_isKindOfClass(lVar4,uVar2);
    bVar1 = false;
    if ((uVar3 & 1) != 0) {
      _objc_getAssociatedObject(local_28,&_MessageStyleKey);
      lVar4 = _objc_retainAutoreleasedReturnValue();
      bVar1 = lVar4 != 0;
      (*(code *)PTR__objc_release_00110458)(lVar4);
    }
    if (bVar1) {
      local_11 = 1;
      local_2c = 1;
      goto LAB_00062b74;
    }
    _objc_msgSend_nextResponder(local_28,local_58);
    lVar5 = _objc_retainAutoreleasedReturnValue();
    lVar4 = local_28;
    local_28 = lVar5;
    (*(code *)PTR__objc_release_00110458)(lVar4);
  } while( true );
}

