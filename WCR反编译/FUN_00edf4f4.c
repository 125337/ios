// FUN_00edf4f4 @ 00edf4f4

void FUN_00edf4f4(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_wcr_userNameFromContact__026ab750,local_20);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + 0x28);
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isChatRoomUserName__0269eff8,uVar1);
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__0269d180,local_30);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  return;
}

