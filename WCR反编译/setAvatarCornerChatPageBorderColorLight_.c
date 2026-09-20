// setAvatarCornerChatPageBorderColorLight: @ 020b732c

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setAvatarCornerChatPageBorderColorLight_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined *puVar4;
  SEL SVar5;
  undefined *local_68;
  undefined *local_40;
  undefined *local_38;
  ID local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  uVar2 = DAT_02323d00;
  local_28 = (undefined *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSKeyedArchiver_026ce750;
  bVar1 = local_28 == (undefined *)0x0;
  local_30 = IVar3;
  if (bVar1) {
    local_68 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,uVar2,uVar2,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_68;
  }
  else {
    local_68 = local_28;
  }
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_archivedDataWithRootObject__026a4fa0,local_68);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar4;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  IVar3 = local_30;
  puVar4 = local_38;
  SVar5 = local_20;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_setObject_forKey__026ca9e8,puVar4);
  (*(code *)PTR__objc_release_02578630)(SVar5);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

