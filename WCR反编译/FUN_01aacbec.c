// FUN_01aacbec @ 01aacbec

void FUN_01aacbec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong local_180;
  ulong local_178;
  ulong local_160;
  undefined *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  code *local_138;
  undefined *local_130;
  undefined *local_128;
  undefined1 auStack_120 [8];
  ulong local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  undefined *local_c8;
  long local_c0;
  ulong local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  local_b0 = param_1;
  _objc_storeStrong(&local_b8);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_c0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar2;
  _memset(auStack_110,0,0x40);
  if (local_b8 == 0) {
    local_160 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    local_160 = local_b8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_178 = local_160;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_160,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
  if (local_178 != 0) {
    lVar3 = *local_100;
    local_180 = 0;
    do {
      do {
        if (*local_100 - lVar3 != 0) {
          _objc_enumerationMutation(*local_100 - lVar3,local_160);
        }
        uVar4 = *(ulong *)(local_108 + local_180 * 8);
        local_d0 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_lowercaseString_0269d9c0);
        _objc_retainAutoreleasedReturnValue();
        local_118 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_hasSuffix__0269d018,&cf__chatroom);
        if (((uVar4 & 1) != 0) ||
           (uVar4 = local_118,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_118,PTR_s_hasSuffix__0269d018,&cf__im_chatroom), (uVar4 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,local_d0);
        }
        _objc_storeStrong(&local_118,0);
        local_180 = local_180 + 1;
      } while (local_180 < local_178);
      local_178 = local_160;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_160,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,
                 0x10);
      local_180 = 0;
    } while (local_178 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(local_160);
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_148 = PTR___NSConcreteStackBlock_02578660;
  local_140 = 0xc2000000;
  local_13c = 0;
  local_138 = FUN_01aacf64;
  local_130 = &DAT_02579c60;
  _objc_copyWeak(auStack_120,param_1 + 0x20);
  puVar1 = local_c8;
  (*(code *)PTR__objc_retain_02578638)();
  local_128 = puVar1;
  _dispatch_async(puVar2,&local_148);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_128);
  _objc_destroyWeak(auStack_120);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

