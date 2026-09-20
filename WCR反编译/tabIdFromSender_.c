// tabIdFromSender: @ 01e46ed4

/* Function Stack Size: 0x18 bytes */

ID WCRefineTelegramGroupingTabsViewController::tabIdFromSender_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *local_40;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = local_28;
  _objc_getAssociatedObject(local_28,DAT_028c69f0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_30 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar1 & 1) == 0) {
    local_40 = &::cf___;
  }
  else {
    local_40 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_40;
}

