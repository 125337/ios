// init @0x6af68

/* Function Stack Size: 0x10 bytes */

ID WCMYBIBImageCache::init(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ID IVar4;
  int iVar5;
  undefined8 local_48;
  ID local_30;
  class_t *local_28;
  SEL local_20;
  long local_18;
  
  local_18 = 0;
  local_28 = &objc::class_t::WCMYBIBImageCache;
  local_30 = param_1;
  local_20 = param_2;
  local_18 = _objc_msgSendSuper2(&local_30,"init");
  _objc_storeStrong(&local_18);
  if (local_18 != 0) {
    uVar1 = _objc_opt_new(&_OBJC_CLASS___NSCache);
    uVar2 = *(undefined8 *)(local_18 + 8);
    *(undefined8 *)(local_18 + 8) = uVar1;
    (*(code *)PTR__objc_release_00110458)(uVar2);
    uVar3 = _WCMYBIBLowMemory();
    iVar5 = 6;
    if ((uVar3 & 1) == 0) {
      iVar5 = 0xc;
    }
    *(long *)(local_18 + 0x18) = (long)iVar5;
    _objc_msgSend_setCountLimit_(*(undefined8 *)(local_18 + 8),local_48);
    _objc_msgSend_dictionary(&_OBJC_CLASS___NSMutableDictionary,local_48);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(local_18 + 0x10);
    *(undefined8 *)(local_18 + 0x10) = uVar1;
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_defaultCenter(&_OBJC_CLASS___NSNotificationCenter,local_48);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_addObserver_selector_name_object_
              (uVar1,local_48,local_18,"didReceiveMemoryWarning:",
               *(undefined8 *)PTR__UIApplicationDidReceiveMemoryWarningNotification_00110088,0);
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  IVar4 = (*(code *)PTR__objc_retain_00110460)(local_18);
  _objc_storeStrong(&local_18,0);
  return IVar4;
}

