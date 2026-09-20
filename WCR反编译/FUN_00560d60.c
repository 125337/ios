// FUN_00560d60 @ 00560d60

void FUN_00560d60(undefined8 param_1,undefined8 param_2,byte param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint local_a4;
  undefined *local_88;
  int local_80;
  byte local_79;
  undefined *local_78;
  undefined *local_70 [3];
  undefined *local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  byte local_39;
  undefined8 local_38;
  undefined8 local_30;
  undefined *local_28;
  
  local_48 = (undefined *)0x0;
  pcVar1 = &cf_Expression_67_2x;
  if ((param_3 & 1) == 0) {
    pcVar1 = &cf_Expression_68_2x;
  }
  local_39 = param_3;
  local_38 = param_2;
  local_30 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  puVar2 = PTR__OBJC_CLASS___NSBundle_026ce418;
  local_50 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSBundle_026ce418,PTR_s_mainBundle_026a0c28);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_pathForResource_ofType__026a3330,local_50,&cf_png);
  _objc_retainAutoreleasedReturnValue();
  local_79 = 0;
  local_a4 = 0;
  local_70[0] = puVar2;
  if (puVar2 != (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_79 = 1;
    local_78 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_a4 = (uint)puVar2;
  }
  if ((local_79 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  if ((local_a4 & 1) != 0) {
    puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,
               local_70[0]);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_48;
    local_48 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_48;
    if (local_48 != (undefined *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar2;
      local_80 = 1;
      goto LAB_00561240;
    }
  }
  if (local_48 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf__Applications_WeChat_app____png);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_88 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (((ulong)puVar2 & 1) == 0) {
LAB_00561154:
      local_80 = 0;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,local_88
                );
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_48;
      local_48 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_48;
      if (local_48 == (undefined *)0x0) goto LAB_00561154;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar2;
      local_80 = 1;
    }
    _objc_storeStrong(&local_88,0);
    if (local_80 != 0) goto LAB_00561240;
  }
  if (local_48 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageNamed__0269fd20,local_50);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_48;
    local_48 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_48;
    if (local_48 != (undefined *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar2;
      local_80 = 1;
      goto LAB_00561240;
    }
  }
  puVar2 = local_48;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = puVar2;
  local_80 = 1;
LAB_00561240:
  _objc_storeStrong(local_70);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

