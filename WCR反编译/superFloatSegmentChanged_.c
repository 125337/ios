// superFloatSegmentChanged: @ 01e23974

/* Function Stack Size: 0x18 bytes */

void WCRefineSuperFloatSettingsViewController::superFloatSegmentChanged_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  long lVar2;
  undefined *puVar3;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  ID local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  ID local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_3c;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  lVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_tag_026cab98);
  puVar3 = PTR_WCRSuperFloatProfileStore_026cee48;
  if (lVar2 == 0x1155f) {
    lVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_selectedSegmentIndex_0269e998);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setFanHaptic__026c6158,lVar2);
    puVar3 = PTR_WCRefineHelper_026ce000;
    lVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_selectedSegmentIndex_0269e998);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_triggerHapticFeedbackWithIndex__0269f248,lVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_notifyChanged_026b43a0);
    local_3c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
    lVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_tag_026cab98);
    if (lVar2 == 0x11559) {
      local_48 = 0;
      lVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_selectedSegmentIndex_0269e998);
      if (lVar2 == 1) {
        local_48 = 1;
      }
      else {
        lVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_selectedSegmentIndex_0269e998);
        if (lVar2 == 2) {
          local_48 = 2;
        }
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setMenuStyle__026c6160,local_48);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_notifyChanged_026b43a0);
      local_3c = 1;
    }
    else {
      lVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_tag_026cab98);
      if (lVar2 == 0x1155c) {
        local_50 = 0;
        lVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_selectedSegmentIndex_0269e998);
        if (lVar2 == 1) {
          local_50 = 1;
        }
        else {
          lVar2 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_selectedSegmentIndex_0269e998);
          if (lVar2 == 2) {
            local_50 = 2;
          }
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_confirmMenuOpenTrigger__026c6168,local_50);
        local_3c = 1;
      }
      else {
        lVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_tag_026cab98);
        if (lVar2 == 0x1155d) {
          lVar2 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_selectedSegmentIndex_0269e998);
          local_58 = lVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setBallAppearance__026c5c78,lVar2)
          ;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_notifyChanged_026b43a0);
          puVar3 = PTR___dispatch_main_q_02578680;
          if (local_58 == 1) {
            _objc_retainAutoreleaseReturnValue(0);
            _objc_retainAutoreleasedReturnValue();
            IVar1 = local_28;
            local_80 = PTR___NSConcreteStackBlock_02578660;
            local_78 = 0xc2000000;
            local_74 = 0;
            local_70 = FUN_01e23fa0;
            local_68 = &DAT_0257a800;
            (*(code *)PTR__objc_retain_02578638)();
            local_60 = IVar1;
            _dispatch_async(puVar3,&local_80);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            _objc_storeStrong(&local_60,0);
          }
          else if (local_58 == 2) {
            _objc_retainAutoreleaseReturnValue(0);
            _objc_retainAutoreleasedReturnValue();
            IVar1 = local_28;
            local_a8 = PTR___NSConcreteStackBlock_02578660;
            local_a0 = 0xc2000000;
            local_9c = 0;
            local_98 = FUN_01e23fe0;
            local_90 = &DAT_0257a800;
            (*(code *)PTR__objc_retain_02578638)();
            local_88 = IVar1;
            _dispatch_async(puVar3,&local_a8);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            _objc_storeStrong(&local_88,0);
          }
          local_3c = 1;
        }
        else {
          lVar2 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_tag_026cab98);
          puVar3 = PTR_WCRSuperFloatProfileStore_026cee48;
          if (lVar2 == 0x1155e) {
            lVar2 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_selectedSegmentIndex_0269e998);
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setFanType__026c6170,lVar2);
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_notifyChanged_026b43a0);
            local_3c = 1;
          }
          else {
            lVar2 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_tag_026cab98);
            if (lVar2 == 0x11560) {
              (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_selectedSegmentIndex_0269e998);
              puVar3 = PTR_WCRefineConfig_026cdf58;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(puVar3);
              (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_notifyChanged_026b43a0);
            }
            local_3c = 0;
          }
        }
      }
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

