// applyOfficialItemFieldsForEntry: @ 01f1b1ec

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineToDoStore::applyOfficialItemFieldsForEntry_
          (WCRefineToDoStore *this,ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  ID IVar5;
  double in_d0;
  ID local_e8;
  uint local_ac;
  cfstringStruct *local_a8;
  ID local_88;
  bool local_79;
  ID local_78;
  byte local_69;
  cfstringStruct *local_68;
  byte local_59;
  cfstringStruct *local_58;
  ID local_50;
  undefined4 local_44;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_officialItem_026c8338);
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_44 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_setContent__026a4ad8);
    pcVar3 = local_40;
    puVar1 = PTR_s_setContent__026a4ad8;
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_a8 = &::cf___;
      }
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,puVar1,local_a8);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_dueDate_026c74b0);
    _objc_retainAutoreleasedReturnValue();
    local_ac = 0;
    if (pcVar2 != (cfstringStruct *)0x0) {
      pcVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_setDate__0269cf58);
      local_ac = (uint)pcVar3;
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_40;
    puVar1 = PTR_s_setDate__0269cf58;
    if ((local_ac & 1) != 0) {
      pcVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_dueDate_026c74b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,puVar1);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_startTime_026c74b8);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = local_28;
    local_59 = 0;
    local_69 = 0;
    local_79 = false;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_e8 = 0;
    }
    else {
      pcVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_dueDate_026c74b0);
      _objc_retainAutoreleasedReturnValue();
      local_59 = 1;
      pcVar4 = local_38;
      local_58 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_startTime_026c74b8);
      _objc_retainAutoreleasedReturnValue();
      local_69 = 1;
      local_68 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_dateByCombiningDay_time__026c7668,pcVar3)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_e8;
    }
    local_79 = pcVar2 != (cfstringStruct *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_e8;
    if ((local_79 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    if ((local_69 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    if ((local_59 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    if ((local_50 != 0) &&
       (pcVar3 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_setRemindTime__026c8340),
       pcVar2 = local_40, puVar1 = PTR_s_setRemindTime__026c8340, ((ulong)pcVar3 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_timeIntervalSince1970_0269cfc8);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,puVar1,(int)in_d0);
    }
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_scheduleManager_026c8208);
    _objc_retainAutoreleasedReturnValue();
    local_88 = IVar5;
    if ((IVar5 != 0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (IVar5,PTR_s_respondsToSelector__026ca818,PTR_s_updateAllSchedules_026a86f0),
       (IVar5 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_updateAllSchedules_026a86f0);
    }
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_50,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

