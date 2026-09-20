// FUN_01baca54 @ 01baca54

ulong FUN_01baca54(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  ulong local_40;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_addedAt);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_longLongValue_0269d5e0);
  if ((uVar1 & 1) != 0) {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_longLongValue_0269d5e0);
    if (0 < (long)uVar1) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_longLongValue_0269d5e0);
      local_2c = 1;
      local_18 = uVar1;
      goto LAB_01bacc58;
    }
  }
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_38 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar1 & 1) == 0) {
LAB_01bacc38:
    local_18 = 0;
    local_2c = 1;
  }
  else {
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasPrefix__0269d320,&cf_WCRefine_Msg_);
    local_18 = local_38;
    if ((uVar1 & 1) == 0) goto LAB_01bacc38;
    pcVar3 = &cf_WCRefine_Msg_;
    (*(code *)PTR__objc_msgSend_02578628)(&cf_WCRefine_Msg_,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_substringFromIndex__0269d120,pcVar3);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_longLongValue_0269d5e0);
    local_2c = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_38,0);
LAB_01bacc58:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

