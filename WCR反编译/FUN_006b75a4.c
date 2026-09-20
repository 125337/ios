// FUN_006b75a4 @ 006b75a4

void FUN_006b75a4(cfstringStruct *param_1,undefined8 param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_78;
  cfstringStruct *local_58;
  undefined1 local_4a;
  bool local_49;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  uint local_38;
  cfstringStruct *local_28;
  undefined8 local_20;
  cfstringStruct *local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028cc190)(param_1,param_2);
  if ((DAT_028cc1a0 & 1) != 0) {
    pcVar2 = local_18;
    FUN_006bf988();
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar2;
    FUN_006b8e24();
    if (((ulong)pcVar2 & 1) == 0) {
      local_38 = 1;
    }
    else {
      local_49 = false;
      bVar1 = local_28 == (cfstringStruct *)0x0;
      if (bVar1) {
        local_78 = &cf___;
      }
      else {
        local_78 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        local_48 = local_78;
      }
      local_49 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = local_78;
      if ((local_49 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_48);
      }
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_isEqualToString__0269ccc8,&cf_AddFriendEntryViewController);
      if (((ulong)pcVar2 & 1) == 0) {
        local_38 = 1;
      }
      else {
        pcVar2 = local_18;
        FUN_006bb580();
        local_4a = SUB81(pcVar2,0);
        if (((ulong)pcVar2 & 1) == 0) {
          local_38 = 1;
        }
        else {
          FUN_006b97b0();
          _objc_retainAutoreleasedReturnValue();
          local_58 = pcVar2;
          if (pcVar2 != (cfstringStruct *)0x0) {
            FUN_006bbc64(local_18,pcVar2);
          }
          local_38 = (uint)(pcVar2 == (cfstringStruct *)0x0);
          _objc_storeStrong(&local_58,0);
        }
      }
      _objc_storeStrong(&local_40,0);
    }
    _objc_storeStrong(&local_28,0);
  }
  return;
}

