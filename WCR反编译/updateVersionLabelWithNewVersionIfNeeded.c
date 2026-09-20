// updateVersionLabelWithNewVersionIfNeeded @ 01d2d580

/* Function Stack Size: 0x10 bytes */

void WCRefineRootViewController::updateVersionLabelWithNewVersionIfNeeded(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined8 uVar6;
  uint local_9c;
  ID local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  SEL local_50;
  ID local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined *local_28;
  
  puVar1 = PTR_WCRefineRemoteUpdateManager_026ce600;
  local_50 = param_2;
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineRemoteUpdateManager_026ce600,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_9c = 0;
  if (((ulong)puVar2 & 1) != 0) {
    IVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isUpdateNotificationDisabled_026c43e8);
    local_9c = (uint)IVar3 ^ 1;
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if ((local_9c & 1) != 0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_V);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableAttributedString_026ce3e8;
    local_60 = puVar1;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar1 = local_60;
    puVar5 = PTR_s_rangeOfString__0269d838;
    local_68 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_rangeOfString__0269d838,&cf__);
    local_78 = puVar1;
    local_70 = puVar5;
    if (puVar1 != (undefined *)0x7fffffffffffffff) {
      puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x402c000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                 PTR_s_boldSystemFontOfSize__0269cf28);
      _objc_retainAutoreleasedReturnValue();
      local_80 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_addAttribute_value_range__026a1d88,
                 *(undefined8 *)PTR__NSFontAttributeName_02578068,puVar1,local_78,local_70);
      IVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_versionLabel_026b4ac8);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_88 = IVar4;
      (*(code *)PTR__objc_release_02578630)(IVar3);
      puVar1 = local_68;
      IVar3 = local_88;
      uVar6 = *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070;
      puVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
      local_38 = 0;
      local_30 = 0;
      local_40 = puVar2;
      local_28 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_addAttribute_value_range__026a1d88,uVar6,IVar3,0,puVar2);
      _objc_storeStrong(&local_88);
      _objc_storeStrong(&local_80,0);
    }
    IVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_versionLabel_026b4ac8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_nicknameLabel_026b4ac0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
  }
  return;
}

