// supportedAudioExtensions @ 015b30bc

/* Function Stack Size: 0x10 bytes */

ID WCRefineVoicePackStore::supportedAudioExtensions(ID param_1,SEL param_2)

{
  undefined *puVar1;
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
  local_70 = &cf_silk;
  local_68 = &cf_slk;
  local_60 = &cf_aud;
  local_58 = &cf_mp3;
  local_50 = &cf_wav;
  local_48 = &cf_m4a;
  local_40 = &cf_aac;
  local_38 = &cf_amr;
  local_30 = &cf_caf;
  local_28 = &cf_mp4;
  local_20 = &cf_mov;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_70,0xb
            );
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return (ID)puVar1;
}

