// FUN_009330cc @ 009330cc

void FUN_009330cc(void)

{
  int iVar1;
  cfstringStruct *pcVar2;
  undefined1 auStack_68 [8];
  long local_60;
  cfstringStruct *local_48;
  undefined1 local_40 [40];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  iVar1 = 0x92d880;
  _dladdr(_WCRefineCrashReporterLogDirectory,auStack_68);
  if ((iVar1 == 0) || (local_60 == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = &cf_image__unknown_;
  }
  else {
    _memset(local_40,0,0x28);
    FUN_0093353c(local_60,local_40,0x28);
    pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_i);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar2;
  }
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_48);
  return;
}

