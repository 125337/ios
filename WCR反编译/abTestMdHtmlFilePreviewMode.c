// abTestMdHtmlFilePreviewMode @ 02031554

/* Function Stack Size: 0x10 bytes */

long_long WCRefineConfig::abTestMdHtmlFilePreviewMode(ID param_1,SEL param_2)

{
  SEL SVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  ID local_40;
  SEL local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar1 = local_28;
  local_30 = param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_30;
  local_38 = SVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKey__0269e048,SVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_40 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  IVar4 = local_30;
  if ((IVar2 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_setObject_forKey__026ca9e8,puVar3,local_38);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
    local_18 = 1;
  }
  else {
    FUN_0202f3fc(local_30,local_38,0,0);
    local_18 = IVar4;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_18;
}

