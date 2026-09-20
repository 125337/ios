// avatarCornerChatPageBorderColorLight @ 020b6f54

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::avatarCornerChatPageBorderColorLight(ID param_1,SEL param_2)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  SEL SVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_d8;
  undefined *local_c8;
  undefined *local_a0;
  undefined *local_70;
  undefined *local_60;
  undefined *local_58;
  undefined4 local_50;
  byte local_49;
  undefined *local_48;
  undefined *local_40;
  ID local_38;
  ID local_30;
  SEL local_28;
  undefined *local_20;
  undefined *local_18;
  
  uVar3 = DAT_02323d00;
  local_28 = param_2;
  local_20 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar4 = local_28;
  local_30 = param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_38 = param_1;
  (*(code *)PTR__objc_release_02578630)(SVar4);
  if (local_38 == 0) {
    puVar5 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_avatarCornerBorderColorLight_0269dfd8);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 0;
    local_a0 = puVar5;
    if (puVar5 == (undefined *)0x0) {
      local_a0 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,uVar3,uVar3,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      local_48 = local_a0;
    }
    local_49 = puVar5 == (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_a0;
    if ((local_49 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_setAvatarCornerChatPageBorderCol_026b62c8,local_40);
    puVar5 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar5;
    local_50 = 1;
    _objc_storeStrong(&local_40,0);
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSKeyedUnarchiver_026ce748;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSKeyedUnarchiver_026ce748,PTR_s_unarchiveObjectWithData__026a4f98,
               local_38);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_58 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar6);
    bVar2 = false;
    bVar1 = false;
    if (((ulong)puVar5 & 1) == 0) {
      local_60 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_avatarCornerBorderColorLight_0269dfd8);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      bVar1 = local_60 == (undefined *)0x0;
      local_d8 = local_60;
      if (bVar1) {
        local_70 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_lightGrayColor_0269dfe0);
        _objc_retainAutoreleasedReturnValue();
        local_d8 = local_70;
      }
      local_c8 = local_d8;
    }
    else {
      local_c8 = local_58;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_c8;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    local_50 = 1;
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

