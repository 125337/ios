// themeBoxAirDropSendCodeFormatForStockRepository: @ 021198e4

/* Function Stack Size: 0x18 bytes */

ID WCRefineConfig::themeBoxAirDropSendCodeFormatForStockRepository_
             (ID param_1,SEL param_2,long_long param_3)

{
  ID IVar1;
  long_long lVar2;
  undefined *puVar3;
  ID IVar4;
  ID local_48;
  long_long local_40;
  ID local_38;
  ID local_30;
  long_long local_28;
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
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_wcr_mutableSendCodeFormatMapFrom_026ca3a8,param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_28;
  local_38 = IVar1;
  FUN_0211986c();
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_38;
  local_40 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,lVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_48 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((IVar1 & 1) != 0) {
    IVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if (IVar1 != 0) goto LAB_02119ad4;
    IVar1 = 0;
  }
  FUN_02119b34();
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_48;
  local_48 = IVar1;
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,local_48,local_40);
  IVar1 = local_30;
  IVar4 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_copy_0269d150);
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_setObject_forKey__026ca9e8,IVar4,&cf_themeBoxAirDropSendCodeFormatsByRepo);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
LAB_02119ad4:
  IVar1 = local_48;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return IVar1;
}

