// FUN_0064be3c @ 0064be3c

void FUN_0064be3c(cfstringStruct *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  cfstringStruct *pcVar3;
  undefined8 uVar4;
  cfstringStruct *local_c0;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_48;
  undefined8 local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  cfstringStruct *pcVar2;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  pcVar2 = local_28;
  (*DAT_028cbba0)(local_28,local_30,local_38);
  uVar1 = (uint)pcVar2;
  FUN_006620a0();
  if ((uVar1 & 1) == 0) {
    local_48 = 1;
  }
  else {
    pcVar2 = local_28;
    FUN_0067428c(local_28,&cf_MainFrameItemView);
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar2;
    FUN_0066e298();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_28;
    local_58 = pcVar2;
    FUN_0066cee4();
    _objc_retainAutoreleasedReturnValue();
    local_60 = pcVar3;
    FUN_006627f0();
    if ((((ulong)pcVar3 & 1) != 0) ||
       (pcVar2 = local_60,
       (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_hasPrefix__0269d320,&cf___),
       ((ulong)pcVar2 & 1) != 0)) {
      FUN_0066e134(local_28,&cf___);
      _objc_storeStrong(&local_60,&cf___);
    }
    pcVar2 = local_58;
    FUN_00662d08();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    FUN_00663124();
    _objc_retainAutoreleasedReturnValue();
    local_c0 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_c0 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_c0;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_68;
    FUN_00663614();
    if ((((ulong)pcVar2 & 1) == 0) || (pcVar2 = local_60, FUN_006638c8(), ((ulong)pcVar2 & 1) == 0))
    {
      if ((local_58 != (cfstringStruct *)0x0) &&
         (pcVar2 = local_60, FUN_00666cb0(), ((ulong)pcVar2 & 1) != 0)) {
        pcVar2 = local_58;
        FUN_0066af54();
        _objc_retainAutoreleasedReturnValue();
        local_70 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isEqualToString__0269ccc8,local_60);
        if ((((ulong)pcVar2 & 1) != 0) ||
           ((pcVar2 = local_70,
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0),
            pcVar2 == (cfstringStruct *)0x0 &&
            (pcVar2 = local_60, FUN_006620c0(), ((ulong)pcVar2 & 1) != 0)))) {
          FUN_0066426c(local_58,local_60,&cf_updateWithTypes);
        }
        _objc_storeStrong(&local_70,0);
      }
      pcVar2 = local_50;
      FUN_0066db9c();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_38;
      FUN_0066db9c();
      _objc_retainAutoreleasedReturnValue();
      FUN_00657450(&cf_H);
      (*(code *)PTR__objc_release_02578630)(uVar4);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      if ((local_50 != (cfstringStruct *)0x0) &&
         (pcVar2 = local_50, FUN_0066cfc4(), ((ulong)pcVar2 & 1) != 0)) {
        FUN_0066d7d0(local_50,0);
        pcVar2 = local_58;
        FUN_0066c6c4();
        if (((ulong)pcVar2 & 1) == 0) {
          FUN_0066d970(local_50);
        }
        else {
          FUN_0066d09c(local_50,local_58);
        }
      }
      if (local_50 != (cfstringStruct *)0x0) {
        FUN_0066dcbc(local_50,0,&cf_RedTipsLabelupdateWithTypes);
      }
      local_48 = 0;
    }
    else {
      FUN_0066e134(local_28,&cf___);
      FUN_0066c02c(local_58);
      FUN_00663f60(local_58);
      _objc_storeStrong(&local_60,&cf___);
      if (local_50 != (cfstringStruct *)0x0) {
        FUN_0066dcbc(local_50,local_58,&cf_RedTipsLabelscrub_service);
      }
      local_48 = 1;
    }
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

