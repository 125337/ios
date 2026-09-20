// FUN_0054d83c @ 0054d83c

void FUN_0054d83c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *local_128;
  ulong local_d0;
  undefined *local_c8;
  ulong local_c0;
  u_int32_t local_b8;
  u_int32_t local_b4;
  long local_b0;
  undefined *local_a8;
  ulong local_a0;
  byte local_91;
  undefined *local_90;
  byte local_81;
  undefined *local_80;
  byte local_71;
  undefined *local_70;
  undefined *local_68;
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
        local_71 = 0;
        local_81 = 0;
        local_91 = 0;
        local_128 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_momentsFakeUseCustomComments_026a4f00);
        if (((ulong)local_128 & 1) == 0) {
          FUN_00550448();
          _objc_retainAutoreleasedReturnValue();
          local_91 = 1;
          local_90 = local_128;
        }
        else {
          local_128 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_momentsFakeCustomComments_026a4f08);
          _objc_retainAutoreleasedReturnValue();
          local_71 = 1;
          local_70 = local_128;
          FUN_0054fe38();
          _objc_retainAutoreleasedReturnValue();
          local_81 = 1;
          local_80 = local_128;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_68 = local_128;
        if ((local_91 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_90);
        }
        if ((local_81 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_80);
        }
        if ((local_71 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_70);
        }
        puVar1 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_count_0269cfe0);
        if (puVar1 == (undefined *)0x0) {
          puVar1 = *(undefined **)PTR____NSArray0___02578280;
          (*(code *)PTR__objc_retain_02578638)();
          local_3c = 1;
          local_28 = puVar1;
        }
        else {
          uVar2 = local_60[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_mutableCopy_0269d8a0);
          puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          local_a0 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          local_a8 = puVar1;
          for (local_b0 = 0; local_b0 < local_30; local_b0 = local_b0 + 1) {
            uVar2 = local_a0;
            (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_count_0269cfe0);
            if (uVar2 == 0) {
              uVar3 = local_60[0];
              (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_mutableCopy_0269d8a0);
              uVar2 = local_a0;
              local_a0 = uVar3;
              (*(code *)PTR__objc_release_02578630)(uVar2);
              uVar2 = local_a0;
              (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_count_0269cfe0);
              if (uVar2 == 0) break;
            }
            uVar2 = local_a0;
            (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_count_0269cfe0);
            local_b4 = _arc4random_uniform((u_int32_t)uVar2);
            puVar1 = local_68;
            (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_count_0269cfe0);
            local_b8 = _arc4random_uniform((u_int32_t)puVar1);
            uVar2 = local_a0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_a0,PTR_s_objectAtIndexedSubscript__0269cc78,local_b4);
            _objc_retainAutoreleasedReturnValue();
            puVar1 = local_68;
            local_c0 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_68,PTR_s_objectAtIndexedSubscript__0269cc78,local_b8);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = local_c0;
            local_c8 = puVar1;
            FUN_00550558(local_c0,puVar1,local_b0,local_38);
            _objc_retainAutoreleasedReturnValue();
            local_d0 = uVar2;
            if (uVar2 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_addObject__0269d180,uVar2);
            }
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_a0,PTR_s_removeObjectAtIndex__0269d530,local_b4);
            _objc_storeStrong(&local_d0);
            _objc_storeStrong(&local_c8,0);
            _objc_storeStrong(&local_c0,0);
          }
          puVar1 = local_a8;
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = puVar1;
          local_3c = 1;
          _objc_storeStrong(&local_a8);
          _objc_storeStrong(&local_a0,0);
        }
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

