// _WCRefineSetClownQuotedTextOverride @ 00f19790

void _WCRefineSetClownQuotedTextOverride(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_98;
  cfstringStruct *local_60;
  cfstringStruct *local_38;
  undefined4 local_2c;
  cfstringStruct *local_28;
  ulong local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  pcVar1 = local_18;
  _WCRefineClownMessageKey();
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if ((pcVar1 == (cfstringStruct *)0x0) ||
     (pcVar1 = local_18, _WCRefineClownMessageCanEditText(), ((ulong)pcVar1 & 1) == 0)) {
    local_2c = 1;
  }
  else {
    FUN_00f16cb4();
    lVar2 = DAT_028e2b68;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028e2b68,PTR_s_objectForKeyedSubscript__0269d098,local_28);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (lVar2 == 0) {
      pcVar1 = local_18;
      FUN_00f16348(local_18,PTR_s_m_nsContent_0269d0a0);
      _objc_retainAutoreleasedReturnValue();
      local_60 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_60 = &cf___;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028e2b68,PTR_s_setObject_forKeyedSubscript__0269d248,local_60,local_28);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    uVar4 = local_20;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((uVar4 & 1) == 0) ||
       (uVar4 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
       uVar4 == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028e2b48,PTR_s_removeObjectForKey__0269d700,local_28);
    }
    else {
      uVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_copy_0269d150);
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028e2b48,PTR_s_setObject_forKeyedSubscript__0269d248,uVar4,local_28);
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    pcVar1 = DAT_028e2b40;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028e2b40,PTR_s_objectForKeyedSubscript__0269d098,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      pcVar5 = (cfstringStruct *)PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_plainTextFromMessageWrap__026a3628,local_18);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_38;
      local_38 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    pcVar1 = (cfstringStruct *)PTR_WCRefineHelper_026ce000;
    if (pcVar5 == (cfstringStruct *)0x0) {
      lVar2 = DAT_028e2b68;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028e2b68,PTR_s_objectForKeyedSubscript__0269d098,local_28);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_plainTextFromMessageContent_mess_026abd48,lVar2,0x31);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = local_38;
      local_38 = pcVar1;
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      (*(code *)PTR__objc_release_02578630)(lVar2);
    }
    if (local_38 == (cfstringStruct *)0x0) {
      local_98 = &cf___;
    }
    else {
      local_98 = local_38;
    }
    FUN_00f19188(local_18,local_98);
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

