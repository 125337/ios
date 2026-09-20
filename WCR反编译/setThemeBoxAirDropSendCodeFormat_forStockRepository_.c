// setThemeBoxAirDropSendCodeFormat:forStockRepository: @ 02119b40

/* Function Stack Size: 0x20 bytes */

void WCRefineConfig::setThemeBoxAirDropSendCodeFormat_forStockRepository_
               (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  ID IVar3;
  long_long lVar4;
  cfstringStruct *local_68;
  long_long local_50;
  ID local_48;
  ID local_40;
  cfstringStruct *local_38;
  long_long local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (local_28 == (cfstringStruct *)0x0) {
    local_68 = &::cf___;
  }
  else {
    local_68 = local_28;
  }
  local_30 = param_4;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
  if (local_68 == (cfstringStruct *)0x0) {
    FUN_02119b34();
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_38;
    local_38 = local_68;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_18;
  local_40 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_wcr_mutableSendCodeFormatMapFrom_026ca3a8,IVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = local_30;
  local_48 = IVar3;
  FUN_0211986c();
  _objc_retainAutoreleasedReturnValue();
  local_50 = lVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,local_38,lVar4);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_removeObjectForKey__0269d700,&cf_themeBoxAirDropSendCodeFormat);
  IVar2 = local_40;
  IVar3 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_copy_0269d150);
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_setObject_forKey__026ca9e8,IVar3,&cf_themeBoxAirDropSendCodeFormatsByRepo);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

