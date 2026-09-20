// confirmHorizontalOffset @ 00349928

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineHomeAvatarStripPickerBridge::confirmHorizontalOffset
          (WCRefineHomeAvatarStripPickerBridge *this,ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  double in_d0;
  undefined *local_138;
  undefined *local_110;
  ID local_d8;
  undefined *local_b8;
  undefined *local_a8;
  undefined *local_98;
  ID local_88;
  undefined *local_80;
  byte local_71;
  undefined *local_70;
  undefined *local_68;
  byte local_59;
  double local_58;
  bool local_49;
  ID local_48;
  ID local_40;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  _objc_getAssociatedObject(param_1,PTR_s_adjustHorizontalOffset_026a22b8);
  _objc_retainAutoreleasedReturnValue();
  local_38 = param_1;
  _objc_setAssociatedObject(local_28,PTR_s_adjustHorizontalOffset_026a22b8,0,1);
  IVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_getTextField_0269fb48);
  local_49 = false;
  bVar1 = (IVar2 & 1) == 0;
  if (bVar1) {
    local_d8 = 0;
  }
  else {
    local_d8 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_getTextField_0269fb48);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_d8;
  }
  local_49 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_d8;
  if ((local_49 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  IVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  local_58 = in_d0;
  if (80.0 < in_d0) {
    local_58 = 80.0;
  }
  if (local_58 < -80.0) {
    local_58 = -80.0;
  }
  local_59 = ABS(local_58) < DAT_02323d38;
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_71 = 0;
  local_110 = puVar5;
  if (puVar5 == (undefined *)0x0) {
    local_110 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_110;
  }
  local_71 = puVar5 == (undefined *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = local_110;
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = local_68;
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
  puVar4 = local_68;
  bVar1 = ((ulong)puVar5 & 1) == 0;
  if (bVar1) {
    local_138 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    local_b8 = local_138;
  }
  else {
    local_88 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_username_026a2238);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_objectForKeyedSubscript__0269d098);
    _objc_retainAutoreleasedReturnValue();
    local_138 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_a8 = local_138;
    local_98 = puVar4;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_80 = local_138;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_b8);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_a8);
    (*(code *)PTR__objc_release_02578630)(local_98);
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if ((local_59 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_horizontalOffset);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80,PTR_s_removeObjectForKey__0269d700,&cf_horizontalOffset);
  }
  puVar5 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_count_0269cfe0);
  puVar4 = local_68;
  puVar3 = local_80;
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
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

