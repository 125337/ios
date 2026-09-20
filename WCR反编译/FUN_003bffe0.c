// FUN_003bffe0 @ 003bffe0

void FUN_003bffe0(undefined8 param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long local_b8;
  long local_b0;
  long local_90;
  bool local_81;
  long local_80;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  undefined4 local_2c;
  undefined *local_28;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_homeSessionGroupingEnabled_026a2888);
  if (((((ulong)puVar3 & 1) != 0) || (local_18 == 0)) || (local_20 == 0)) {
    local_2c = 1;
    goto LAB_003c04fc;
  }
  lVar4 = local_18;
  FUN_003c0b48(local_18,&cf_normalSessions);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = local_18;
  local_38 = lVar4;
  FUN_003c0b48(local_18,&cf_allTopSessions);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = local_18;
  local_40 = lVar5;
  FUN_003c0b48(local_18,&cf_topSessions);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = local_38;
  local_48 = lVar4;
  FUN_003c0d90(local_38,local_20);
  lVar4 = local_40;
  local_50 = lVar5;
  FUN_003c0d90(local_40,local_20);
  lVar5 = local_48;
  local_58 = lVar4;
  FUN_003c0d90(local_48,local_20);
  local_60 = lVar5;
  if (((local_50 == 0x7fffffffffffffff) && (local_58 == 0x7fffffffffffffff)) &&
     (lVar5 == 0x7fffffffffffffff)) {
    local_2c = 1;
  }
  else {
    bVar1 = false;
    local_81 = false;
    bVar2 = false;
    if (local_50 == 0x7fffffffffffffff) {
      bVar2 = local_58 == 0x7fffffffffffffff;
      if (bVar2) {
        local_b8 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_objectAtIndexedSubscript__0269cc78,lVar5);
        _objc_retainAutoreleasedReturnValue();
        local_90 = local_b8;
      }
      else {
        local_b8 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectAtIndexedSubscript__0269cc78,local_58);
        _objc_retainAutoreleasedReturnValue();
        local_80 = local_b8;
      }
      local_81 = !bVar2;
      local_b0 = local_b8;
    }
    else {
      local_b0 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_50);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_70 = local_b0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_b0;
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_90);
    }
    if (local_81) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    if (local_68 == 0) {
      local_2c = 1;
    }
    else {
      if (local_58 != 0x7fffffffffffffff) {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_removeObjectAtIndex__0269d530,local_58)
        ;
      }
      lVar4 = local_48;
      FUN_003c0d90(local_48,local_20);
      local_60 = lVar4;
      if (lVar4 != 0x7fffffffffffffff) {
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_removeObjectAtIndex__0269d530,lVar4);
      }
      lVar4 = local_18;
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      lVar5 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithLongLong__0269d808,lVar5);
      _objc_retainAutoreleasedReturnValue();
      FUN_00367110(lVar4,&cf_totalTopSessionCount);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      lVar4 = local_38;
      FUN_003c0d90(local_38,local_20);
      local_50 = lVar4;
      if (lVar4 != 0x7fffffffffffffff) {
        if (lVar4 == 0) {
          local_2c = 1;
          goto LAB_003c04c0;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_removeObjectAtIndex__0269d530,lVar4);
      }
      lVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
      if (lVar4 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addObject__0269d180,local_68);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_insertObject_atIndex__0269eac0,local_68,0);
      }
      local_2c = 0;
    }
LAB_003c04c0:
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
LAB_003c04fc:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

