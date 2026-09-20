// FUN_0156b840 @ 0156b840

byte FUN_0156b840(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  long local_30;
  undefined4 local_24;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    lVar1 = local_20;
    FUN_01528d34();
    _objc_retainAutoreleasedReturnValue();
    local_30 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
    if (lVar1 == 0) {
      lVar2 = local_20;
      FUN_01533eb8(local_20,&cf_m_nsUsrName);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_30;
      local_30 = lVar2;
      (*(code *)PTR__objc_release_02578630)(lVar1);
    }
    lVar1 = local_30;
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_30;
    local_30 = lVar1;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    lVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (lVar1 == 0) {
      local_11 = 0;
      local_24 = 1;
    }
    else {
      pcVar4 = &cf_ChatBackgroundEntranceViewController;
      _NSClassFromString();
      local_38 = pcVar4;
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_11 = 0;
        local_24 = 1;
      }
      else {
        _objc_alloc_init();
        local_40 = pcVar4;
        if (pcVar4 == (cfstringStruct *)0x0) {
          local_11 = 0;
        }
        else {
          pcVar4 = &cf_setM_username_;
          _NSSelectorFromString();
          pcVar5 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_respondsToSelector__026ca818,pcVar4);
          if (((ulong)pcVar5 & 1) == 0) {
            FUN_01563e1c(local_40,&cf_m_username,local_30);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_40,pcVar4,local_30);
          }
          FUN_01556938(local_40);
          local_11 = 1;
        }
        local_24 = 1;
        _objc_storeStrong(&local_40,0);
      }
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

