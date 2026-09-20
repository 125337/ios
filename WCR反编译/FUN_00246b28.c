// FUN_00246b28 @ 00246b28

void FUN_00246b28(long param_1)

{
  char *pcVar1;
  long lVar2;
  char *local_70;
  char *local_68 [2];
  undefined4 local_54;
  char *local_50 [3];
  char *local_38;
  long local_30;
  char *local_28;
  
  local_30 = param_1;
  if (param_1 == 0) {
    local_28 = (char *)0x0;
    goto LAB_002472a4;
  }
  pcVar1 = "MMContext";
  _objc_getClass();
  FUN_00244f18();
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar1;
  if (pcVar1 == (char *)0x0) {
LAB_00246e90:
    pcVar1 = "MMServiceCenter";
    _objc_getClass();
    FUN_00244f18(pcVar1,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    local_68[0] = pcVar1;
    if (pcVar1 == (char *)0x0) {
LAB_002471e8:
      lVar2 = local_30;
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      _NSLog(&cf__wcr__edit_image_send_serviceunavailableservice___);
      (*(code *)PTR__objc_release_02578630)(lVar2);
      local_28 = (char *)0x0;
      local_54 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
      if (((ulong)pcVar1 & 1) == 0) goto LAB_002471e8;
      pcVar1 = local_68[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_getService__0269d170,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_70 = pcVar1;
      if (pcVar1 == (char *)0x0) {
        lVar2 = local_30;
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        _NSLog(&cf__wcr__edit_image_send_servicereturnednilpath_centerservice___);
        (*(code *)PTR__objc_release_02578630)(lVar2);
      }
      pcVar1 = local_70;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar1;
      local_54 = 1;
      _objc_storeStrong(&local_70,0);
    }
    _objc_storeStrong(local_68,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
    if (((ulong)pcVar1 & 1) == 0) goto LAB_00246e90;
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_getService__0269d170,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_50[0] = pcVar1;
    if (pcVar1 == (char *)0x0) {
      lVar2 = local_30;
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      _NSLog(&cf__wcr__edit_image_send_servicereturnednilpath_contextservice___);
      (*(code *)PTR__objc_release_02578630)(lVar2);
    }
    pcVar1 = local_50[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar1;
    local_54 = 1;
    _objc_storeStrong(local_50,0);
  }
  _objc_storeStrong(&local_38,0);
LAB_002472a4:
  _objc_autoreleaseReturnValue(local_28);
  return;
}

