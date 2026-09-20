// FUN_00299d7c @ 00299d7c

void FUN_00299d7c(undefined8 param_1)

{
  qword qVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  cfstringStruct *local_188;
  cfstringStruct *local_d0;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct local_50;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar2 = local_30;
  FUN_00299774();
  _objc_retainAutoreleasedReturnValue();
  local_50.field3_0x18 = (long)pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_28 = (cfstringStruct *)0x0;
    local_50.field1_0x8._0_4_ = 1;
    goto LAB_0029a434;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_GetChatName_0269da58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = (cfstringStruct *)local_50.field3_0x18;
    (*(code *)PTR__objc_msgSend_02578628)(local_50.field3_0x18,PTR_s_GetChatName_0269da58);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_50.field0_0x0 = (qword)pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    uVar5 = (ulong)pcVar2 & 0xffffffff;
    if (((ulong)pcVar2 & 1) == 0) {
LAB_00299f2c:
      local_50.field1_0x8._0_4_ = 0;
    }
    else {
      pcVar2 = (cfstringStruct *)local_50.field0_0x0;
      (*(code *)PTR__objc_msgSend_02578628)(local_50.field0_0x0,PTR_s_length_0269cca0);
      qVar1 = local_50.field0_0x0;
      uVar5 = 0;
      if (pcVar2 == (cfstringStruct *)0x0) goto LAB_00299f2c;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = (cfstringStruct *)qVar1;
      uVar5 = 1;
      local_50.field1_0x8._0_4_ = 1;
    }
    pcVar2 = &local_50;
    _objc_storeStrong(uVar5,pcVar2,0);
    if ((int)local_50.field1_0x8 != 0) goto LAB_0029a434;
  }
  FUN_0029ab68();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_d0 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_d0;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  local_60 = (cfstringStruct *)0x0;
  local_68 = (cfstringStruct *)0x0;
  pcVar4 = (cfstringStruct *)local_50.field3_0x18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50.field3_0x18,PTR_s_valueForKey__0269d128,&cf_m_nsFromUsr);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_60;
  local_60 = pcVar4;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar4 = (cfstringStruct *)local_50.field3_0x18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50.field3_0x18,PTR_s_valueForKey__0269d128,&cf_m_nsToUsr);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_68;
  local_68 = pcVar4;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar4 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  pcVar2 = local_60;
  if (pcVar4 == (cfstringStruct *)0x0) {
LAB_0029a28c:
    pcVar2 = local_60;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((((ulong)pcVar2 & 1) == 0) ||
       (pcVar4 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0),
       pcVar2 = local_60, pcVar4 == (cfstringStruct *)0x0)) {
      pcVar2 = local_68;
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      if (((ulong)pcVar2 & 1) == 0) {
        local_188 = (cfstringStruct *)0x0;
      }
      else {
        local_188 = local_68;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = local_188;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar2;
    }
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((((ulong)pcVar2 & 1) == 0) ||
       (pcVar4 = local_60,
       (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isEqualToString__0269ccc8,local_58),
       pcVar2 = local_68, ((ulong)pcVar4 & 1) == 0)) goto LAB_0029a28c;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((((ulong)pcVar2 & 1) == 0) ||
       (pcVar4 = local_68, (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0),
       pcVar2 = local_68, pcVar4 == (cfstringStruct *)0x0)) goto LAB_0029a28c;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar2;
  }
  local_50.field1_0x8._0_4_ = 1;
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
LAB_0029a434:
  _objc_storeStrong(&local_50.field3_0x18);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

