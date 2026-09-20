// FUN_00410bd8 @ 00410bd8

void FUN_00410bd8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
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
  local_70 = &cf_<msg;
  local_68 = &cf_<appmsg;
  local_60 = &cf_<emoji;
  local_58 = &cf_<img;
  local_50 = &cf_<voicemsg;
  local_48 = &cf_<videomsg;
  local_40 = &cf_<recorditem;
  local_38 = &cf_<mmreader;
  local_30 = &cf_<sysmsg;
  local_28 = &cf_<finder;
  local_20 = &cf_<location;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_70,0xb
            );
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028ca778;
  DAT_028ca778 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

