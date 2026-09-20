// FUN_000343ec @ 000343ec

void FUN_000343ec(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined *local_1f0;
  undefined *local_1e8;
  ulong local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  ulong local_108;
  undefined *local_100;
  double local_f8;
  undefined4 local_ec;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  undefined8 local_c8 [3];
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_2);
  puVar2 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  puVar3 = PTR___dispatch_main_q_02578680;
  if (((ulong)puVar2 & 1) == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_b0;
    local_e8 = PTR___NSConcreteStackBlock_02578660;
    local_e0 = 0xc2000000;
    local_dc = 0;
    local_d8 = FUN_00034e78;
    local_d0 = &DAT_02578c20;
    (*(code *)PTR__objc_retain_02578638)();
    local_c8[0] = uVar1;
    _dispatch_async(puVar3,&local_e8);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_ec = 1;
    _objc_storeStrong(local_c8,0);
  }
  else {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (((ulong)puVar2 & 1) == 0) {
      local_ec = 1;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)();
      local_f8 = param_1;
      if ((DAT_028c7ae8 <= 0.0) || (1.5 <= param_1 - DAT_028c7ae8)) {
        DAT_028c7ae8 = param_1;
        FUN_00034ea8();
        _objc_retainAutoreleasedReturnValue();
        local_100 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_count_0269cfe0);
        if (puVar3 == (undefined *)0x0) {
          local_ec = 1;
        }
        else {
          _memset(auStack_148,0,0x40);
          puVar3 = local_100;
          (*(code *)PTR__objc_retain_02578638)();
          local_1e8 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,
                     0x10);
          if (local_1e8 != (undefined *)0x0) {
            lVar5 = *local_138;
            local_1f0 = (undefined *)0x0;
            do {
              do {
                if (*local_138 - lVar5 != 0) {
                  _objc_enumerationMutation(*local_138 - lVar5,puVar3);
                }
                uVar6 = *(ulong *)(local_140 + (long)local_1f0 * 8);
                local_108 = uVar6;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar6,PTR_s_objectForKeyedSubscript__0269d098,&cf_key);
                _objc_retainAutoreleasedReturnValue();
                uVar4 = uVar6;
                FUN_0003102c();
                _objc_retainAutoreleasedReturnValue();
                local_150 = uVar4;
                (*(code *)PTR__objc_release_02578630)();
                FUN_00035298();
                _objc_retainAutoreleasedReturnValue();
                uVar4 = uVar6;
                FUN_00035114();
                (*(code *)PTR__objc_release_02578630)(uVar6);
                if ((uVar4 & 1) == 0) {
                  uVar4 = local_150;
                  FUN_0003530c();
                  if (0.0 <= param_1) {
                    if (8.0 <= param_1) {
                      FUN_00035724();
                      _objc_retainAutoreleasedReturnValue();
                      FUN_000355cc();
                      (*(code *)PTR__objc_release_02578630)(uVar4);
                      FUN_00035798();
                      FUN_00035870(local_108,0);
                      local_ec = 0;
                    }
                    else {
                      local_ec = 5;
                    }
                  }
                  else {
                    local_ec = 5;
                  }
                }
                else {
                  local_ec = 5;
                }
                _objc_storeStrong(&local_150,0);
                local_1f0 = local_1f0 + 1;
              } while (local_1f0 < local_1e8);
              local_1e8 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,
                         auStack_a8,0x10);
              local_1f0 = (undefined *)0x0;
            } while (local_1e8 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar3);
          local_ec = 0;
        }
        _objc_storeStrong(&local_100,0);
      }
      else {
        local_ec = 1;
      }
    }
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

