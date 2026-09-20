// FUN_00290aac @ 00290aac

byte FUN_00290aac(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  char *local_50;
  char *local_48;
  undefined4 local_40;
  char *local_30;
  char *local_28;
  char *local_20;
  byte local_11;
  
  pcVar1 = "MMContext";
  _objc_getClass();
  pcVar2 = "ForwardMessageMgr";
  local_20 = pcVar1;
  _objc_getClass();
  pcVar1 = local_20;
  local_28 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8);
  if ((((ulong)pcVar1 & 1) == 0) || (local_28 == (char *)0x0)) {
    local_11 = 0;
  }
  else {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_currentContext_0269d5f8);
    _objc_retainAutoreleasedReturnValue();
    local_30 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
    if (((ulong)pcVar1 & 1) == 0) {
      local_11 = 0;
      local_40 = 1;
    }
    else {
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getService__0269d170,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_48 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_shareSheetStack_026a17f8);
      if (((ulong)pcVar1 & 1) == 0) {
        local_11 = 0;
        local_40 = 1;
      }
      else {
        pcVar1 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_shareSheetStack_026a17f8);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_50 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
        local_11 = false;
        if (((ulong)pcVar1 & 1) != 0) {
          pcVar1 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
          local_11 = pcVar1 != (char *)0x0;
        }
        local_40 = 1;
        _objc_storeStrong(&local_50,0);
      }
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_30,0);
  }
  return local_11 & 1;
}

