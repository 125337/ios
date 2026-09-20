// FUN_005dc608 @ 005dc608

byte FUN_005dc608(undefined8 param_1)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  long local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  byte local_3d;
  char *local_30;
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
    pcVar1 = "CMessageWrap";
    _objc_getClass();
    local_30 = pcVar1;
    if (pcVar1 != (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_isSenderFromMsgWrap__0269d558);
      if (((ulong)pcVar1 & 1) != 0) {
        pcVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isSenderFromMsgWrap__0269d558,local_20)
        ;
        local_3d = (byte)pcVar1;
        local_11 = local_3d & 1;
        local_24 = 1;
        goto LAB_005dca48;
      }
    }
    pcVar2 = &cf_MMServiceCenter;
    _NSClassFromString();
    local_48 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_11 = 0;
      local_24 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      local_50 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_11 = 0;
        local_24 = 1;
      }
      else {
        pcVar2 = &cf_CContactMgr;
        _NSClassFromString();
        local_58 = pcVar2;
        if (pcVar2 == (cfstringStruct *)0x0) {
          local_11 = 0;
          local_24 = 1;
        }
        else {
          pcVar3 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_getService__0269d170,pcVar2);
          _objc_retainAutoreleasedReturnValue();
          local_60 = pcVar3;
          if (pcVar3 == (cfstringStruct *)0x0) {
            local_11 = 0;
            local_24 = 1;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_getSelfContact_0269da60);
            _objc_retainAutoreleasedReturnValue();
            local_68 = pcVar3;
            if (pcVar3 == (cfstringStruct *)0x0) {
              local_11 = 0;
              local_24 = 1;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar3,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
              _objc_retainAutoreleasedReturnValue();
              local_70 = pcVar3;
              if (pcVar3 == (cfstringStruct *)0x0) {
                local_11 = 0;
                local_24 = 1;
              }
              else {
                lVar4 = local_20;
                (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_nsFromUsr_0269d088);
                _objc_retainAutoreleasedReturnValue();
                local_78 = lVar4;
                (*(code *)PTR__objc_msgSend_02578628)
                          (lVar4,PTR_s_isEqualToString__0269ccc8,local_70);
                local_11 = (byte)lVar4 & 1;
                local_24 = 1;
                _objc_storeStrong(&local_78,0);
              }
              _objc_storeStrong(&local_70,0);
            }
            _objc_storeStrong(&local_68,0);
          }
          _objc_storeStrong(&local_60,0);
        }
      }
      _objc_storeStrong(&local_50,0);
    }
  }
LAB_005dca48:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

