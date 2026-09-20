// FUN_01eced3c @ 01eced3c

void FUN_01eced3c(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_38 = 0;
  local_2c = param_4;
  _objc_storeStrong(&local_38,param_5);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 != 0) {
    _objc_storeStrong(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28,local_20);
    lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
    if (lVar1 == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_toDoImageExtensionFromDataUTI__026c7c88,local_28);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uVar3 = *(undefined8 *)(lVar1 + 0x28);
      *(undefined8 *)(lVar1 + 0x28) = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

