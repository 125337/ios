// FUN_006da84c @ 006da84c

byte FUN_006da84c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  dispatch_time_t dVar8;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined *local_78;
  uint local_6c;
  undefined *local_68;
  undefined4 local_60;
  undefined8 local_50;
  long local_48;
  undefined8 local_40;
  byte local_31;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0;
  _objc_storeStrong(&local_40,param_1);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_2);
  local_28 = &DAT_028cc288;
  local_30 = 0;
  _objc_storeStrong(&local_30,&PTR___NSConcreteGlobalBlock_0257ee08);
  if (*local_28 + 1 != 0) {
    _dispatch_once(*local_28 + 1,local_28,local_30);
  }
  _objc_storeStrong(&local_30,0);
  uVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_m_n64MesSvrID_0269d3e0);
  uVar5 = local_40;
  local_50 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_m_uiMesLocalID_0269d238);
  puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_60 = (undefined4)uVar5;
  uVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_m_nsContent_0269d0a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_stringWithFormat__0269cca8,&cf_____lld__u__lu);
  _objc_retainAutoreleasedReturnValue();
  local_68 = puVar6;
  (*(code *)PTR__objc_release_02578630)(uVar4);
  uVar2 = DAT_028cc280;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(uVar2);
  uVar7 = DAT_028cc280;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028cc280,PTR_s_containsObject__0269cbb8,local_68);
  bVar1 = (uVar7 & 1) == 0;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028cc280,PTR_s_addObject__0269d180,local_68);
  }
  else {
    local_31 = 0;
  }
  local_6c = (uint)!bVar1;
  _objc_sync_exit(uVar2);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (local_6c == 0) {
    dVar8 = _dispatch_time(0,600000000000);
    puVar6 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_68;
    local_98 = PTR___NSConcreteStackBlock_02578660;
    local_90 = 0xc2000000;
    local_8c = 0;
    local_88 = FUN_006db20c;
    local_80 = &DAT_02578c20;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = puVar3;
    _dispatch_after(dVar8,puVar6,&local_98);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    local_31 = 1;
    local_6c = 1;
    _objc_storeStrong(&local_78,0);
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  return local_31 & 1;
}

