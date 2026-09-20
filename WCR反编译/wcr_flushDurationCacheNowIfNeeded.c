// wcr_flushDurationCacheNowIfNeeded @ 015af044

/* Function Stack Size: 0x10 bytes */

void WCRefineVoicePackStore::wcr_flushDurationCacheNowIfNeeded(ID param_1,SEL param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  ulong local_60;
  ID local_58;
  uint local_4c;
  ulong local_48;
  ulong local_40 [3];
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  uVar1 = DAT_028e3ae8;
  if ((DAT_028e3b0a & 1) != 0) {
    DAT_028e3b0a = 0;
    local_28 = 0;
    local_20 = param_2;
    local_18 = param_1;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(uVar1);
    uVar3 = DAT_028e3ae8;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3ae8,PTR_s_count_0269cfe0);
    if (2000 < uVar3) {
      uVar3 = DAT_028e3ae8;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3ae8,PTR_s_allKeys_0269ef58);
      _objc_retainAutoreleasedReturnValue();
      local_48 = 0;
      local_40[0] = uVar3;
      while( true ) {
        uVar5 = local_48;
        uVar4 = local_40[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_count_0269cfe0);
        uVar3 = DAT_028e3ae8;
        if (uVar4 / 2 <= uVar5) break;
        uVar5 = local_40[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40[0],PTR_s_objectAtIndexedSubscript__0269cc78,local_48);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_removeObjectForKey__0269d700);
        (*(code *)PTR__objc_release_02578630)(uVar5);
        local_48 = local_48 + 1;
      }
      _objc_storeStrong(uVar5 - uVar4 / 2,local_40,0);
    }
    uVar5 = DAT_028e3ae8;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3ae8,PTR_s_copy_0269d150);
    uVar3 = local_28;
    local_28 = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    _objc_sync_exit(uVar1);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
    uVar1 = local_28;
    uVar2 = DAT_028e3af0;
    if (uVar3 != 0) {
      local_80 = PTR___NSConcreteStackBlock_02578660;
      local_78 = 0xc2000000;
      local_74 = 0;
      local_70 = FUN_015af330;
      local_68 = &DAT_0257cc98;
      local_58 = local_18;
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = uVar1;
      _dispatch_async(uVar2,&local_80);
      _objc_storeStrong(&local_60,0);
    }
    local_4c = (uint)(uVar3 == 0);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

