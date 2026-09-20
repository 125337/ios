// prefetchDurationsForPaths:completion: @ 015b0ae8

/* Function Stack Size: 0x20 bytes */

void WCRefineVoicePackStore::prefetchDurationsForPaths_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  undefined8 uVar1;
  long lVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  long local_98;
  ID local_90;
  ID local_88;
  ID local_80;
  undefined *local_78;
  undefined4 local_6c;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  long local_48;
  long local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3,param_3,param_4,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  lVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
  if ((lVar2 == 0) ||
     (IVar3 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isUIAccessActive_026b0c08),
     (IVar3 & 1) == 0)) {
    puVar4 = PTR___dispatch_main_q_02578680;
    if (local_40 != 0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_40;
      local_68 = PTR___NSConcreteStackBlock_02578660;
      local_60 = 0xc2000000;
      local_5c = 0;
      local_58 = FUN_015b0db4;
      local_50 = &DAT_025814c8;
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = lVar2;
      _dispatch_async(puVar4,&local_68);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(&local_48,0);
    }
    local_6c = 1;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSOrderedSet_026ce618;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSOrderedSet_026ce618,PTR_s_orderedSetWithArray__026a4b80,local_38)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_78 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_backgroundWorkGeneration_026b0c10);
    lVar2 = local_40;
    uVar1 = DAT_028e3af0;
    local_c0 = PTR___NSConcreteStackBlock_02578660;
    local_b8 = 0xc2000000;
    local_b4 = 0;
    local_b0 = FUN_015b0df0;
    local_a8 = &DAT_02582be8;
    local_88 = local_28;
    local_90 = IVar3;
    local_80 = IVar3;
    (*(code *)PTR__objc_retain_02578638)();
    puVar4 = local_78;
    local_98 = lVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_a0 = puVar4;
    _dispatch_async(uVar1,&local_c0);
    _objc_storeStrong(&local_a0);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_78,0);
    local_6c = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

