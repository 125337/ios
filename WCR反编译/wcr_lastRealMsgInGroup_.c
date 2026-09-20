// wcr_lastRealMsgInGroup: @ 009daa2c

/* Function Stack Size: 0x18 bytes */

ID WCRefineAnonymousAtHelper::wcr_lastRealMsgInGroup_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  ID IVar4;
  ID local_78;
  cfstringStruct *local_68;
  ID local_58;
  cfstringStruct *local_50;
  ID local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    local_68 = &::cf___;
  }
  else {
    local_68 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
  if (local_68 == (cfstringStruct *)0x0) {
    local_18 = 0;
    local_3c = 1;
  }
  else {
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcr_messageMgr_026ab070);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = &cf_GetLastMsgFromUsr_;
    local_48 = IVar3;
    _NSSelectorFromString();
    local_50 = pcVar2;
    if ((local_48 == 0) ||
       (IVar3 = local_48,
       (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_respondsToSelector__026ca818,pcVar2),
       (IVar3 & 1) == 0)) {
      local_18 = 0;
      local_3c = 1;
    }
    else {
      IVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,local_50,local_38);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = local_20;
      local_58 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcr_isValidReferMsg__026ab060,IVar3);
      if ((IVar4 & 1) == 0) {
        local_78 = 0;
      }
      else {
        local_78 = local_58;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_78;
      local_3c = 1;
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

