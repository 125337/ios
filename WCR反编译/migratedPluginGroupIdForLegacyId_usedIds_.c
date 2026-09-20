// migratedPluginGroupIdForLegacyId:usedIds: @ 01ad3380

/* Function Stack Size: 0x20 bytes */

ID WCRefineGroupManager::migratedPluginGroupIdForLegacyId_usedIds_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  ID local_38;
  ulong local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_safeGroupIdComponentFromLegacyId_026be1a0,local_28);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = &cf_WCRefine_group_;
  local_38 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (&cf_WCRefine_group_,PTR_s_stringByAppendingString__0269d398,IVar1);
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = pcVar2;
  while( true ) {
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsObject__0269cbb8,local_48);
    pcVar2 = local_48;
    if ((uVar3 & 1) == 0) break;
    pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_____lu);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_48;
    local_48 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)pcVar2;
}

