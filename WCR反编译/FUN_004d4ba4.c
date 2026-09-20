// FUN_004d4ba4 @ 004d4ba4

/* WARNING: Type propagation algorithm not settling */

void FUN_004d4ba4(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 local_68;
  ulong local_60 [2];
  undefined *local_50;
  undefined4 local_48;
  char *local_38;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  pcVar1 = "CMessageWrap";
  _objc_getClass();
  local_38 = pcVar1;
  if ((pcVar1 == (char *)0x0) ||
     (uVar2 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isKindOfClass__0269cd68,pcVar1),
     (uVar2 & 1) == 0)) {
    (*DAT_028cacf8)(local_18,local_20,local_28,local_30);
    local_48 = 1;
  }
  else {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_uiMessageType_0269d0a8);
    local_50 = (undefined *)(long)(int)uVar2;
    if ((local_50 == &DAT_00002710) || (local_50 == &UNK_00002712)) {
      (*DAT_028cacf8)(local_18,local_20,local_28,local_30);
      local_48 = 1;
    }
    else {
      local_60[1] = 0;
      local_68 = 0;
      uVar2 = local_30;
      FUN_004d5f78(local_30,local_28,&local_68);
      _objc_retainAutoreleasedReturnValue();
      _objc_storeStrong(local_60 + 1,local_68);
      local_60[0] = uVar2;
      if (uVar2 == 0) {
        (*DAT_028cacf8)(local_18,local_20,local_28,local_30);
        local_48 = 1;
      }
      else {
        uVar2 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_DelMsg_MsgWrap__026a4198);
        if ((uVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_DelMsg_MsgWrap__026a4198,local_28,local_30);
        }
        uVar2 = local_60[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_length_0269cca0);
        if (uVar2 != 0) {
          FUN_004d71a4(uVar2,local_18,local_28,local_30,local_60[0]);
        }
        local_48 = 0;
      }
      _objc_storeStrong(local_60);
      _objc_storeStrong(local_60 + 1,0);
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

