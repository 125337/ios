// FUN_015a8ea4 @ 015a8ea4

void FUN_015a8ea4(long param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *local_28;
  long local_20;
  long local_18;
  
  puVar2 = PTR_WCRefineHelper_026ce000;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_getCurrentUserWxid_0269e148);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(ulong *)(param_1 + 0x20);
  local_28 = puVar2;
  _WCRefineSendVoiceDataToChat
            (uVar3,*(undefined4 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),puVar2);
  pcVar1 = (cfstringStruct *)0x0;
  if ((uVar3 & 1) == 0) {
    pcVar1 = &cf_S1Y_;
  }
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),(byte)uVar3 & 1,pcVar1);
  _objc_storeStrong(&local_28,0);
  return;
}

