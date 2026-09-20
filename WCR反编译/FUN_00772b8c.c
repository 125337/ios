// FUN_00772b8c @ 00772b8c

byte FUN_00772b8c(void)

{
  char *pcVar1;
  char *pcVar2;
  uint local_5c;
  char *local_40;
  undefined4 local_38;
  char *local_28;
  char *local_20;
  byte local_11;
  
  pcVar1 = "WCRefineRootViewController";
  _objc_getClass();
  if (pcVar1 == (char *)0x0) {
    local_11 = 0;
  }
  else {
    local_20 = pcVar1;
    FUN_00773424();
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,local_20);
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      local_5c = 0;
      local_40 = pcVar1;
      if (pcVar1 != (char *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_visibleViewController_0269d460);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_5c = (uint)pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      local_11 = (local_5c & 1) != 0;
      local_38 = 1;
      _objc_storeStrong(&local_40,0);
    }
    else {
      local_11 = 1;
      local_38 = 1;
    }
    _objc_storeStrong(&local_28,0);
  }
  return local_11 & 1;
}

