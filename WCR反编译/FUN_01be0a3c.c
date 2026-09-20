// FUN_01be0a3c @ 01be0a3c

void FUN_01be0a3c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_c0;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined1 auStack_70 [8];
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  long local_30;
  long local_28;
  
  puVar2 = PTR_WCRefineMomentsMonitor_026ce718;
  local_30 = param_1;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineMomentsMonitor_026ce718,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    local_c0 = *(undefined **)PTR____NSDictionary0___02578288;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_c0;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_allKeys_0269ef58);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_38;
  local_68 = PTR___NSConcreteGlobalBlock_02578658;
  local_60 = 0xd0800000;
  local_5c = 0;
  local_58 = FUN_01be0d00;
  local_50 = &DAT_02586118;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = puVar2;
  puVar2 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_sortedArrayUsingComparator__0269fae8,&local_68)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_a0 = PTR___NSConcreteStackBlock_02578660;
  local_98 = 0xc2000000;
  local_94 = 0;
  local_90 = FUN_01be0e94;
  local_88 = &DAT_0257c978;
  _objc_copyWeak(auStack_70,param_1 + 0x20);
  puVar1 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  puVar3 = local_40;
  local_80 = puVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = puVar3;
  _dispatch_async(puVar2,&local_a0);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_80,0);
  _objc_destroyWeak(auStack_70);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  return;
}

