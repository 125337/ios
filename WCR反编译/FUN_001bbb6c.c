// FUN_001bbb6c @ 001bbb6c

void FUN_001bbb6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (local_28 == 0) {
    (*DAT_028c8b18)(local_18,local_20,0);
    local_38 = 1;
    goto LAB_001bbd14;
  }
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_d__);
  if ((uVar1 & 1) != 0) {
    FUN_001eb250();
    if ((uVar1 & 1) != 0) {
      FUN_001eb2ec();
      _objc_retainAutoreleasedReturnValue();
      local_40 = uVar1;
      if (uVar1 == 0) {
LAB_001bbcb8:
        (*DAT_028c8b18)(local_18,local_20,local_28);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
        if (uVar1 == 0) goto LAB_001bbcb8;
        (*DAT_028c8b18)(local_18,local_20,local_40);
      }
      local_38 = 1;
      _objc_storeStrong(&local_40,0);
      goto LAB_001bbd14;
    }
  }
  (*DAT_028c8b18)(local_18,local_20,local_28);
  local_38 = 0;
LAB_001bbd14:
  _objc_storeStrong(&local_28,0);
  return;
}

