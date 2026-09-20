// FUN_01f0e378 @ 01f0e378

byte FUN_01f0e378(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *local_58;
  long local_50;
  ulong local_48;
  undefined4 local_3c;
  long local_38;
  ulong local_30;
  long local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar1 = local_20;
  FUN_01f06ca8();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_28;
  local_30 = uVar1;
  FUN_01f06ca8();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_30;
  local_38 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (((uVar1 == 0) ||
      (lVar2 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
      lVar2 == 0)) ||
     (uVar1 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,local_38),
     (uVar1 & 1) != 0)) {
    local_11 = 0;
    local_3c = 1;
  }
  else {
    uVar1 = local_30;
    FUN_01f0f4dc();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    lVar2 = local_38;
    FUN_01f0f4dc();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_50 = lVar4;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_fileExistsAtPath__026ca630,local_48);
    if (((ulong)puVar5 & 1) == 0) {
      local_11 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_removeItemAtPath_error__0269f910,local_50);
      puVar5 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_copyItemAtPath_toPath_error__026a1758,local_48,local_50,0);
      local_11 = (byte)puVar5 & 1;
    }
    local_3c = 1;
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

