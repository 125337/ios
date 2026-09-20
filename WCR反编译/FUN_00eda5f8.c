// FUN_00eda5f8 @ 00eda5f8

void FUN_00eda5f8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  ulong uVar4;
  ulong local_38 [3];
  long local_20;
  long local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 0x30);
    pcVar3 = "CMessageMgr";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_wcr_service__026ab620,pcVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_s_RevokeMsg_MsgWrap_Counter__026ab700;
    local_38[0] = uVar4;
    if ((uVar4 != 0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_respondsToSelector__026ca818,
                   PTR_s_RevokeMsg_MsgWrap_Counter__026ab700), (uVar4 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38[0],puVar1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                 0);
    }
    _objc_storeStrong(local_38,0);
  }
  return;
}

