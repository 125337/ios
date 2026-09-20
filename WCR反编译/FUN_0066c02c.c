// FUN_0066c02c @ 0066c02c

void FUN_0066c02c(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_78;
  cfstringStruct *local_48;
  cfstringStruct *local_40 [3];
  cfstringStruct *local_28;
  uint local_1c;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == (cfstringStruct *)0x0) {
    local_1c = 1;
  }
  else {
    pcVar2 = local_18;
    FUN_0066af54();
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar2;
    FUN_006638c8();
    if (((ulong)pcVar2 & 1) == 0) {
      local_1c = 1;
    }
    else {
      pcVar2 = local_18;
      FUN_00662d08();
      _objc_retainAutoreleasedReturnValue();
      local_40[0] = pcVar2;
      FUN_00663124(pcVar2,local_18);
      _objc_retainAutoreleasedReturnValue();
      local_78 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_78 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = local_78;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_48;
      FUN_00663614();
      bVar1 = ((ulong)pcVar2 & 1) != 0;
      if (bVar1) {
        FUN_00663c28(local_18,PTR_s_setM_textForGreenLabel__026a62f8,&cf___);
        FUN_00663d9c(local_18,"_m_textForGreenLabel",&cf___);
        FUN_0066c2ac(0,local_18,PTR_s_setM_widthForGreenLabelText__026a6378);
        FUN_0066c3f8(0,local_18,"_m_widthForGreenLabelText");
        FUN_00663f60(local_18);
      }
      local_1c = (uint)!bVar1;
      _objc_storeStrong(&local_48);
      _objc_storeStrong(local_40,0);
    }
    _objc_storeStrong(&local_28,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

