// FUN_00403008 @ 00403008

void FUN_00403008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 byte param_5,byte param_6)

{
  char *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_f0;
  ulong local_c0;
  ulong local_70;
  cfstringStruct *local_68;
  ulong local_60;
  int local_58;
  byte local_42;
  byte local_41;
  ulong local_40;
  cfstringStruct *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_42 = param_6;
  local_41 = param_5;
  if (DAT_028ca6b0 != (code *)0x0) {
    (*DAT_028ca6b0)(local_28,local_30,local_38,local_40,param_5 & 1,param_6 & 1);
  }
  uVar2 = local_40;
  if (DAT_028ca6c0 != 0) {
    local_58 = 1;
    goto LAB_00403324;
  }
  pcVar1 = "CMessageWrap";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,pcVar1);
  if ((uVar2 & 1) == 0) {
    local_c0 = 0;
  }
  else {
    local_c0 = local_40;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = local_c0;
  if (local_c0 == 0) {
LAB_004031a8:
    local_58 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_m_uiMessageType_0269d0a8);
    local_c0 = local_c0 & 0xffffffff;
    FUN_0040bd18();
    pcVar4 = local_38;
    if ((local_c0 & 1) == 0) goto LAB_004031a8;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)pcVar4 & 1) == 0) {
      local_f0 = &cf___;
    }
    else {
      local_f0 = local_38;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_f0;
    uVar2 = local_60;
    FUN_00423668(local_60,local_f0,&cf_AddLocalMsg);
    _objc_retainAutoreleasedReturnValue();
    local_70 = uVar2;
    if (uVar2 != 0) {
      FUN_00405c08(uVar2);
    }
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
    local_58 = 0;
  }
  _objc_storeStrong(&local_60,0);
  if (local_58 == 0) {
    local_58 = 0;
  }
LAB_00403324:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

