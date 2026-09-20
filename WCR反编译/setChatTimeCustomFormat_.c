// setChatTimeCustomFormat: @ 0207a8c0

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setChatTimeCustomFormat_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_48;
  cfstringStruct *local_38;
  ID local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_30 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_chatTimePlacement_0269f080);
  pcVar3 = &cf_chatTimeCustomFormat;
  FUN_0207a12c(&cf_chatTimeCustomFormat,IVar2);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_30;
  pcVar4 = local_28;
  local_38 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_48 = &cf__O_;
  }
  else {
    local_48 = local_28;
  }
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setObject_forKey__026ca9e8,local_48,local_38);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

