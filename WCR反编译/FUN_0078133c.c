// FUN_0078133c @ 0078133c

byte FUN_0078133c(long param_1,undefined8 param_2)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  long lVar5;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  byte local_4d;
  char *local_40;
  undefined4 local_34;
  long local_30;
  undefined8 local_28;
  long local_20;
  byte local_11;
  
  local_28 = param_2;
  local_20 = param_1;
  FUN_00788488();
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  if (param_1 == 0) {
    local_11 = 0;
    local_34 = 1;
  }
  else {
    pcVar1 = "CMessageWrap";
    _objc_getClass();
    local_40 = pcVar1;
    if (pcVar1 != (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_isSenderFromMsgWrap__0269d558);
      if (((ulong)pcVar1 & 1) != 0) {
        pcVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isSenderFromMsgWrap__0269d558,local_30)
        ;
        local_4d = (byte)pcVar1;
        local_11 = local_4d & 1;
        local_34 = 1;
        goto LAB_00781798;
      }
    }
    pcVar2 = &cf_MMServiceCenter;
    _NSClassFromString();
    local_58 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_11 = 0;
      local_34 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      local_60 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_11 = 0;
        local_34 = 1;
      }
      else {
        pcVar2 = &cf_CContactMgr;
        _NSClassFromString();
        local_68 = pcVar2;
        if (pcVar2 == (cfstringStruct *)0x0) {
          local_11 = 0;
          local_34 = 1;
        }
        else {
          pcVar3 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_getService__0269d170,pcVar2);
          _objc_retainAutoreleasedReturnValue();
          local_70 = pcVar3;
          if (pcVar3 == (cfstringStruct *)0x0) {
            local_11 = 0;
            local_34 = 1;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_getSelfContact_0269da60);
            _objc_retainAutoreleasedReturnValue();
            local_78 = pcVar3;
            if (pcVar3 == (cfstringStruct *)0x0) {
              local_11 = 0;
              local_34 = 1;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar3,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
              _objc_retainAutoreleasedReturnValue();
              local_80 = pcVar3;
              if (pcVar3 == (cfstringStruct *)0x0) {
                local_11 = 0;
              }
              else {
                lVar4 = local_30;
                (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_nsFromUsr_0269d088);
                _objc_retainAutoreleasedReturnValue();
                lVar5 = lVar4;
                (*(code *)PTR__objc_msgSend_02578628)();
                local_11 = (byte)lVar5 & 1;
                (*(code *)PTR__objc_release_02578630)(lVar4);
              }
              local_34 = 1;
              _objc_storeStrong(&local_80,0);
            }
            _objc_storeStrong(&local_78,0);
          }
          _objc_storeStrong(&local_70,0);
        }
      }
      _objc_storeStrong(&local_60,0);
    }
  }
LAB_00781798:
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

