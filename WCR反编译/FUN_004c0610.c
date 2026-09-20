// FUN_004c0610 @ 004c0610

void FUN_004c0610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  char *pcVar7;
  byte local_c8;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [15];
  undefined1 local_61;
  char *local_60;
  byte local_52;
  undefined1 local_51;
  undefined *local_50;
  int local_48;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  lVar4 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
  if (lVar4 == 1) {
    lVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    FUN_004c20a0();
    (*(code *)PTR__objc_release_02578630)(lVar4);
    puVar5 = PTR_WCRefinePrivateFriendManager_026ce160;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_sharedManager_0269db78);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_WCRefinePrivateFriendManager_026ce160;
    local_50 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_isEntryVisibleForCurrentUser_0269e560
              );
    local_51 = SUB81(puVar6,0);
    local_c8 = 0;
    if (((ulong)puVar6 & 1) != 0) {
      puVar5 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_enabled_0269db80);
      local_c8 = 0;
      if (((ulong)puVar5 & 1) != 0) {
        puVar5 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_plusLongPressEntryEnabled_026a3f20);
        local_c8 = (byte)puVar5;
      }
    }
    local_52 = local_c8 & 1;
    pcVar7 = "MiYouViewController";
    _objc_getClass();
    puVar5 = PTR_WCRefineConfig_026cdf58;
    local_60 = pcVar7;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = ((ulong)puVar6 & 1) != 0;
    bVar3 = local_60 != (char *)0x0;
    bVar2 = bVar1 && bVar3;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    local_61 = bVar2;
    if ((local_52 & 1) == 0) {
      if (bVar1 && bVar3) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcrefine_openExternalMiYou_026a3f10);
        local_48 = 1;
      }
      else {
        local_48 = 0;
      }
    }
    else {
      _objc_initWeak(auStack_70,local_28);
      puVar5 = local_50;
      local_98 = PTR___NSConcreteStackBlock_02578660;
      local_90 = 0xc2000000;
      local_8c = 0;
      local_88 = FUN_004c24b8;
      local_80 = &DAT_02578da0;
      _objc_copyWeak(auStack_78,auStack_70);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_authenticatePlusLongPressSuccess_026a3f30,&local_98);
      local_48 = 1;
      _objc_destroyWeak(auStack_78);
      _objc_destroyWeak(auStack_70);
    }
    _objc_storeStrong(&local_50,0);
    if (local_48 == 0) {
      local_48 = 0;
    }
  }
  else {
    local_48 = 1;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

