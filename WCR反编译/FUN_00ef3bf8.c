// FUN_00ef3bf8 @ 00ef3bf8

void FUN_00ef3bf8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *local_38;
  undefined4 local_2c;
  undefined8 local_28;
  ulong local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar2 = local_20;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  uVar5 = local_20;
  uVar1 = local_28;
  puVar3 = PTR_WCRefinePluginIconCatalog_026ce4e0;
  if (uVar2 == 0) {
    local_18 = (undefined *)0x0;
    local_2c = 1;
  }
  else {
    FUN_00eff424();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,puVar3,PTR_s_displayImageForIconValue_size_co_026a3cf8,uVar5);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    puVar3 = local_38;
    if (local_38 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageNamed__0269fd20,local_20);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_38;
      local_38 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      if (local_38 == (undefined *)0x0) {
        uVar5 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasSuffix__0269d018,&cf__dark);
        puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
        if ((uVar5 & 1) == 0) {
          uVar5 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_stringByAppendingString__0269d398,&cf__dark);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_imageNamed__0269fd20);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = local_38;
          local_38 = puVar3;
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_release_02578630)(uVar5);
        }
      }
      puVar3 = local_38;
      FUN_00eff5d8(local_28);
      _objc_retainAutoreleasedReturnValue();
      local_18 = puVar3;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar3;
    }
    local_2c = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

