// FUN_0039662c @ 0039662c

void FUN_0039662c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long local_38;
  undefined8 local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_nativeSessionFromObject__026a2c00,local_20);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x20);
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_usernameForNativeObject__026a2c08,uVar1);
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  if (lVar2 != 0) {
    uVar3 = *(ulong *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_containsObject__0269cbb8,local_38);
    if ((uVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x28),PTR_s_addObject__0269d180,local_38);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x30),PTR_s_addObject__0269d180,local_20);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

