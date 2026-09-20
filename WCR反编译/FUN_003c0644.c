// FUN_003c0644 @ 003c0644

void FUN_003c0644(undefined8 param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_b8;
  ulong local_b0;
  ulong local_90;
  bool local_81;
  ulong local_80;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  undefined4 local_2c;
  undefined *local_28;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_homeSessionGroupingEnabled_026a2888);
  if (((((ulong)puVar3 & 1) == 0) && (local_18 != 0)) && (local_20 != 0)) {
    uVar4 = local_18;
    FUN_003c0b48(local_18,&cf_normalSessions);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = local_18;
    local_38 = uVar4;
    FUN_003c0b48(local_18,&cf_allTopSessions);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_18;
    local_40 = uVar5;
    FUN_003c0b48(local_18,&cf_topSessions);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = local_38;
    local_48 = uVar4;
    FUN_003c0d90(local_38,local_20);
    uVar4 = local_40;
    local_50 = uVar5;
    FUN_003c0d90(local_40,local_20);
    uVar5 = local_48;
    local_58 = uVar4;
    FUN_003c0d90(local_48,local_20);
    local_60 = uVar5;
    if (((local_50 == 0x7fffffffffffffff) && (local_58 == 0x7fffffffffffffff)) &&
       (uVar5 == 0x7fffffffffffffff)) {
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
                    (local_48,PTR_s_objectAtIndexedSubscript__0269cc78,uVar5);
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
        if (local_50 != 0x7fffffffffffffff) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_removeObjectAtIndex__0269d530,local_50);
        }
        uVar4 = local_40;
        FUN_003c0d90(local_40,local_20);
        local_58 = uVar4;
        if (uVar4 != 0x7fffffffffffffff) {
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_removeObjectAtIndex__0269d530,uVar4);
        }
        uVar4 = local_48;
        FUN_003c0d90(local_48,local_20);
        local_60 = uVar4;
        if (uVar4 != 0x7fffffffffffffff) {
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_removeObjectAtIndex__0269d530,uVar4);
        }
        FUN_003c0f54(local_40,local_68);
        uVar4 = local_18;
        FUN_0037a830(local_18,&cf_isFoldTopSession);
        if ((uVar4 & 1) == 0) {
          FUN_003c0f54(local_48,local_68);
        }
        uVar4 = local_18;
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        uVar5 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithLongLong__0269d808,uVar5);
        _objc_retainAutoreleasedReturnValue();
        FUN_00367110(uVar4,&cf_totalTopSessionCount);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        local_2c = 0;
      }
      _objc_storeStrong(&local_68,0);
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
  }
  else {
    local_2c = 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

