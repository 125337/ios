// FUN_00532188 @ 00532188

void FUN_00532188(long param_1)

{
  long lVar1;
  long local_48;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = *(long *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_48 = 0;
  }
  else {
    local_48 = *(long *)(param_1 + 0x20);
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_48;
  if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
               *(undefined8 *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x30),
               *(undefined8 *)(param_1 + 0x38),0,0,*(undefined8 *)(param_1 + 0x40),0,local_48,
               local_48,local_48 != 0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
               *(undefined8 *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x30),
               *(undefined8 *)(param_1 + 0x38),0,0,*(undefined8 *)(param_1 + 0x40),0,local_48,
               local_48,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

