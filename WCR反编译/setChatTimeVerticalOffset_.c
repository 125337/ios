// setChatTimeVerticalOffset: @ 0207a23c

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setChatTimeVerticalOffset_(ID param_1,SEL param_2,double param_3)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_38;
  ID local_30;
  double local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_18;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_chatTimePlacement_0269f080);
  pcVar2 = &cf_chatTimeVerticalOffset;
  FUN_0207a12c(&cf_chatTimeVerticalOffset,IVar1);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_30;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_38 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setObject_forKey__026ca9e8,puVar3,local_38);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return;
}

