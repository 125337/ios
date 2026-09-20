// setRemark:forRelativePath: @ 01081ff0

/* Function Stack Size: 0x20 bytes */

bool WCRefineLocalEmoticonStore::setRemark_forRelativePath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ID IVar4;
  ID local_58;
  ID local_50;
  long local_48;
  undefined4 local_3c;
  long local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  lVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  lVar3 = local_30;
  if (lVar1 == 0) {
    local_11 = 0;
    local_3c = 1;
    goto LAB_01082248;
  }
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_48 = lVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  IVar4 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_remarksMutable_026ae280);
  _objc_retainAutoreleasedReturnValue();
  local_50 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_objectForKeyedSubscript__0269d098,local_38);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = local_48;
  local_58 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if (lVar3 == 0) {
    if (local_58 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_removeObjectForKey__0269d700,local_38);
LAB_010821e8:
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_saveIndex_026ae268);
      FUN_0107ad08();
    }
  }
  else {
    IVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isEqualToString__0269ccc8,local_48);
    if ((IVar4 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_setObject_forKeyedSubscript__0269d248,local_48,local_38);
      goto LAB_010821e8;
    }
  }
  local_11 = 1;
  local_3c = 1;
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
LAB_01082248:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

