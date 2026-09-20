// smallSignalNotifyText @ 02181a54

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::smallSignalNotifyText(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_objectForKey__0269e048,&cf_WCRefineSmallSignalNotifyText);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_38 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((param_1 & 1) != 0) {
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    pcVar1 = local_38;
    if (pcVar3 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
      goto LAB_02181b90;
    }
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = &cf_ck_W_b_O;
LAB_02181b90:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

