// FUN_0070d958 @ 0070d958

void FUN_0070d958(long param_1)

{
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_showFrameToast__026a7620,local_20);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

