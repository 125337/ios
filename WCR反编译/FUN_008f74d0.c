// FUN_008f74d0 @ 008f74d0

byte FUN_008f74d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong *param_4,
                 long *param_5)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_88;
  long local_80;
  ulong local_78;
  long local_70;
  ulong local_68;
  undefined4 local_60;
  long *local_50;
  ulong *local_48;
  ulong local_40;
  long local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_3);
  uVar1 = local_30;
  local_50 = param_5;
  local_48 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (((uVar1 == 0) ||
      (lVar2 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
      lVar2 == 0)) ||
     (uVar1 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
     uVar1 == 0)) {
    local_21 = 0;
    local_60 = 1;
  }
  else {
    uVar1 = local_30;
    FUN_008f7d38(local_30,&DAT_00003e80,1,0x10);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_38;
    local_68 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_stringByAppendingPathExtension__026a4580,&cf_wav);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_40;
    local_70 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_stringByAppendingPathComponent__026cab30,lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_68;
    local_78 = uVar1;
    FUN_008f798c(local_68,uVar1);
    if ((uVar3 & 1) == 0) {
      local_21 = 0;
      local_60 = 1;
    }
    else {
      lVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_stringByAppendingPathExtension__026a4580,&cf_m4a);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_40;
      local_80 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_stringByAppendingPathComponent__026cab30,lVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_78;
      local_88 = uVar1;
      FUN_008f5fc8(local_78,uVar1,*(undefined8 *)PTR__AVFileTypeAppleM4A_02578520,
                   *(undefined8 *)PTR__AVAssetExportPresetAppleM4A_02578498);
      uVar3 = local_78;
      uVar1 = local_88;
      if ((uVar4 & 1) == 0) {
        if (local_48 != (ulong *)0x0) {
          _objc_retainAutorelease();
          *local_48 = uVar3;
        }
        lVar2 = local_70;
        if (local_50 != (long *)0x0) {
          _objc_retainAutorelease();
          *local_50 = lVar2;
        }
      }
      else {
        if (local_48 != (ulong *)0x0) {
          _objc_retainAutorelease();
          *local_48 = uVar1;
        }
        lVar2 = local_80;
        if (local_50 != (long *)0x0) {
          _objc_retainAutorelease();
          *local_50 = lVar2;
        }
      }
      local_21 = 1;
      local_60 = 1;
      _objc_storeStrong(&local_88);
      _objc_storeStrong(&local_80,0);
    }
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

