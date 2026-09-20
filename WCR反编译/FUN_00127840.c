// FUN_00127840 @ 00127840

char * FUN_00127840(undefined8 param_1)

{
  long lVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  char *local_68;
  char *local_60;
  cfstringStruct *local_58;
  char *local_50;
  char *local_48;
  undefined4 local_40;
  long local_30;
  char *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_28 = (char *)0x0;
    local_40 = 1;
  }
  else {
    pcVar2 = "CContactMgr";
    _objc_getClass();
    FUN_0010f1e0();
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      local_28 = (char *)0x0;
      local_40 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_getContactByName__0269d178,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_50 = pcVar2;
      if (pcVar2 == (char *)0x0) {
        local_28 = (char *)0x0;
        local_40 = 1;
      }
      else {
        pcVar3 = &cf_m_ChatRoomData;
        _NSSelectorFromString();
        pcVar2 = local_50;
        local_58 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_respondsToSelector__026ca818,pcVar3);
        if (((ulong)pcVar2 & 1) == 0) {
          local_28 = (char *)0x0;
          local_40 = 1;
        }
        else {
          pcVar2 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,local_58);
          _objc_retainAutoreleasedReturnValue();
          local_60 = pcVar2;
          if (pcVar2 == (char *)0x0) {
            local_28 = (char *)0x0;
            local_40 = 1;
          }
          else {
            local_68 = (char *)0x0;
            pcVar3 = &cf_m_dicData;
            _NSSelectorFromString();
            pcVar2 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_60,PTR_s_respondsToSelector__026ca818,pcVar3);
            if (((ulong)pcVar2 & 1) != 0) {
              pcVar4 = local_60;
              (*(code *)PTR__objc_msgSend_02578628)(local_60,pcVar3);
              _objc_retainAutoreleasedReturnValue();
              pcVar2 = local_68;
              local_68 = pcVar4;
              (*(code *)PTR__objc_release_02578630)(pcVar2);
            }
            pcVar2 = local_68;
            puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
            if (((ulong)pcVar2 & 1) == 0) {
              pcVar4 = local_60;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_60,PTR_s_valueForKey__0269d128,&cf_m_dicData);
              _objc_retainAutoreleasedReturnValue();
              pcVar2 = local_68;
              local_68 = pcVar4;
              (*(code *)PTR__objc_release_02578630)(pcVar2);
            }
            pcVar2 = local_68;
            puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
            if (((ulong)pcVar2 & 1) == 0) {
              local_28 = (char *)0x0;
            }
            else {
              pcVar2 = local_68;
              (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_count_0269cfe0);
              local_28 = pcVar2;
            }
            local_40 = 1;
            _objc_storeStrong(&local_68,0);
          }
          _objc_storeStrong(&local_60,0);
        }
      }
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_28;
}

