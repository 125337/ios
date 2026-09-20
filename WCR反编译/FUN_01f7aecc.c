// FUN_01f7aecc @ 01f7aecc

void FUN_01f7aecc(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  ulong local_50;
  undefined4 local_44;
  ulong local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = 0;
  _objc_storeStrong(&local_40,param_1);
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isDirectory_026b0ba0);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_name_0269d828);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_30 = &cf_zip;
    local_28 = &cf_rar;
    local_20 = &cf_7z;
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,3
              );
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    if (((ulong)puVar5 & 1) == 0) {
      pcVar6 = &cf_fileicon_music;
      FUN_01f728a0(0x4041800000000000,&cf_fileicon_music,0,&cf_music_note);
      _objc_retainAutoreleasedReturnValue();
      local_38 = pcVar6;
    }
    else {
      pcVar6 = &cf_fileicon_zip;
      FUN_01f728a0(0x4041800000000000,&cf_fileicon_zip,0,&cf_archivebox);
      _objc_retainAutoreleasedReturnValue();
      local_38 = pcVar6;
    }
    local_44 = 1;
    _objc_storeStrong(&local_50,0);
  }
  else {
    FUN_01f81d3c();
    _objc_retainAutoreleasedReturnValue();
    pcVar6 = &cf_icons_filled_folder;
    FUN_01f728a0(0x4041800000000000,&cf_icons_filled_folder,uVar1,&cf_folder_fill);
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar6;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_44 = 1;
  }
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_38);
  return;
}

