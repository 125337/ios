// FUN_002ee5a4 @ 002ee5a4

void FUN_002ee5a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  long local_a0;
  long local_88;
  char *local_60 [3];
  char *local_48;
  long local_40;
  long local_38;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  if (DAT_028c99b8 == 0) {
    local_88 = *(long *)(param_1 + 0x20);
  }
  else {
    local_88 = DAT_028c99b8;
  }
  local_30 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_88;
  if (DAT_028c99c0 == 0) {
    local_a0 = *(long *)(param_1 + 0x28);
  }
  else {
    local_a0 = DAT_028c99c0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_a0;
  if (local_38 != 0) {
    pcVar1 = "GameController";
    _objc_getClass();
    local_48 = pcVar1;
    if (pcVar1 != (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_getMD5ByGameContent__026a1e70,*(undefined8 *)(param_1 + 0x30));
      _objc_retainAutoreleasedReturnValue();
      local_60[0] = pcVar1;
      if (pcVar1 != (char *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setM_nsEmoticonMD5__026a1e78,pcVar1);
      }
      _objc_storeStrong(local_60,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setM_uiGameContent__026a1e80,*(undefined8 *)(param_1 + 0x30));
    (*DAT_028c99c8)(local_20,*(undefined8 *)(param_1 + 0x38),local_40,local_38);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

