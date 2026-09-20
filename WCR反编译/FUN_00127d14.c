// FUN_00127d14 @ 00127d14

byte FUN_00127d14(undefined8 param_1)

{
  long lVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  char *local_50;
  cfstringStruct *local_48;
  char *local_40;
  char *local_38;
  undefined4 local_30;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    pcVar2 = "CContactMgr";
    _objc_getClass();
    FUN_0010f1e0();
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      local_11 = 0;
      local_30 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_getContactByName__0269d178,local_20);
      _objc_retainAutoreleasedReturnValue();
      local_40 = pcVar2;
      if (pcVar2 == (char *)0x0) {
        local_11 = 0;
        local_30 = 1;
      }
      else {
        pcVar3 = &cf_m_ChatRoomData;
        _NSSelectorFromString();
        pcVar2 = local_40;
        local_48 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_respondsToSelector__026ca818,pcVar3);
        if (((ulong)pcVar2 & 1) == 0) {
          local_11 = 0;
          local_30 = 1;
        }
        else {
          pcVar2 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,local_48);
          _objc_retainAutoreleasedReturnValue();
          local_50 = pcVar2;
          if (pcVar2 == (char *)0x0) {
            local_11 = 0;
          }
          else {
            pcVar3 = &cf_isSimplify;
            _NSSelectorFromString();
            pcVar2 = local_50;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_50,PTR_s_respondsToSelector__026ca818,pcVar3);
            if (((ulong)pcVar2 & 1) == 0) {
              local_11 = 0;
            }
            else {
              pcVar2 = local_50;
              (*(code *)PTR__objc_msgSend_02578628)(local_50,pcVar3);
              local_11 = (byte)pcVar2 & 1;
            }
          }
          local_30 = 1;
          _objc_storeStrong(&local_50,0);
        }
      }
      _objc_storeStrong(&local_40,0);
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

