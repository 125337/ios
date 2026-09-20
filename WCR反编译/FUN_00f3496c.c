// FUN_00f3496c @ 00f3496c

/* WARNING: Type propagation algorithm not settling */

void FUN_00f3496c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long local_30 [4];
  
  local_30[2] = 0;
  local_30[3] = param_1;
  _objc_storeStrong(local_30 + 2);
  local_30[1] = 0;
  _objc_storeStrong(local_30 + 1,param_3);
  local_30[0] = 0;
  _objc_storeStrong(local_30,param_4);
  if (local_30[0] == 0) {
    lVar3 = local_30[2];
    (*(code *)PTR__objc_msgSend_02578628)(local_30[2],PTR_s_length_0269cca0);
    if (lVar3 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x38);
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_decryptEmoticonData_aesKey__026ac038,local_30[2],
                 *(undefined8 *)(param_1 + 0x20));
      _objc_retainAutoreleasedReturnValue();
      lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uVar2 = *(undefined8 *)(lVar3 + 0x28);
      *(undefined8 *)(lVar3 + 0x28) = uVar1;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
  }
  _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(param_1 + 0x28));
  _objc_storeStrong(local_30);
  _objc_storeStrong(local_30 + 1,0);
  _objc_storeStrong(local_30 + 2,0);
  return;
}

