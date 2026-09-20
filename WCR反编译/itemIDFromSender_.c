// itemIDFromSender: @ 01c9d4b4

/* Function Stack Size: 0x18 bytes */

ID WCRefinePluginIconCustomizationViewController::itemIDFromSender_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_48;
  int local_3c;
  ulong local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar4 = local_30;
  _objc_getAssociatedObject(local_30,&DAT_028e4688);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_38 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar4 & 1) != 0) &&
     (uVar2 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     uVar4 = local_38, uVar2 != 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar4;
    local_3c = 1;
    goto LAB_01c9d7ac;
  }
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_userInfo);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_48 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar4 = uVar2 & 0xffffffff;
  if ((uVar2 & 1) == 0) {
LAB_01c9d744:
    local_3c = 0;
  }
  else {
    uVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_itemID);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_38;
    local_38 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar2 = local_38;
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    uVar4 = uVar2 & 0xffffffff;
    if ((uVar2 & 1) == 0) goto LAB_01c9d744;
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    uVar2 = local_38;
    uVar4 = 0;
    if (uVar3 == 0) goto LAB_01c9d744;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar2;
    uVar4 = 1;
    local_3c = 1;
  }
  _objc_storeStrong(uVar4,&local_48,0);
  if (local_3c == 0) {
    local_18 = 0;
    local_3c = 1;
  }
LAB_01c9d7ac:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

