// FUN_0018c7f8 @ 0018c7f8

void FUN_0018c7f8(undefined8 param_1,long param_2,long param_3)

{
  bool bVar1;
  uint uVar2;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long local_68;
  undefined *local_58;
  ulong local_50;
  undefined *local_48;
  undefined4 local_40;
  long local_30;
  long local_28;
  ulong local_20;
  undefined *local_18;
  ulong *puVar3;
  
  puVar3 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar3,param_1);
  uVar2 = (uint)puVar3;
  local_30 = param_3;
  local_28 = param_2;
  if ((((local_20 == 0) || (param_2 < 0)) || (param_3 < 1)) ||
     (FUN_0018b0b8(param_3), (uVar2 & 1) == 0)) {
    local_18 = (undefined *)0x0;
    local_40 = 1;
  }
  else {
    puVar5 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_20;
    local_48 = puVar5;
    FUN_0018d1cc(local_20,local_28);
    local_50 = uVar4;
    if ((long)uVar4 < 0) {
      local_18 = (undefined *)0x0;
      local_40 = 1;
    }
    else {
      FUN_0018d2ec(uVar4,local_48);
      if ((uVar4 & 1) == 0) {
        if (local_50 == 1) {
          puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = false;
          local_58 = puVar5;
          for (local_68 = 0; puVar5 = local_58, local_68 < local_30; local_68 = local_68 + 1) {
            uVar4 = local_20;
            FUN_0018d46c(local_68 - local_30,local_20,local_68);
            FUN_0018d5a4(uVar4,local_48);
            puVar5 = local_58;
            if ((uVar4 & 1) == 0) {
              puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,
                         local_68);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180);
              (*(code *)PTR__objc_release_02578630)(puVar6);
            }
            else {
              bVar1 = true;
            }
          }
          if (bVar1) {
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = puVar5;
          }
          else {
            local_18 = (undefined *)0x0;
          }
          local_40 = 1;
          _objc_storeStrong(&local_58,0);
        }
        else {
          local_18 = (undefined *)0x0;
          local_40 = 1;
        }
      }
      else {
        puVar5 = *(undefined **)PTR____NSArray0___02578280;
        (*(code *)PTR__objc_retain_02578638)();
        local_40 = 1;
        local_18 = puVar5;
      }
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

