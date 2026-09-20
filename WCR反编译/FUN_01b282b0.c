// FUN_01b282b0 @ 01b282b0

void FUN_01b282b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  cfstringStruct *local_d0;
  ulong local_98;
  ulong local_88;
  undefined *local_60;
  cfstringStruct *local_58;
  undefined8 local_50;
  int local_44;
  ulong local_40;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar1 = *(ulong *)(param_1 + 0x20);
  local_38 = param_1;
  local_30 = param_4;
  local_28 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_resolvedRecord__026beb38,local_20);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_20;
  local_88 = uVar1;
  if (uVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) == 0) {
      local_98 = 0;
    }
    else {
      local_98 = local_20;
    }
    local_88 = local_98;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_88;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar3 = local_40;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_44 = 1;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_historyGroupTextForRecord__026beb48,local_40);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = *(cfstringStruct **)(param_1 + 0x20);
    local_50 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar5,PTR_s_historyKeywordTextForRecord__026beb58,local_40);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_50;
    puVar6 = PTR_WCRefineHelper_026ce000;
    puVar2 = PTR_s_openHistoryRecord__026bee00;
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    local_58 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_length_0269cca0);
    if (pcVar5 == (cfstringStruct *)0x0) {
      local_d0 = &cf_gw;
    }
    else {
      local_d0 = local_58;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar6,PTR_s_cellWithSel_target_title_rightVa_026a0a98,puVar2,uVar7,uVar4,local_d0,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_setUserInfo__026a17c8,local_40);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_addCell__0269e3f8,local_60);
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_40,0);
  if (local_44 == 0) {
    local_44 = 0;
  }
  _objc_storeStrong(&local_20,0);
  return;
}

