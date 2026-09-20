// FUN_004d7d54 @ 004d7d54

void FUN_004d7d54(undefined8 param_1)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  ulong uVar6;
  cfstringStruct **local_160;
  cfstringStruct *local_a0;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  char *local_58;
  cfstringStruct *local_50;
  int local_48;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar5 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar5 & 1) == 0) {
    local_a0 = &cf___;
  }
  else {
    local_a0 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
  if (local_a0 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_48 = 1;
    goto LAB_004d8328;
  }
  pcVar2 = "MMServiceCenter";
  _objc_getClass();
  pcVar3 = "CContactMgr";
  local_50 = (cfstringStruct *)pcVar2;
  _objc_getClass();
  pcVar5 = local_38;
  local_58 = pcVar3;
  if ((local_50 == (cfstringStruct *)0x0) || (pcVar3 == (char *)0x0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar5;
    local_48 = 1;
    goto LAB_004d8328;
  }
  pcVar4 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  local_60 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
  pcVar5 = local_38;
  if (((ulong)pcVar4 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar5;
    local_48 = 1;
  }
  else {
    pcVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_getService__0269d170,local_58);
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178);
    pcVar5 = local_38;
    if (((ulong)pcVar4 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar5;
      local_48 = 1;
    }
    else {
      pcVar4 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_getContactByName__0269d178,local_38);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = local_38;
      local_70 = pcVar4;
      if (pcVar4 == (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar5;
        local_48 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_getContactDisplayName_0269d160);
        if (((ulong)pcVar4 & 1) != 0) {
          pcVar5 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_getContactDisplayName_0269d160);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_78 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
          uVar6 = (ulong)pcVar5 & 0xffffffff;
          if (((ulong)pcVar5 & 1) == 0) {
LAB_004d81e0:
            local_48 = 0;
          }
          else {
            pcVar4 = local_78;
            (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
            pcVar5 = local_78;
            uVar6 = 0;
            if (pcVar4 == (cfstringStruct *)0x0) goto LAB_004d81e0;
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = pcVar5;
            uVar6 = 1;
            local_48 = 1;
          }
          _objc_storeStrong(uVar6,&local_78,0);
          if (local_48 != 0) goto LAB_004d82c8;
        }
        pcVar5 = local_70;
        FUN_004da094(local_70,&cf_m_nsNickName);
        _objc_retainAutoreleasedReturnValue();
        local_80 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_length_0269cca0);
        if (pcVar5 == (cfstringStruct *)0x0) {
          local_160 = &local_38;
        }
        else {
          local_160 = &local_80;
        }
        pcVar5 = *local_160;
        (*(code *)PTR__objc_retain_02578638)();
        local_48 = 1;
        local_28 = pcVar5;
        _objc_storeStrong(&local_80,0);
      }
LAB_004d82c8:
      _objc_storeStrong(&local_70,0);
    }
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_60,0);
LAB_004d8328:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

