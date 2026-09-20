// scheduleAutoMuteForNewChatRoom: @ 00ee0090

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineChatRoomMuteHelper::scheduleAutoMuteForNewChatRoom_
          (WCRefineChatRoomMuteHelper *this,ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  long lVar6;
  dispatch_time_t dVar7;
  double in_d0;
  double dVar8;
  double dVar9;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  ID local_88;
  ID local_80;
  long local_68;
  double local_60;
  ID local_58;
  int local_4c;
  undefined8 local_48;
  SEL local_40;
  ID local_38;
  undefined8 local_30;
  long *local_28;
  
  local_48 = 0;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_48,param_3);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    local_4c = 1;
  }
  else {
    IVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_trimmedString__0269ec98,local_48);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_38;
    local_58 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isChatRoomUserName__0269eff8,IVar4);
    if ((IVar5 & 1) == 0) {
      local_4c = 1;
    }
    else {
      _CFAbsoluteTimeGetCurrent();
      dVar8 = in_d0;
      FUN_00edd618();
      in_d0 = in_d0 - dVar8;
      if (20.0 <= in_d0) {
        local_28 = &DAT_028e2a68;
        local_30 = 0;
        _objc_storeStrong(&local_30,&PTR___NSConcreteGlobalBlock_02581ed0);
        if (*local_28 + 1 != 0) {
          _dispatch_once(*local_28 + 1,local_28,local_30);
        }
        _objc_storeStrong(&local_30,0);
        _CFAbsoluteTimeGetCurrent();
        lVar1 = DAT_028e2a60;
        local_60 = in_d0;
        (*(code *)PTR__objc_retain_02578638)();
        _objc_sync_enter(lVar1);
        lVar6 = DAT_028e2a60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_028e2a60,PTR_s_objectForKeyedSubscript__0269d098,local_58);
        _objc_retainAutoreleasedReturnValue();
        dVar8 = local_60;
        local_68 = lVar6;
        if ((lVar6 == 0) ||
           (dVar9 = local_60,
           (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_doubleValue_026ca608),
           8.0 <= dVar8 - dVar9)) {
          puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_028e2a60,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,local_58);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          local_4c = 0;
        }
        else {
          local_4c = 1;
        }
        _objc_storeStrong(&local_68,0);
        if (local_4c == 0) {
          local_4c = 0;
        }
        _objc_sync_exit(lVar1);
        (*(code *)PTR__objc_release_02578630)(lVar1);
        if (local_4c == 0) {
          dVar7 = _dispatch_time(0,600000000);
          puVar2 = PTR___dispatch_main_q_02578680;
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          IVar4 = local_58;
          local_a8 = PTR___NSConcreteStackBlock_02578660;
          local_a0 = 0xc2000000;
          local_9c = 0;
          local_98 = FUN_00ee0504;
          local_90 = &DAT_0257cc98;
          local_80 = local_38;
          (*(code *)PTR__objc_retain_02578638)();
          local_88 = IVar4;
          _dispatch_after(dVar7,puVar2,&local_a8);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          _objc_storeStrong(&local_88,0);
          local_4c = 0;
        }
      }
      else {
        local_4c = 1;
      }
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48,0);
  return;
}

