// setNavigationHomeOnlineSeparatorOnlineText: @ 0206f2f4

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setNavigationHomeOnlineSeparatorOnlineText_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  cfstringStruct *local_38;
  ID local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = &cf_tqqSeparatorOnlineText;
  local_30 = IVar1;
  FUN_0206e96c();
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar2;
  if (local_28 != 0) {
    lVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    if (lVar3 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_setObject_forKey__026ca9e8,local_28,local_38);
      goto LAB_0206f3e8;
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setObject_forKey__026ca9e8,&cf__W_,local_38);
LAB_0206f3e8:
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

