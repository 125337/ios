// FUN_0172695c @ 0172695c

byte FUN_0172695c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  dispatch_time_t dVar9;
  char *local_118;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  char *local_a0;
  cfstringStruct *local_98;
  char *local_90;
  char *local_88;
  bool local_79;
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
     (lVar3 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
     lVar3 == 0)) {
    local_31 = 0;
    local_4c = 1;
  }
  else {
    local_118 = "MMServiceCenter";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    local_79 = false;
    bVar1 = local_118 == (char *)0x0;
    local_58 = local_118;
    if (bVar1) {
      local_118 = (char *)0x0;
    }
    else {
      pcVar4 = "CContactMgr";
      _objc_getClass();
      (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_getService__0269d170,pcVar4);
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_118;
    }
    local_79 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_70[0] = local_118;
    if ((local_79 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    local_88 = (char *)0x0;
    if ((local_70[0] != (char *)0x0) &&
       (pcVar4 = local_70[0],
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_70[0],PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
       ((ulong)pcVar4 & 1) != 0)) {
      pcVar5 = local_70[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_70[0],PTR_s_getContactByName__0269d178,local_48);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_88;
      local_88 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    pcVar4 = "ForwardMessageLogicController";
    _objc_getClass();
    pcVar6 = &cf_ForwardMsg_ToContact_;
    local_90 = pcVar4;
    _NSSelectorFromString();
    local_98 = pcVar6;
    if ((local_90 == (char *)0x0) || (local_88 == (char *)0x0)) {
      local_31 = 0;
      local_4c = 1;
    }
    else {
      pcVar4 = local_90;
      _objc_alloc_init();
      local_a0 = pcVar4;
      if ((pcVar4 == (char *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_respondsToSelector__026ca818,local_98),
         ((ulong)pcVar4 & 1) == 0)) {
        local_31 = 0;
        local_4c = 1;
      }
      else {
        local_28 = &DAT_028e3f98;
        local_30 = 0;
        _objc_storeStrong(&local_30,&PTR___NSConcreteGlobalBlock_02588758);
        if (*local_28 + 1 != 0) {
          _dispatch_once(*local_28 + 1,local_28,local_30);
        }
        _objc_storeStrong(&local_30,0);
        puVar8 = PTR__OBJC_CLASS___NSString_026cdfe8;
        puVar7 = PTR__OBJC_CLASS___NSDate_026cdf88;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_stringWithFormat__0269cca8,&cf__p__f);
        _objc_retainAutoreleasedReturnValue();
        local_a8 = puVar8;
        (*(code *)PTR__objc_release_02578630)(puVar7);
        uVar2 = DAT_028e3f90;
        (*(code *)PTR__objc_retain_02578638)();
        _objc_sync_enter(uVar2);
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_028e3f90,PTR_s_setObject_forKeyedSubscript__0269d248,local_a0,local_a8);
        _objc_sync_exit(uVar2);
        (*(code *)PTR__objc_release_02578630)(uVar2);
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,local_98,local_40,local_88);
        dVar9 = _dispatch_time(0,3000000000);
        puVar8 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = local_a8;
        local_d0 = PTR___NSConcreteStackBlock_02578660;
        local_c8 = 0xc2000000;
        local_c4 = 0;
        local_c0 = FUN_01737340;
        local_b8 = &DAT_0257a800;
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = puVar7;
        _dispatch_after(dVar9,puVar8,&local_d0);
        (*(code *)PTR__objc_release_02578630)(puVar8);
        local_31 = 1;
        local_4c = 1;
        _objc_storeStrong(&local_b0);
        _objc_storeStrong(&local_a8,0);
      }
      _objc_storeStrong(&local_a0,0);
    }
    _objc_storeStrong(&local_88);
    _objc_storeStrong(local_70,0);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return local_31 & 1;
}

