// FUN_00296110 @ 00296110

void FUN_00296110(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_50;
  undefined *local_48 [3];
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = (undefined *)0x0;
    local_24 = 1;
  }
  else {
    uVar1 = local_20;
    _UIImageJPEGRepresentation();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
    if (uVar1 == 0) {
      uVar2 = local_20;
      _UIImagePNGRepresentation();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_30;
      local_30 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    if (uVar1 == 0) {
      local_18 = (undefined *)0x0;
      local_24 = 1;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_stringWithFormat__0269cca8,&cf_finder_cover__lld_jpg);
      _objc_retainAutoreleasedReturnValue();
      local_48[0] = puVar4;
      (*(code *)PTR__objc_release_02578630)();
      FUN_0027215c();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_50 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_writeToFile_atomically__0269f928,local_50,1);
      local_18 = local_50;
      if ((uVar1 & 1) == 0) {
        local_18 = (undefined *)0x0;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
      }
      local_24 = 1;
      _objc_storeStrong(&local_50);
      _objc_storeStrong(local_48,0);
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

