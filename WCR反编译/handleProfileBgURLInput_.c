// handleProfileBgURLInput: @ 01cdcca0

/* Function Stack Size: 0x18 bytes */

void WCRefineProfileCardBeautifyViewController::handleProfileBgURLInput_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *local_b0;
  cfstringStruct *local_98;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  bool local_59;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  SEL local_40;
  ID local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_48 = (cfstringStruct *)0x0;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_48,param_3);
  pcVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
  local_59 = false;
  bVar1 = ((ulong)pcVar2 & 1) == 0;
  if (bVar1) {
    local_98 = &::cf___;
  }
  else {
    local_98 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_98;
  }
  local_59 = !bVar1;
  _WCRefineProfileBgNormalizedURLString();
  _objc_retainAutoreleasedReturnValue();
  local_50 = local_98;
  if ((local_59 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_68 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setProfileBgURL__026c3900,local_50);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setProfileBgSourceMode__026c3908,2);
  pcVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if (pcVar2 != (cfstringStruct *)0x0) {
    puVar4 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_profileBgURLHistory_026c37c0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_b0 = puVar5;
    if (puVar5 == (undefined1 *)0x0) {
      local_78 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = local_78;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = local_b0;
    if (puVar5 == (undefined1 *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_removeObject__0269d678,local_50);
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_insertObject_atIndex__0269eac0,local_50,0);
    puVar4 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_count_0269cfe0);
    if ((undefined1 *)((long)&MACH_HEADER.reserved + 2) < puVar4) {
      local_28 = 0;
      local_30 = 0x1e;
      local_20 = 0;
      local_18 = 0x1e;
      puVar5 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_subarrayWithRange__0269d848,0,0x1e);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      puVar4 = local_70;
      local_70 = puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setProfileBgURLHistory__026c3910,local_70);
    _objc_storeStrong(&local_70,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_sendSettingsChangedNotification_026b61d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  return;
}

