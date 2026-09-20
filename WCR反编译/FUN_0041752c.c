// FUN_0041752c @ 0041752c

byte FUN_0041752c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  dispatch_time_t dVar8;
  char *local_148;
  char *local_128;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  char *local_a8;
  cfstringStruct *local_a0;
  char *local_98;
  byte local_89;
  char *local_88;
  char *local_80;
  bool local_71;
  char *local_70;
  char *local_68;
  char *local_60;
  undefined4 local_58;
  long local_48;
  long local_40;
  byte local_31;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0;
  _objc_storeStrong(&local_40,param_1);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_2);
  if ((local_40 == 0) ||
     (lVar3 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
     lVar3 == 0)) {
    local_31 = 0;
    local_58 = 1;
  }
  else {
    local_128 = "MMServiceCenter";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    local_71 = false;
    bVar1 = local_128 == (char *)0x0;
    local_60 = local_128;
    if (bVar1) {
      local_128 = (char *)0x0;
    }
    else {
      pcVar4 = "CContactMgr";
      _objc_getClass();
      (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_getService__0269d170,pcVar4);
      _objc_retainAutoreleasedReturnValue();
      local_70 = local_128;
    }
    local_71 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_128;
    if ((local_71 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    local_89 = 0;
    if ((local_68 == (char *)0x0) ||
       (pcVar4 = local_68,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
       ((ulong)pcVar4 & 1) == 0)) {
      local_148 = (char *)0x0;
    }
    else {
      local_148 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_getContactByName__0269d178,local_48);
      _objc_retainAutoreleasedReturnValue();
      local_89 = 1;
      local_88 = local_148;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = local_148;
    if ((local_89 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    pcVar4 = "ForwardMessageLogicController";
    _objc_getClass();
    pcVar5 = &cf_ForwardMsg_ToContact_;
    local_98 = pcVar4;
    _NSSelectorFromString();
    local_a0 = pcVar5;
    if ((local_98 == (char *)0x0) || (local_80 == (char *)0x0)) {
      local_31 = 0;
      local_58 = 1;
    }
    else {
      pcVar4 = local_98;
      _objc_alloc_init();
      local_a8 = pcVar4;
      if ((pcVar4 == (char *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_respondsToSelector__026ca818,local_a0),
         ((ulong)pcVar4 & 1) == 0)) {
        local_31 = 0;
        local_58 = 1;
      }
      else {
        local_28 = &DAT_028ca7b0;
        local_30 = 0;
        _objc_storeStrong(&local_30,&PTR___NSConcreteGlobalBlock_0257d258);
        if (*local_28 + 1 != 0) {
          _dispatch_once(*local_28 + 1,local_28,local_30);
        }
        _objc_storeStrong(&local_30,0);
        puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
        puVar6 = PTR__OBJC_CLASS___NSDate_026cdf88;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_stringWithFormat__0269cca8,&cf__p__f);
        _objc_retainAutoreleasedReturnValue();
        local_b0 = puVar7;
        (*(code *)PTR__objc_release_02578630)(puVar6);
        uVar2 = DAT_028ca7a8;
        (*(code *)PTR__objc_retain_02578638)();
        _objc_sync_enter(uVar2);
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_028ca7a8,PTR_s_setObject_forKeyedSubscript__0269d248,local_a8,local_b0);
        _objc_sync_exit(uVar2);
        (*(code *)PTR__objc_release_02578630)(uVar2);
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,local_a0,local_40,local_80);
        dVar8 = _dispatch_time(0,3000000000);
        puVar7 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = local_b0;
        local_d8 = PTR___NSConcreteStackBlock_02578660;
        local_d0 = 0xc2000000;
        local_cc = 0;
        local_c8 = FUN_00417da0;
        local_c0 = &DAT_02578c20;
        (*(code *)PTR__objc_retain_02578638)();
        local_b8 = puVar6;
        _dispatch_after(dVar8,puVar7,&local_d8);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        local_31 = 1;
        local_58 = 1;
        _objc_storeStrong(&local_b8);
        _objc_storeStrong(&local_b0,0);
      }
      _objc_storeStrong(&local_a8,0);
    }
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return local_31 & 1;
}

