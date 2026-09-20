// FUN_01fc931c @ 01fc931c

void FUN_01fc931c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong local_148;
  ulong local_140;
  undefined *local_118;
  undefined *local_110;
  undefined *local_108;
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  undefined8 local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_1;
  local_b0 = param_1;
  _memset(auStack_100,0,0x40);
  uVar1 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_140 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
  if (local_140 != 0) {
    lVar4 = *local_f0;
    local_148 = 0;
    do {
      do {
        if (*local_f0 - lVar4 != 0) {
          _objc_enumerationMutation(*local_f0 - lVar4,uVar1);
        }
        local_c0 = *(undefined8 *)(local_f8 + local_148 * 8);
        puVar2 = PTR__OBJC_CLASS___NSURL_026ce328;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,local_c0);
        _objc_retainAutoreleasedReturnValue();
        local_108 = puVar2;
        if (puVar2 != (undefined *)0x0) {
          puVar3 = PTR__OBJC_CLASS___NSMutableURLRequest_026ce480;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableURLRequest_026ce480,PTR_s_requestWithURL__026a16e0,
                     puVar2);
          _objc_retainAutoreleasedReturnValue();
          local_110 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setCachePolicy__026ca250,2);
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x4024000000000000,local_110,PTR_s_setTimeoutInterval__0269cae8);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_110,PTR_s_setValue_forHTTPHeaderField__026a16e8,
                     &
                     cf_Mozilla_5_0_iPhone_CPUiPhoneOS15_0likeMacOSX_AppleWebKit_605_1_15_KHTML_likeGecko_Version_15_0Mobile_15E148Safari_604_1
                     ,&cf_User_Agent);
          puVar2 = PTR__OBJC_CLASS___NSURLSession_026ce498;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSURLSession_026ce498,PTR_s_sharedSession_026a64c0);
          _objc_retainAutoreleasedReturnValue();
          local_118 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_dataTaskWithRequest_completionHa_026a5f60,local_110,
                     &PTR___NSConcreteGlobalBlock_0258d270);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar2);
          _objc_storeStrong(&local_118);
          _objc_storeStrong(&local_110,0);
        }
        _objc_storeStrong(&local_108,0);
        local_148 = local_148 + 1;
      } while (local_148 < local_140);
      local_140 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
      local_148 = 0;
    } while (local_140 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

