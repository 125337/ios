// FUN_000c9a18 @ 000c9a18

byte FUN_000c9a18(double param_1,undefined8 param_2,double *param_3)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  double dVar3;
  double dVar4;
  double local_68;
  long local_58;
  long local_50;
  cfstringStruct *local_48;
  double local_40;
  undefined4 local_38;
  double *local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar1 = local_20;
  local_28 = param_3;
  FUN_000c6ff8();
  if ((uVar1 & 1) == 0) {
    local_11 = 0;
  }
  else {
    FUN_000c9c74();
    local_40 = param_1;
    if (param_1 <= 1.0) {
      DAT_028c8258 = DAT_028c8258 + 1;
      pcVar2 = &cf_chatViewControllerWidth;
      _NSSelectorFromString();
      uVar1 = local_20;
      local_48 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar2);
      if ((uVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_20,local_48);
        local_40 = param_1;
      }
      DAT_028c8258 = DAT_028c8258 + -1;
    }
    if (1.0 < local_40) {
      local_50 = 0;
      local_58 = 0;
      FUN_000c7cdc(local_20,&local_50,&local_58);
      dVar3 = local_40 - (double)(local_50 + local_58);
      dVar4 = dVar3;
      FUN_000c7e24();
      local_68 = (double)(long)(dVar3 - dVar4 * 2.0);
      if (local_68 < 88.0) {
        local_68 = 88.0;
      }
      if (local_28 != (double *)0x0) {
        *local_28 = local_68;
      }
      local_11 = 1;
    }
    else {
      local_11 = 0;
    }
  }
  local_38 = 1;
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

