// sessionStatsBoardPageIDs @ 0212d694

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::sessionStatsBoardPageIDs(ID param_1,SEL param_2)

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
  local_70 = &cf_summary;
  local_68 = &cf_watch;
  local_60 = &cf_chat;
  local_58 = &cf_groupMsg;
  local_50 = &cf_types;
  local_48 = &cf_gender;
  local_40 = &cf_region;
  local_38 = &cf_age;
  local_30 = &cf_speakers;
  local_28 = &cf_words;
  local_20 = &cf_ai;
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

