// FUN_00fc98e4 @ 00fc98e4

void FUN_00fc98e4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  ulong local_50;
  undefined *local_48;
  ulong local_40;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  long local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if (local_28 == 0) {
    local_18 = 0;
    local_2c = 1;
  }
  else {
    uVar1 = local_28;
    _UIImageJPEGRepresentation();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
    if (uVar1 == 0) {
      local_18 = 0;
      local_2c = 1;
    }
    else {
      _NSTemporaryDirectory();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_40 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      lVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_lastPathComponent_026ca780);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_stringWithFormat__0269cca8,&cf_vthumb_____lld_jpg);
      _objc_retainAutoreleasedReturnValue();
      local_48 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(lVar5);
      (*(code *)PTR__objc_release_02578630)(lVar4);
      uVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_stringByAppendingPathComponent__026cab30,local_48);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_38;
      local_50 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_writeToFile_atomically__0269f928,uVar1,1)
      ;
      local_18 = local_50;
      if ((uVar2 & 1) == 0) {
        local_18 = 0;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
      }
      local_2c = 1;
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_48,0);
      _objc_storeStrong(&local_40,0);
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

