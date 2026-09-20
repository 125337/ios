// deleteProfileId: @ 01616818

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x18 bytes */

bool WCRSuperFloatProfileStore::deleteProfileId_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long local_50;
  long local_48;
  ID local_38 [2];
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_38[1] = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(local_38 + 1,param_3);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_normalizedProfiles_026b1878);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_38[0] = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_38[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_count_0269cfe0);
  if (IVar1 < 2) {
    local_11 = 0;
  }
  else {
    local_48 = 0x7fffffffffffffff;
    local_50 = 0;
    while( true ) {
      IVar1 = local_38[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_count_0269cfe0);
      if ((long)IVar1 <= local_50) break;
      IVar1 = local_38[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38[0],PTR_s_objectAtIndexedSubscript__0269cc78,local_50);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_release_02578630)(IVar1);
      if ((IVar3 & 1) != 0) {
        local_48 = local_50;
        break;
      }
      local_50 = local_50 + 1;
    }
    if (local_48 == 0x7fffffffffffffff) {
      local_11 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38[0],PTR_s_removeObjectAtIndex__0269d530,local_48);
      puVar4 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      if (((ulong)puVar6 & 1) != 0) {
        IVar1 = local_38[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        IVar2 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_release_02578630)(IVar2);
        (*(code *)PTR__objc_release_02578630)(IVar1);
      }
      local_11 = 1;
    }
  }
  _objc_storeStrong(local_38);
  _objc_storeStrong(local_38 + 1,0);
  return local_11 & 1;
}

