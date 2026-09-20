// FUN_0042ca88 @ 0042ca88

void FUN_0042ca88(long param_1)

{
  char *pcVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  undefined *puVar5;
  dispatch_time_t dVar6;
  undefined8 uVar7;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  char *local_90;
  undefined8 local_88;
  undefined *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  undefined4 local_60;
  long local_50;
  long local_48;
  cfstringStruct *local_40;
  char *local_38;
  long local_30;
  long local_28;
  
  pcVar2 = "CContactVerifyLogic";
  local_30 = param_1;
  local_28 = param_1;
  _objc_getClass();
  pcVar3 = &cf_startForVerifyOK_parentView_;
  local_38 = pcVar2;
  _NSSelectorFromString();
  if ((local_38 != (char *)0x0) &&
     (pcVar2 = local_38, local_40 = pcVar3,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_38,PTR_s_instancesRespondToSelector__0269da90,pcVar3),
     ((ulong)pcVar2 & 1) != 0)) {
    lVar4 = *(long *)(param_1 + 0x20);
    FUN_0042d008();
    _objc_retainAutoreleasedReturnValue();
    local_48 = lVar4;
    FUN_0042d644();
    _objc_retainAutoreleasedReturnValue();
    local_50 = lVar4;
    if ((local_48 == 0) || (lVar4 == 0)) {
      local_60 = 1;
    }
    else {
      pcVar2 = local_38;
      _objc_alloc_init();
      local_68 = pcVar2;
      if ((pcVar2 == (char *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_respondsToSelector__026ca818,local_40),
         ((ulong)pcVar2 & 1) == 0)) {
        local_60 = 1;
      }
      else {
        FUN_0042dacc();
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_68;
        pcVar3 = &cf_setM_delegate_;
        local_70 = pcVar2;
        _NSSelectorFromString();
        FUN_0042db40(pcVar1,pcVar3,local_70);
        pcVar2 = local_68;
        pcVar3 = &cf_setM_bNotShowAlert_;
        _NSSelectorFromString();
        FUN_0042dcf0(pcVar2,pcVar3,1);
        FUN_0042de7c();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
        local_78 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
        _objc_retainAutoreleasedReturnValue();
        local_80 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_setObject_forKeyedSubscript__0269d248,local_68,&cf_logic);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_80,PTR_s_setObject_forKeyedSubscript__0269d248,local_48,&cf_wrap);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_80,PTR_s_setObject_forKeyedSubscript__0269d248,
                   *(undefined8 *)(param_1 + 0x20),&cf_push);
        pcVar2 = local_78;
        (*(code *)PTR__objc_retain_02578638)();
        _objc_sync_enter(pcVar2);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,local_80,
                   *(undefined8 *)(param_1 + 0x28));
        _objc_sync_exit(pcVar2);
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        (*(code *)PTR__objc_msgSend_02578628)(local_68,local_40,local_48,local_50);
        dVar6 = _dispatch_time(0,30000000000);
        puVar5 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_78;
        local_b0 = PTR___NSConcreteStackBlock_02578660;
        local_a8 = 0xc2000000;
        local_a4 = 0;
        local_a0 = FUN_0042def0;
        local_98 = &DAT_02578e60;
        (*(code *)PTR__objc_retain_02578638)();
        local_90 = pcVar2;
        uVar7 = *(undefined8 *)(param_1 + 0x28);
        (*(code *)PTR__objc_retain_02578638)();
        local_88 = uVar7;
        _dispatch_after(dVar6,puVar5,&local_b0);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        _objc_storeStrong(&local_88);
        _objc_storeStrong(&local_90,0);
        _objc_storeStrong(&local_80,0);
        _objc_storeStrong(&local_78,0);
        _objc_storeStrong(&local_70,0);
        local_60 = 0;
      }
      _objc_storeStrong(&local_68,0);
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  return;
}

