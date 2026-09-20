// setAutoParseLinkGroupOutgoingAutoIDs: @ 02155890

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setAutoParseLinkGroupOutgoingAutoIDs_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_50;
  ulong local_38;
  ID local_30;
  ulong local_28;
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
  uVar3 = local_28;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_50 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    local_50 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_setObject_forKey__026ca9e8,local_50,
             &cf_autoParseLinkGroupOutgoingAutoIDs);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

