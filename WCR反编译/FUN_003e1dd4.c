// FUN_003e1dd4 @ 003e1dd4

void FUN_003e1dd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  long local_d0;
  long local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  long local_68;
  undefined8 local_60;
  cfstringStruct *local_58;
  undefined4 local_50;
  ulong local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  undefined8 local_20;
  long *local_18;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  uVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    lVar4 = local_30;
    (*DAT_028ca3b8)(local_30,local_38,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_50 = 1;
    local_28 = lVar4;
  }
  else {
    pcVar3 = &cf_Info_plist;
    FUN_003e6e28();
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar3;
    if ((pcVar3 == (cfstringStruct *)0x0) ||
       (uVar2 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,pcVar3),
       (uVar2 & 1) == 0)) {
      lVar4 = local_30;
      (*DAT_028ca3b8)(local_30,local_38,local_40);
      _objc_retainAutoreleasedReturnValue();
      local_28 = lVar4;
    }
    else {
      local_88 = PTR___NSConcreteGlobalBlock_02578658;
      local_80 = 0xd0800000;
      local_7c = 0;
      local_78 = FUN_003e705c;
      local_70 = &DAT_0257cf98;
      local_68 = local_30;
      local_60 = local_38;
      local_18 = &DAT_028ca478;
      local_20 = 0;
      _objc_storeStrong(&local_20,&local_88);
      if (*local_18 + 1 != 0) {
        _dispatch_once(*local_18 + 1,local_18,local_20);
      }
      _objc_storeStrong(&local_20,0);
      bVar1 = DAT_028ca470 == 0;
      if (bVar1) {
        local_d0 = local_30;
        (*DAT_028ca3b8)(local_30,local_38,local_40);
        _objc_retainAutoreleasedReturnValue();
        local_90 = local_d0;
      }
      else {
        local_d0 = DAT_028ca470;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = local_d0;
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
    }
    local_50 = 1;
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

