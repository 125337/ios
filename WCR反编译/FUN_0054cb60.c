// FUN_0054cb60 @ 0054cb60

void FUN_0054cb60(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_90;
  ulong local_88;
  u_int32_t local_7c;
  long local_78;
  undefined *local_70;
  ulong local_68;
  ulong local_60 [3];
  undefined *local_48;
  undefined4 local_3c;
  long local_38;
  long local_30;
  undefined *local_28;
  
  local_30 = param_1;
  if (param_1 < 1) {
    puVar1 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar1;
  }
  else {
    FUN_0054c4ec(param_1);
    _objc_retainAutoreleasedReturnValue();
    local_38 = param_1;
    if (param_1 == 0) {
      puVar1 = *(undefined **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_3c = 1;
      local_28 = puVar1;
    }
    else {
      puVar1 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_48 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_momentsFakeIncludeNonFriends_026a4ed0);
      uVar2 = (ulong)puVar1 & 0xffffffff;
      FUN_0054e77c();
      _objc_retainAutoreleasedReturnValue();
      local_60[0] = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_count_0269cfe0);
      if (uVar2 == 0) {
        puVar1 = *(undefined **)PTR____NSArray0___02578280;
        (*(code *)PTR__objc_retain_02578638)();
        local_3c = 1;
        local_28 = puVar1;
      }
      else {
        uVar2 = local_60[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_mutableCopy_0269d8a0);
        puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        local_68 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_70 = puVar1;
        for (local_78 = 0; local_78 < local_30; local_78 = local_78 + 1) {
          uVar2 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_count_0269cfe0);
          if (uVar2 == 0) {
            uVar3 = local_60[0];
            (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_mutableCopy_0269d8a0);
            uVar2 = local_68;
            local_68 = uVar3;
            (*(code *)PTR__objc_release_02578630)(uVar2);
            uVar2 = local_68;
            (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_count_0269cfe0);
            if (uVar2 == 0) break;
          }
          uVar2 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_count_0269cfe0);
          local_7c = _arc4random_uniform((u_int32_t)uVar2);
          uVar2 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_objectAtIndexedSubscript__0269cc78,local_7c);
          _objc_retainAutoreleasedReturnValue();
          local_88 = uVar2;
          FUN_0054c0ac(uVar2,local_38);
          _objc_retainAutoreleasedReturnValue();
          local_90 = uVar2;
          if (uVar2 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_addObject__0269d180,uVar2);
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_removeObjectAtIndex__0269d530,local_7c);
          _objc_storeStrong(&local_90);
          _objc_storeStrong(&local_88,0);
        }
        puVar1 = local_70;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = puVar1;
        local_3c = 1;
        _objc_storeStrong(&local_70);
        _objc_storeStrong(&local_68,0);
      }
      _objc_storeStrong(local_60);
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_autoreleaseReturnValue(local_28);
  return;
}

