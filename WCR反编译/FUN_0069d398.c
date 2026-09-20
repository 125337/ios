// FUN_0069d398 @ 0069d398

void FUN_0069d398(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  char *local_a8;
  char *local_98;
  char *local_88;
  bool local_79;
  char *local_78;
  char *local_70;
  bool local_61;
  char *local_60;
  char *local_58;
  bool local_49;
  char *local_48;
  char *local_40;
  char *local_38;
  char *local_30;
  undefined4 local_24;
  long local_20;
  char *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_18 = (char *)0x0;
    local_24 = 1;
  }
  else {
    pcVar3 = "MMServiceCenter";
    _objc_getClass();
    pcVar4 = "MMThemeManager";
    local_30 = pcVar3;
    _objc_getClass();
    pcVar3 = local_30;
    local_38 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0);
    local_49 = false;
    bVar1 = ((ulong)pcVar3 & 1) == 0;
    if (bVar1) {
      local_88 = (char *)0x0;
    }
    else {
      local_88 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      local_48 = local_88;
    }
    local_49 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_88;
    if ((local_49 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
    local_61 = false;
    bVar1 = ((ulong)pcVar3 & 1) == 0;
    if (bVar1) {
      local_98 = (char *)0x0;
    }
    else {
      local_98 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_getService__0269d170,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_98;
    }
    local_61 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_98;
    if ((local_61 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    pcVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_imageNamed__0269fd20);
    local_79 = ((ulong)pcVar3 & 1) == 0;
    if (local_79) {
      local_a8 = (char *)0x0;
    }
    else {
      local_a8 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_imageNamed__0269fd20,local_20);
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_a8;
    }
    local_79 = !local_79;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = local_a8;
    if (local_79) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    if (local_70 == (char *)0x0) {
      pcVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageNamed__0269fd20,local_20);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_70;
      local_70 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    pcVar3 = local_70;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar3;
    local_24 = 1;
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

