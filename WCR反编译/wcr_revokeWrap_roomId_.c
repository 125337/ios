// wcr_revokeWrap:roomId: @ 00eda3ec

/* Function Stack Size: 0x20 bytes */

void WCRefineChatRoomKickHelper::wcr_revokeWrap_roomId_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  dispatch_time_t dVar5;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  long local_50;
  long local_48;
  ID local_40;
  undefined4 local_34;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  if ((local_28 == 0) ||
     (lVar2 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    local_34 = 1;
  }
  else {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (((ulong)puVar4 & 1) == 0) {
      local_34 = 1;
    }
    else {
      dVar5 = _dispatch_time(0,350000000);
      puVar3 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_30;
      local_70 = PTR___NSConcreteStackBlock_02578660;
      local_68 = 0xc2000000;
      local_64 = 0;
      local_60 = FUN_00eda5f8;
      local_58 = &DAT_0257a740;
      local_40 = local_18;
      (*(code *)PTR__objc_retain_02578638)();
      lVar1 = local_28;
      local_50 = lVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = lVar1;
      _dispatch_after(dVar5,puVar3,&local_70);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_48);
      _objc_storeStrong(&local_50,0);
      local_34 = 0;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

