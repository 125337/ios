// FUN_008f0698 @ 008f0698

ulong FUN_008f0698(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 local_a0;
  undefined8 local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_98 = 0;
  _objc_storeStrong(&local_98,param_1);
  uVar1 = local_98;
  FUN_008e5574();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_a0 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  local_90 = &cf_mp3;
  local_88 = &cf_m4a;
  local_80 = &cf_aac;
  local_78 = &cf_wav;
  local_70 = &cf_caf;
  local_68 = &cf_aiff;
  local_60 = &cf_aif;
  local_58 = &cf_flac;
  local_50 = &cf_ogg;
  local_48 = &cf_opus;
  local_40 = &cf_amr;
  local_38 = &cf_aud;
  local_30 = &cf_silk;
  local_28 = &cf_slk;
  local_20 = &cf_spx;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_90,0xf
            );
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_a0);
  _objc_storeStrong(&local_98,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return (ulong)puVar4 & 0xffffffff;
}

