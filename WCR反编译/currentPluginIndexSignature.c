// currentPluginIndexSignature @ 014c45b0

/* Function Stack Size: 0x10 bytes */

ID WCRefineSearchManager::currentPluginIndexSignature(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  undefined *puVar5;
  cfstringStruct *local_80;
  cfstringStruct *local_58;
  ID local_40;
  ID local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_58 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_58 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_58;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSBundle_026ce418;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSBundle_026ce418,PTR_s_mainBundle_026a0c28);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_80 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_80 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_80;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  IVar4 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_getSortedPluginVCList_026af578);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_componentsJoinedByString__0269d140,&cf__);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_40 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_________);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar5;
}

