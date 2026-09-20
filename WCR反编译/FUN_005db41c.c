// FUN_005db41c @ 005db41c

void FUN_005db41c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  char *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong local_88;
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
  pcVar2 = "CMessageWrap";
  _objc_getClass();
  if ((pcVar2 == (char *)0x0) ||
     (uVar3 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isKindOfClass__0269cd68,pcVar2),
     (uVar3 & 1) == 0)) {
    (*DAT_028cb7d8)(local_18,local_20,local_28,local_30);
  }
  else {
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_uiMessageType_0269d0a8);
    iVar1 = (int)uVar3;
    if ((iVar1 == 0x31) || (iVar1 == 0x4c)) {
      if (iVar1 == 0x4c) {
        local_88 = 0x4c;
      }
      else {
        uVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_nsContent_0269d0a0);
        _objc_retainAutoreleasedReturnValue();
        local_88 = uVar3;
        FUN_005db830();
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      if (local_88 == 0x4c) {
        puVar4 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar4);
        uVar3 = local_30;
        FUN_005dbdd4();
        if ((((ulong)puVar5 & 1) == 0) || ((uVar3 & 1) != 0)) {
          (*DAT_028cb7d8)(local_18,local_20,local_28,local_30);
        }
        else {
          uVar3 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_DelMsg_MsgWrap__026a4198);
          if ((uVar3 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_18,PTR_s_DelMsg_MsgWrap__026a4198,local_28,local_30);
          }
        }
      }
      else {
        (*DAT_028cb7d8)(local_18,local_20,local_28,local_30);
      }
    }
    else {
      (*DAT_028cb7d8)(local_18,local_20,local_28,local_30);
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

