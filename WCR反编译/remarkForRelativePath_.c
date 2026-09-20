// remarkForRelativePath: @ 01081e6c

/* Function Stack Size: 0x18 bytes */

ID WCRefineLocalEmoticonStore::remarkForRelativePath_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  ID local_58;
  ID local_40;
  undefined4 local_34;
  long local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_18 = 0;
    local_34 = 1;
    goto LAB_01081fd4;
  }
  IVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_remarksMutable_026ae280);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar3;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_40;
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
  if ((IVar2 & 1) == 0) {
LAB_01081f94:
    local_58 = 0;
  }
  else {
    IVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if (IVar2 == 0) goto LAB_01081f94;
    local_58 = local_40;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_58;
  local_34 = 1;
  _objc_storeStrong(&local_40,0);
LAB_01081fd4:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

