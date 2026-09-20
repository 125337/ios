// FUN_005c6b14 @ 005c6b14

void FUN_005c6b14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined *local_98;
  char *local_90;
  undefined *local_88;
  long local_80;
  undefined4 local_78;
  char *local_68;
  long local_60;
  char *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_60 = 0;
  _objc_storeStrong(&local_60,param_3);
  pcVar1 = "WCUploadMedia";
  _objc_getClass();
  lVar3 = local_60;
  local_68 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    local_58 = (char *)0x0;
    local_78 = 1;
  }
  else {
    local_50 = &cf__jpg;
    local_48 = &cf__jpeg;
    local_40 = &cf__png;
    local_38 = &cf__heic;
    local_30 = &cf__gif;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50,5
              );
    _objc_retainAutoreleasedReturnValue();
    FUN_005c6174(lVar3,puVar2,0);
    _objc_retainAutoreleasedReturnValue();
    local_80 = lVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_80 == 0) {
      local_58 = (char *)0x0;
      local_78 = 1;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSData_026ce1d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,local_80);
      _objc_retainAutoreleasedReturnValue();
      local_88 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
      if (puVar2 == (undefined *)0x0) {
        local_58 = (char *)0x0;
        local_78 = 1;
      }
      else {
        pcVar1 = local_68;
        _objc_alloc_init();
        local_90 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_setType__026a3cb8,1);
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setBuffer__026a5518,local_88);
        puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,
                   local_80);
        _objc_retainAutoreleasedReturnValue();
        local_98 = puVar2;
        if (puVar2 == (undefined *)0x0) {
          uStack_a8 = *(undefined8 *)(PTR__CGSizeZero_025782f8 + 8);
          local_b0 = *(undefined8 *)PTR__CGSizeZero_025782f8;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_size_026cab00);
          local_b0 = param_1;
          uStack_a8 = param_2;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,uStack_a8,local_90,PTR_s_setImgSize__026a5520);
        pcVar1 = local_90;
        (*(code *)PTR__objc_retain_02578638)();
        local_58 = pcVar1;
        local_78 = 1;
        _objc_storeStrong(&local_98);
        _objc_storeStrong(&local_90,0);
      }
      _objc_storeStrong(&local_88,0);
    }
    _objc_storeStrong(&local_80,0);
  }
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_58);
  return;
}

