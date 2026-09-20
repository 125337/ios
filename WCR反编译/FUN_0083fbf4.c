// FUN_0083fbf4 @ 0083fbf4

void FUN_0083fbf4(ulong param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  dispatch_queue_t pdVar5;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  undefined *local_80;
  uint local_74;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48 [3];
  undefined *local_30;
  undefined *local_28;
  
  FUN_00821dcc();
  if ((param_1 & 1) != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_28 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_28;
    uVar1 = DAT_028ccfd0;
    local_70 = PTR___NSConcreteGlobalBlock_02578658;
    local_68 = 0xd0800000;
    local_64 = 0;
    local_60 = FUN_008401c0;
    local_58 = &DAT_0257e9f8;
    local_30 = puVar3;
    (*(code *)PTR__objc_retain_02578638)();
    puVar2 = local_30;
    local_50 = puVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_48[0] = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_70);
    puVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    if (puVar4 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_stringWithFormat__0269cca8,
                 &cf_count__lucacheLimitKB__dqos_user_initiated);
      _objc_retainAutoreleasedReturnValue();
      FUN_00840570(&cf_prefetch_begin);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      pdVar5 = _dispatch_get_global_queue(0x19,0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_30;
      local_a0 = PTR___NSConcreteStackBlock_02578660;
      local_98 = 0xc2000000;
      local_94 = 0;
      local_90 = FUN_008406d4;
      local_88 = &DAT_02578c20;
      (*(code *)PTR__objc_retain_02578638)();
      local_80 = puVar2;
      _dispatch_async(pdVar5,&local_a0);
      (*(code *)PTR__objc_release_02578630)(pdVar5);
      _objc_storeStrong(&local_80,0);
    }
    else {
      FUN_00840570(&cf_prefetch_skip,&cf_reason_no_still);
    }
    local_74 = (uint)(puVar4 == (undefined *)0x0);
    _objc_storeStrong(local_48);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_30,0);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

