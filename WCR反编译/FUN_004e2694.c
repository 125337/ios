// FUN_004e2694 @ 004e2694

byte FUN_004e2694(undefined8 param_1)

{
  ulong uVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  byte local_140;
  ulong local_a0 [2];
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  char *local_58;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == 0) {
    local_21 = 0;
    local_34 = 1;
  }
  else {
    uVar1 = local_30;
    FUN_004e2d9c();
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar1;
    if (uVar1 == 0) {
      local_21 = 0;
      local_34 = 1;
    }
    else {
      pcVar2 = "CMessageWrap";
      _objc_getClass();
      local_58 = pcVar2;
      if ((pcVar2 == (char *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_isSenderFromMsgWrap__0269d558),
         ((ulong)pcVar2 & 1) == 0)) {
        pcVar3 = &cf_MMServiceCenter;
        _NSClassFromString();
        local_68 = pcVar3;
        if (pcVar3 == (cfstringStruct *)0x0) {
          local_21 = 0;
          local_34 = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_defaultCenter_026ca5e0);
          _objc_retainAutoreleasedReturnValue();
          local_70 = pcVar3;
          if (pcVar3 == (cfstringStruct *)0x0) {
            local_21 = 0;
            local_34 = 1;
          }
          else {
            pcVar3 = &cf_CContactMgr;
            _NSClassFromString();
            local_78 = pcVar3;
            if (pcVar3 == (cfstringStruct *)0x0) {
              local_21 = 0;
              local_34 = 1;
            }
            else {
              pcVar4 = local_70;
              (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_getService__0269d170,pcVar3);
              _objc_retainAutoreleasedReturnValue();
              local_80 = pcVar4;
              if (pcVar4 == (cfstringStruct *)0x0) {
                local_21 = 0;
                local_34 = 1;
              }
              else {
                FUN_004e3288(pcVar4,PTR_s_getSelfContact_0269da60);
                _objc_retainAutoreleasedReturnValue();
                local_88 = pcVar4;
                if (pcVar4 == (cfstringStruct *)0x0) {
                  local_21 = 0;
                  local_34 = 1;
                }
                else {
                  local_90 = (cfstringStruct *)0x0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (pcVar4,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
                  _objc_retainAutoreleasedReturnValue();
                  pcVar3 = local_90;
                  local_90 = pcVar4;
                  (*(code *)PTR__objc_release_02578630)(pcVar3);
                  pcVar3 = local_90;
                  puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5)
                  ;
                  if ((((ulong)pcVar3 & 1) == 0) ||
                     (pcVar3 = local_90,
                     (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0),
                     pcVar3 == (cfstringStruct *)0x0)) {
                    local_21 = 0;
                    local_34 = 1;
                  }
                  else {
                    local_a0[0] = 0;
                    uVar6 = local_40;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_40,PTR_s_valueForKey__0269d128,&cf_m_nsFromUsr);
                    _objc_retainAutoreleasedReturnValue();
                    uVar1 = local_a0[0];
                    local_a0[0] = uVar6;
                    (*(code *)PTR__objc_release_02578630)(uVar1);
                    uVar1 = local_a0[0];
                    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar1,PTR_s_isKindOfClass__0269cd68,puVar5);
                    local_140 = 0;
                    if ((uVar1 & 1) != 0) {
                      uVar1 = local_a0[0];
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_a0[0],PTR_s_isEqualToString__0269ccc8,local_90);
                      local_140 = (byte)uVar1;
                    }
                    local_21 = local_140 & 1;
                    local_34 = 1;
                    _objc_storeStrong(local_a0,0);
                  }
                  _objc_storeStrong(&local_90,0);
                }
                _objc_storeStrong(&local_88,0);
              }
              _objc_storeStrong(&local_80,0);
            }
          }
          _objc_storeStrong(&local_70,0);
        }
      }
      else {
        pcVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isSenderFromMsgWrap__0269d558,local_40)
        ;
        local_21 = (byte)pcVar2 & 1;
        local_34 = 1;
      }
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

