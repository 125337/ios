// FUN_00504390 @ 00504390

byte FUN_00504390(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  dispatch_time_t dVar7;
  char *local_108;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  char *local_98;
  cfstringStruct *local_90;
  char *local_88;
  byte local_79;
  char *local_78;
  char *local_70 [3];
  char *local_58;
  undefined4 local_4c;
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
     (lVar2 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    local_31 = 0;
    local_4c = 1;
  }
  else {
    pcVar3 = "CContactMgr";
    _objc_getClass();
    FUN_00504994();
    _objc_retainAutoreleasedReturnValue();
    local_79 = 0;
    local_58 = pcVar3;
    if ((pcVar3 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
       ((ulong)pcVar3 & 1) == 0)) {
      local_108 = (char *)0x0;
    }
    else {
      local_108 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_getContactByName__0269d178,local_48);
      _objc_retainAutoreleasedReturnValue();
      local_79 = 1;
      local_78 = local_108;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_70[0] = local_108;
    if ((local_79 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    pcVar3 = "ForwardMessageLogicController";
    _objc_getClass();
    pcVar4 = &cf_ForwardMsg_ToContact_;
    local_88 = pcVar3;
    _NSSelectorFromString();
    local_90 = pcVar4;
    if ((local_88 == (char *)0x0) || (local_70[0] == (char *)0x0)) {
      local_31 = 0;
      local_4c = 1;
    }
    else {
      pcVar3 = local_88;
      _objc_alloc_init();
      local_98 = pcVar3;
      if ((pcVar3 == (char *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_respondsToSelector__026ca818,local_90),
         ((ulong)pcVar3 & 1) == 0)) {
        local_31 = 0;
        local_4c = 1;
      }
      else {
        local_28 = &DAT_028caf60;
        local_30 = 0;
        _objc_storeStrong(&local_30,&PTR___NSConcreteGlobalBlock_0257d7f8);
        if (*local_28 + 1 != 0) {
          _dispatch_once(*local_28 + 1,local_28,local_30);
        }
        _objc_storeStrong(&local_30,0);
        puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
        puVar5 = PTR__OBJC_CLASS___NSDate_026cdf88;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_stringWithFormat__0269cca8,&cf__p__f);
        _objc_retainAutoreleasedReturnValue();
        local_a0 = puVar6;
        (*(code *)PTR__objc_release_02578630)(puVar5);
        uVar1 = DAT_028caf58;
        (*(code *)PTR__objc_retain_02578638)();
        _objc_sync_enter(uVar1);
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_028caf58,PTR_s_setObject_forKeyedSubscript__0269d248,local_98,local_a0);
        _objc_sync_exit(uVar1);
        (*(code *)PTR__objc_release_02578630)(uVar1);
        (*(code *)PTR__objc_msgSend_02578628)(local_98,local_90,local_40,local_70[0]);
        dVar7 = _dispatch_time(0,3000000000);
        puVar6 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = local_a0;
        local_c8 = PTR___NSConcreteStackBlock_02578660;
        local_c0 = 0xc2000000;
        local_bc = 0;
        local_b8 = FUN_00504afc;
        local_b0 = &DAT_0257a800;
        (*(code *)PTR__objc_retain_02578638)();
        local_a8 = puVar5;
        _dispatch_after(dVar7,puVar6,&local_c8);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        local_31 = 1;
        local_4c = 1;
        _objc_storeStrong(&local_a8);
        _objc_storeStrong(&local_a0,0);
      }
      _objc_storeStrong(&local_98,0);
    }
    _objc_storeStrong(local_70);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return local_31 & 1;
}

