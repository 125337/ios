// FUN_01f1d874 @ 01f1d874

void FUN_01f1d874(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 in_stack_ffffffffffffff20;
  undefined8 in_stack_ffffffffffffff28;
  char *local_a8;
  ulong local_70;
  bool local_61;
  char *local_60;
  char *local_58;
  undefined *local_50;
  char *local_48;
  uint local_3c;
  ulong local_38;
  long local_30;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar3 = *(ulong *)(param_1 + 0x58);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_messageManager_026c8358);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x20);
  local_28 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  local_30 = lVar4;
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_m_uiMesLocalID_0269d238);
  if (((int)uVar5 != 0) &&
     (uVar6 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_GetMsg_LocalID__0269d5e8),
     uVar3 = local_28, puVar2 = PTR_s_GetMsg_LocalID__0269d5e8, (uVar6 & 1) != 0)) {
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_m_uiMesLocalID_0269d238);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,puVar2,uVar8,uVar5);
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar3;
    if (uVar3 != 0) {
      _objc_storeStrong(&local_30,uVar3);
    }
    _objc_storeStrong(&local_38,0);
  }
  lVar4 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_uiMesLocalID_0269d238);
  if (((int)lVar4 == 0) ||
     (lVar4 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_n64MesSvrID_0269d3e0)
     , lVar4 < 1)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x58),PTR_s_setSentMessageAsOfficialToDo_tar_026c8360,
               local_30,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
               *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
               *(undefined8 *)(param_1 + 0x48),
               CONCAT71((int7)((ulong)in_stack_ffffffffffffff20 >> 8),
                        *(undefined1 *)(param_1 + 0x68)) & 0xffffffffffffff01,
               *(undefined8 *)(param_1 + 0x50),*(long *)(param_1 + 0x60) + -1);
    local_3c = 1;
  }
  else {
    pcVar7 = "WCScheduleUtil";
    _objc_getClass(lVar4);
    local_50 = PTR_s_convertMessageWrapToScheduleItem_026c8368;
    local_48 = pcVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar7,PTR_s_respondsToSelector__026ca818,
               PTR_s_convertMessageWrapToScheduleItem_026c8368);
    local_61 = false;
    bVar1 = ((ulong)pcVar7 & 1) == 0;
    if (bVar1) {
      local_a8 = (char *)0x0;
    }
    else {
      local_a8 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,local_50,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_a8;
    }
    local_61 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_a8;
    if ((local_61 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    if (local_58 == (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x58),PTR_s_setSentMessageAsOfficialToDo_tar_026c8360,
                 local_30,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                 *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                 *(undefined8 *)(param_1 + 0x48),
                 CONCAT71((int7)((ulong)in_stack_ffffffffffffff20 >> 8),
                          *(undefined1 *)(param_1 + 0x68)) & 0xffffffffffffff01,
                 *(undefined8 *)(param_1 + 0x50),*(long *)(param_1 + 0x60) + -1);
      local_3c = 1;
    }
    else {
      uVar3 = *(ulong *)(param_1 + 0x58);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_scheduleManager_026c8208);
      _objc_retainAutoreleasedReturnValue();
      local_70 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_respondsToSelector__026ca818,PTR_s_addScheduleItem__026a8640);
      bVar1 = (uVar3 & 1) != 0;
      if (bVar1) {
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_addScheduleItem__026a8640,local_58);
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x58),PTR_s_saveOfficialMetaForItem_message__026c8370,
                   local_58,local_30,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30)
                   ,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                   *(undefined8 *)(param_1 + 0x48),
                   CONCAT71((int7)((ulong)in_stack_ffffffffffffff28 >> 8),
                            *(undefined1 *)(param_1 + 0x68)) & 0xffffffffffffff01,
                   *(undefined8 *)(param_1 + 0x50));
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x58),PTR_s_broadcastChanged_026c8298);
      }
      local_3c = (uint)!bVar1;
      _objc_storeStrong(&local_70,0);
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

