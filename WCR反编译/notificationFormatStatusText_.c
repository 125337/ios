// notificationFormatStatusText: @ 01d25b68

/* Function Stack Size: 0x18 bytes */

ID WCRefineRedEnvelopViewController::notificationFormatStatusText_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  ID local_38;
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_normalizedNotificationFormat__026c4310,local_28);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_30 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_normalizedNotificationFormat__026c4310,&::cf__);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_30;
  local_38 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,IVar2);
  pcVar3 = &::cf__;
  if ((IVar1 & 1) == 0) {
    pcVar3 = &cf___IN;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)pcVar3;
}

