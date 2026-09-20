// FUN_0026b920 @ 0026b920

byte FUN_0026b920(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasPrefix__0269d320,&cf_http___);
    if (((uVar2 & 1) == 0) &&
       (uVar2 = local_20,
       (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasPrefix__0269d320,&cf_https___),
       (uVar2 & 1) == 0)) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_stringByExpandingTildeInPath_026a1420);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      local_38 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_11 = ((ulong)puVar3 & 1) != 0;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      local_30 = 1;
      _objc_storeStrong(&local_38,0);
    }
    else {
      local_11 = 0;
      local_30 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

