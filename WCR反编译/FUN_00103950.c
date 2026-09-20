// FUN_00103950 @ 00103950

byte FUN_00103950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 byte param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  byte local_128;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined4 local_78;
  byte local_71;
  long local_70 [3];
  undefined8 local_58;
  byte local_49;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_40 = 0;
  local_38 = param_2;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  uVar2 = local_40;
  local_49 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_00106b4c();
  _objc_retainAutoreleasedReturnValue();
  local_58 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  local_70[0] = 0;
  puVar4 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineChatRoomKickHelper_026ce2d8,PTR_s_isChatRoomID__0269ec68,local_58);
  if (((ulong)puVar4 & 1) != 0) {
    FUN_00106f1c();
    lVar6 = DAT_028c8470;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(lVar6);
    lVar5 = DAT_028c8470;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028c8470,PTR_s_objectForKeyedSubscript__0269d098,local_58);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_70[0];
    local_70[0] = lVar5;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    _objc_sync_exit(lVar6);
    (*(code *)PTR__objc_release_02578630)(lVar6);
  }
  if (DAT_028c8488 == (code *)0x0) {
    local_128 = 1;
  }
  else {
    uVar2 = local_30;
    (*DAT_028c8488)(local_30,local_38,local_40,local_48,local_49 & 1);
    local_128 = (byte)uVar2;
  }
  local_71 = local_128 & 1;
  if (((DAT_028c84a0 & 1) == 0) &&
     (puVar4 = PTR_WCRefineChatRoomKickHelper_026ce2d8,
     (*(code *)PTR__objc_msgSend_02578628)
               (PTR_WCRefineChatRoomKickHelper_026ce2d8,PTR_s_isChatRoomID__0269ec68,local_58),
     ((ulong)puVar4 & 1) != 0)) {
    puVar4 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineChatRoomKickHelper_026ce2d8,PTR_s_membersInRoom__0269ed78,local_58);
    _objc_retainAutoreleasedReturnValue();
    local_80 = puVar4;
    FUN_00106f1c();
    lVar6 = DAT_028c8470;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(lVar6);
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028c8470,PTR_s_setObject_forKeyedSubscript__0269d248,local_80,local_58);
    _objc_sync_exit(lVar6);
    (*(code *)PTR__objc_release_02578630)(lVar6);
    if ((local_70[0] == 0) ||
       (lVar6 = local_70[0], (*(code *)PTR__objc_msgSend_02578628)(local_70[0],PTR_s_count_0269cfe0)
       , lVar6 == 0)) {
      local_21 = local_71 & 1;
      local_78 = 1;
    }
    else {
      puVar7 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_mutableCopy_0269d8a0);
      local_88 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_minusSet__0269ed80,local_70[0]);
      puVar7 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_count_0269cfe0);
      if ((puVar7 == (undefined1 *)0x0) ||
         (puVar7 = local_88, (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_count_0269cfe0),
         &MACH_HEADER.sizeofcmds < puVar7)) {
        local_21 = local_71 & 1;
        local_78 = 1;
      }
      else {
        puVar7 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_allObjects_0269d228);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR___dispatch_main_q_02578680;
        local_90 = puVar7;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = local_90;
        local_c0 = PTR___NSConcreteStackBlock_02578660;
        local_b8 = 0xc2000000;
        local_b4 = 0;
        local_b0 = FUN_00106f88;
        local_a8 = &DAT_02578e60;
        (*(code *)PTR__objc_retain_02578638)();
        uVar2 = local_58;
        local_a0 = puVar7;
        (*(code *)PTR__objc_retain_02578638)();
        local_98 = uVar2;
        _dispatch_async(puVar4,&local_c0);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        local_21 = local_71 & 1;
        local_78 = 1;
        _objc_storeStrong(&local_98);
        _objc_storeStrong(&local_a0,0);
        _objc_storeStrong(&local_90,0);
      }
      _objc_storeStrong(&local_88,0);
    }
    _objc_storeStrong(&local_80,0);
  }
  else {
    local_21 = local_71 & 1;
    local_78 = 1;
  }
  _objc_storeStrong(local_70);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

