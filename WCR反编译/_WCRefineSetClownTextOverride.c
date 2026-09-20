// _WCRefineSetClownTextOverride @ 00f1857c

void _WCRefineSetClownTextOverride(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  cfstringStruct *local_90;
  undefined *local_48;
  undefined *local_40;
  long local_38;
  undefined4 local_30;
  byte local_29;
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
  pcVar2 = local_18;
  local_28 = pcVar1;
  _WCRefineClownMessageCanEditText();
  local_29 = (byte)pcVar2;
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if ((pcVar1 == (cfstringStruct *)0x0) || ((local_29 & 1) == 0)) {
    local_30 = 1;
  }
  else {
    FUN_00f16cb4();
    uVar4 = local_20;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((uVar4 & 1) == 0) ||
       (uVar4 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
       uVar4 == 0)) {
      lVar5 = DAT_028e2b68;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028e2b68,PTR_s_objectForKeyedSubscript__0269d098,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_38 = lVar5;
      if (lVar5 != 0) {
        FUN_00f18a28(local_18,PTR_s_setM_nsContent__0269ef88,lVar5);
        pcVar1 = local_18;
        FUN_00f17624();
        if ((int)pcVar1 == 0x31) {
          puVar3 = PTR_WCRefineHelper_026ce000;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_plainTextFromMessageContent_mess_026abd48,
                     local_38,0x31);
          _objc_retainAutoreleasedReturnValue();
          local_40 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
          if (puVar3 != (undefined *)0x0) {
            FUN_00f18ae0(puVar3,local_18,local_40);
          }
          _objc_storeStrong(&local_40,0);
        }
        FUN_00f18c04(local_18);
        pcVar1 = local_18;
        FUN_00f17624();
        if ((int)pcVar1 == 0x31) {
          puVar3 = PTR_WCRefineHelper_026ce000;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_plainTextFromMessageContent_mess_026abd48,
                     local_38,0x31);
          _objc_retainAutoreleasedReturnValue();
          local_48 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
          if (puVar3 != (undefined *)0x0) {
            FUN_00f18ae0(puVar3,local_18,local_48);
          }
          _objc_storeStrong(&local_48,0);
        }
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028e2b40,PTR_s_removeObjectForKey__0269d700,local_28);
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028e2b48,PTR_s_removeObjectForKey__0269d700,local_28);
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028e2b68,PTR_s_removeObjectForKey__0269d700,local_28);
      lVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
      pcVar1 = local_18;
      if (lVar5 != 0) {
        puVar3 = PTR_WCRefineHelper_026ce000;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_referQuotedDisplayTextFromMessag_026abd50,
                   local_38);
        _objc_retainAutoreleasedReturnValue();
        FUN_00f18ce8(pcVar1);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      local_30 = 1;
      _objc_storeStrong(&local_38,0);
    }
    else {
      lVar5 = DAT_028e2b68;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028e2b68,PTR_s_objectForKeyedSubscript__0269d098,local_28);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (lVar5 == 0) {
        pcVar1 = local_18;
        FUN_00f16348(local_18,PTR_s_m_nsContent_0269d0a0);
        _objc_retainAutoreleasedReturnValue();
        local_90 = pcVar1;
        if (pcVar1 == (cfstringStruct *)0x0) {
          local_90 = &cf___;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_028e2b68,PTR_s_setObject_forKeyedSubscript__0269d248,local_90,local_28);
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      uVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_copy_0269d150);
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028e2b40,PTR_s_setObject_forKeyedSubscript__0269d248,uVar4,local_28);
      (*(code *)PTR__objc_release_02578630)(uVar4);
      FUN_00f19188(local_18,local_20);
      local_30 = 0;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

