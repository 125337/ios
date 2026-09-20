// FUN_00677fa4 @ 00677fa4

void FUN_00677fa4(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = param_1;
  FUN_00677084();
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  DAT_028cbcd8 = 0;
  _objc_sync_exit(lVar1);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  _WCRPatSendBypassConfirmBegin();
  uVar2 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_sendPat__026a63a8);
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_sendPat__026a63a8,
               *(undefined8 *)(param_1 + 0x28));
  }
  _WCRPatSendBypassConfirmEnd();
  _objc_storeStrong(&local_20,0);
  return;
}

