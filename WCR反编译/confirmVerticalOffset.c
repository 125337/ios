// confirmVerticalOffset @ 00348bac

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineHomeAvatarStripPickerBridge::confirmVerticalOffset
          (WCRefineHomeAvatarStripPickerBridge *this,ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  double in_d0;
  undefined *local_158;
  undefined *local_130;
  undefined *local_108;
  ID local_e8;
  undefined *local_c8;
  undefined *local_b8;
  undefined *local_a8;
  ID local_98;
  undefined *local_90;
  byte local_81;
  undefined *local_80;
  undefined *local_78;
  byte local_69;
  undefined *local_68;
  undefined *local_60;
  double local_58;
  bool local_49;
  ID local_48;
  ID local_40;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  _objc_getAssociatedObject(param_1,PTR_s_adjustVerticalOffset_026a22a0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = param_1;
  _objc_setAssociatedObject(local_28,PTR_s_adjustVerticalOffset_026a22a0,0,1);
  IVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_getTextField_0269fb48);
  local_49 = false;
  bVar1 = (IVar2 & 1) == 0;
  if (bVar1) {
    local_e8 = 0;
  }
  else {
    local_e8 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_getTextField_0269fb48);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_e8;
  }
  local_49 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_e8;
  if ((local_49 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  IVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  local_58 = in_d0;
  if (40.0 < in_d0) {
    local_58 = 40.0;
  }
  if (local_58 < -40.0) {
    local_58 = -40.0;
  }
  local_69 = 0;
  bVar1 = DAT_02323d38 <= ABS(local_58);
  if (bVar1) {
    local_108 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___1f);
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_108;
  }
  else {
    local_108 = (undefined *)0x0;
  }
  local_69 = bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = local_108;
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_81 = 0;
  local_130 = puVar5;
  if (puVar5 == (undefined *)0x0) {
    local_130 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    local_80 = local_130;
  }
  local_81 = puVar5 == (undefined *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = local_130;
  if ((local_81 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = local_78;
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_username_026a2238);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_objectForKeyedSubscript__0269d098);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  puVar5 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  puVar4 = local_78;
  bVar1 = ((ulong)puVar5 & 1) == 0;
  if (bVar1) {
    local_158 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = local_158;
  }
  else {
    local_98 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_username_026a2238);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_objectForKeyedSubscript__0269d098);
    _objc_retainAutoreleasedReturnValue();
    local_158 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_b8 = local_158;
    local_a8 = puVar4;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_90 = local_158;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_c8);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_b8);
    (*(code *)PTR__objc_release_02578630)(local_a8);
    (*(code *)PTR__objc_release_02578630)(local_98);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (local_60 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_90,PTR_s_removeObjectForKey__0269d700,&cf_verticalOffset);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_90,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_verticalOffset);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  puVar5 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_count_0269cfe0);
  puVar4 = local_78;
  puVar3 = local_90;
  if (puVar5 == (undefined *)0x0) {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_username_026a2238);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_removeObjectForKey__0269d700);
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  else {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_username_026a2238);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3)
    ;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  FUN_0034945c();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_releaseFromHost_026a2230);
  _objc_storeStrong(&local_90);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

