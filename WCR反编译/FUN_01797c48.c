// FUN_01797c48 @ 01797c48

void FUN_01797c48(undefined8 param_1)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  ulong local_118;
  ulong local_50;
  ulong local_48;
  undefined4 local_40;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar2 = local_30;
  if (local_30 != 0) {
    if (DAT_028e4080 == (char *)0x0) {
      pcVar1 = "BaseMsgContentViewController";
      _objc_getClass();
      DAT_028e4080 = pcVar1;
    }
    pcVar1 = DAT_028e4080;
    _objc_retainAutoreleaseReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,pcVar1);
    if ((uVar2 & 1) != 0) {
      uVar3 = local_30;
      FUN_017992d4(local_30,PTR_s_getChatContact_0269d630);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_30;
      local_48 = uVar3;
      if (uVar3 == 0) {
        pcVar4 = &cf_GetCContact;
        _NSSelectorFromString();
        FUN_017992d4(uVar2,pcVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_48;
        local_48 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      uVar2 = local_30;
      if (local_48 == 0) {
        pcVar4 = &cf_GetContact;
        _NSSelectorFromString();
        FUN_017992d4(uVar2,pcVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_48;
        local_48 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      if (local_48 == 0) {
        local_28 = 0;
        local_40 = 1;
      }
      else {
        local_50 = 0;
        uVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_50;
        local_50 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
        uVar2 = local_50;
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
        uVar3 = local_50;
        if ((uVar2 & 1) == 0) {
          local_28 = 0;
        }
        else {
          puVar5 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                     PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_50;
          local_50 = uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar2);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          uVar2 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
          if (uVar2 == 0) {
            local_118 = 0;
          }
          else {
            local_118 = local_50;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = local_118;
        }
        local_40 = 1;
        _objc_storeStrong(&local_50,0);
      }
      _objc_storeStrong(&local_48,0);
      goto LAB_017980d4;
    }
  }
  local_28 = 0;
  local_40 = 1;
LAB_017980d4:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

