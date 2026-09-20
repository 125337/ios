// toggleSimulate @ 01958880

/* Function Stack Size: 0x10 bytes */

void WCRefineFakeLocationSettingsViewController::toggleSimulate(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  undefined8 local_58;
  undefined1 auStack_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_34;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefineFakeLocationEngine_026ceb80;
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineFakeLocationEngine_026ceb80,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_28;
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_fakeLocationMoveRunning_026ac668);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasRoute_026ac648);
    if (((ulong)puVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setFakeLocationMoveRunning__026ac6d0,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_warmWeChatLocationCache_026ac688);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_notifyChanged_026b43a0);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__f_P_MOVwp);
      local_34 = 1;
      goto LAB_01958c5c;
    }
  }
  puVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasRoute_026ac648);
  if (((ulong)puVar1 & 1) == 0) {
    uVar4 = 0;
    local_40 = 0;
    local_48 = 0;
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_loadDestLat_lng_name__026b9b40,&local_40,&local_48,0);
    if ((IVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQb_p);
      local_34 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_fakeLocationLatitude_026ac690);
      puVar1 = local_28;
      uVar5 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_fakeLocationLongitude_026ac698);
      FUN_01954c24(uVar4,uVar5);
      if (((ulong)puVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQbwp);
        local_34 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_ck_WR__);
        _objc_initWeak(auStack_50,local_18);
        puVar1 = local_30;
        uVar4 = local_40;
        uVar5 = local_48;
        _CLLocationCoordinate2DMake();
        puVar2 = local_28;
        local_60 = uVar4;
        local_58 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_fakeLocationMoveTransportType_026ac7a8)
        ;
        local_98 = PTR___NSConcreteStackBlock_02578660;
        local_90 = 0xc2000000;
        local_8c = 0;
        local_88 = FUN_01958cc4;
        local_80 = &DAT_025888b8;
        _objc_copyWeak(auStack_78,auStack_50);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,local_58,puVar1,PTR_s_planRouteToCoordinate_transportT_026b9c28,puVar2,
                   &local_98);
        _objc_destroyWeak(auStack_78);
        _objc_destroyWeak(auStack_50);
        local_34 = 0;
      }
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setFakeLocationMoveRunning__026ac6d0,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_reloadFromConfig_0269f950);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_notifyChanged_026b43a0);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf____jb);
    local_34 = 1;
  }
LAB_01958c5c:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

