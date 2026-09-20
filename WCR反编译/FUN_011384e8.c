// FUN_011384e8 @ 011384e8

void FUN_011384e8(long param_1)

{
  ulong uVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_40;
  char *local_38;
  char *local_30;
  char *local_28;
  long local_20;
  long local_18;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isCancelled_026a1c20);
  if ((uVar1 & 1) == 0) {
    pcVar2 = "MMServiceCenter";
    _objc_getClass();
    local_28 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_performSelector__026ca7b8,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = "WCRedEnvelopesLogicMgr";
    local_30 = pcVar2;
    _objc_getClass();
    pcVar2 = local_30;
    local_38 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_performSelector_withObject__026ca7c0,PTR_s_getService__0269d170,pcVar3
              );
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar2;
    if (pcVar2 != (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_performSelector_withObject__026ca7c0,
                 PTR_s_OpenRedEnvelopesRequest__026a6a18,*(undefined8 *)(param_1 + 0x28));
    }
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_30,0);
  }
  return;
}

