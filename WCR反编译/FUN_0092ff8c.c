// FUN_0092ff8c @ 0092ff8c

void FUN_0092ff8c(void)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  exception_ptr *unaff_x20;
  char *local_4c0;
  exception_ptr aeStack_470 [16];
  cfstringStruct *local_460;
  int local_454;
  undefined *local_450;
  char **local_448;
  int local_42c;
  void *apvStack_428 [128];
  undefined8 local_28;
  
  local_28 = *(undefined8 *)PTR____stack_chk_guard_02578670;
  uVar2 = 0;
  _OSAtomicCompareAndSwap32(0,1,&DAT_028cf3b0);
  if ((uVar2 & 1) != 0) {
    local_42c = _backtrace(apvStack_428,0x80);
    local_448 = _backtrace_symbols(apvStack_428,local_42c);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_450 = puVar3;
    for (local_454 = 0; puVar3 = local_450, local_454 < local_42c && local_448 != (char **)0x0;
        local_454 = local_454 + 1) {
      local_4c0 = local_448[local_454];
      if (local_4c0 == (char *)0x0) {
        local_4c0 = "";
      }
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithUTF8String__0269fd30,local_4c0)
      ;
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    if (local_448 != (char **)0x0) {
      _free(local_448);
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_460 = &cf_std__terminate;
    uVar2 = 0;
    std::current_exception();
    FUN_00935738();
    if ((uVar2 & 1) != 0) {
      std::exception_ptr::exception_ptr(unaff_x20,aeStack_470);
      std::rethrow_exception(aeStack_470);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x9301f4);
      (*pcVar1)();
    }
    FUN_00931a0c(&cf_Terminate,&cf_std__terminate,local_460,local_450,0);
    std::exception_ptr::~exception_ptr(unaff_x20);
    _objc_storeStrong(&local_460);
    _objc_storeStrong(&local_450,0);
  }
  if ((DAT_028ce3a0 != (code *)0x0) && (DAT_028ce3a0 != FUN_0092ff8c)) {
    (*DAT_028ce3a0)();
  }
                    /* WARNING: Subroutine does not return */
  _abort();
}

