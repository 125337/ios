// attemptLocateMessageWrap:forSessionUser:preferredLocalID:navigationController:remainingAttempts:completion: @ 01b2f45c

/* Function Stack Size: 0x40 bytes */

void WCRefineKeywordAlertHistoryViewController::
     attemptLocateMessageWrap_forSessionUser_preferredLocalID_navigationController_remainingAttempts_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,long_long param_5,ID param_6,
               long_long param_7,ID param_8,undefined4 param_9)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  dispatch_time_t dVar5;
  undefined *puVar6;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  ID local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  long_long local_78;
  long_long local_70;
  undefined4 local_64;
  long local_60;
  long_long local_58;
  undefined8 local_50;
  long_long local_48;
  undefined8 local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_50 = 0;
  local_48 = param_5;
  _objc_storeStrong(&local_50,param_6);
  local_60 = 0;
  local_58 = param_7;
  _objc_storeStrong(&local_60,param_8);
  IVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_locateMessageWrap_inVisibleChatO_026bee90,local_38,local_40,local_48,
             local_50);
  if ((IVar4 & 1) == 0) {
    if ((long)local_58 < 1) {
      if (local_60 != 0) {
        (**(code **)(local_60 + 0x10))(local_60,0);
      }
      local_64 = 1;
    }
    else {
      dVar5 = _dispatch_time(0,200000000);
      puVar6 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      IVar4 = local_28;
      local_c0 = PTR___NSConcreteStackBlock_02578660;
      local_b8 = 0xc2000000;
      local_b4 = 0;
      local_b0 = FUN_01b2f78c;
      local_a8 = &DAT_02586fb8;
      (*(code *)PTR__objc_retain_02578638)();
      uVar2 = local_38;
      local_a0 = IVar4;
      (*(code *)PTR__objc_retain_02578638)();
      uVar3 = local_40;
      local_98 = uVar2;
      (*(code *)PTR__objc_retain_02578638)();
      uVar2 = local_50;
      local_90 = uVar3;
      local_78 = local_48;
      (*(code *)PTR__objc_retain_02578638)();
      lVar1 = local_60;
      local_88 = uVar2;
      local_70 = local_58;
      (*(code *)PTR__objc_retain_02578638)();
      local_80 = lVar1;
      _dispatch_after(dVar5,puVar6,&local_c0);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      _objc_storeStrong(&local_80);
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(&local_90,0);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(&local_a0,0);
      local_64 = 0;
    }
  }
  else {
    if (local_60 != 0) {
      (**(code **)(local_60 + 0x10))(local_60,1);
    }
    local_64 = 1;
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

