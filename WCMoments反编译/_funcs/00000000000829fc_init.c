// init @0x829fc

/* Function Stack Size: 0x10 bytes */

ID WCMYBIBCopywriter::init(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ID IVar4;
  undefined8 local_58;
  undefined8 local_40;
  long local_38;
  ID local_30;
  class_t *local_28;
  SEL local_20;
  long local_18;
  
  local_18 = 0;
  local_28 = &objc::class_t::WCMYBIBCopywriter;
  local_30 = param_1;
  local_20 = param_2;
  local_18 = _objc_msgSendSuper2(&local_30,"init");
  _objc_storeStrong(&local_18);
  if (local_18 != 0) {
    *(undefined8 *)(local_18 + 8) = 0;
    _objc_msgSend_standardUserDefaults(&_OBJC_CLASS___NSUserDefaults,local_58);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_objectForKey_(uVar1,local_58,&cf_AppleLanguages);
    local_38 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(uVar1);
    if ((local_38 != 0) && (lVar2 = _objc_msgSend_count(local_38,local_58), lVar2 != 0)) {
      _objc_msgSend_objectAtIndexedSubscript_(lVar2,local_38,local_58,0);
      local_40 = _objc_retainAutoreleasedReturnValue();
      uVar3 = _objc_msgSend_hasPrefix_(local_40,local_58,&cf_zh_Hans);
      if ((uVar3 & 1) == 0) {
        *(undefined8 *)(local_18 + 8) = 1;
      }
      _objc_storeStrong(&local_40,0);
    }
    _objc_msgSend_initCopy(local_18,local_58);
    _objc_storeStrong(&local_38,0);
  }
  IVar4 = (*(code *)PTR__objc_retain_00110460)(local_18);
  _objc_storeStrong(&local_18,0);
  return IVar4;
}

