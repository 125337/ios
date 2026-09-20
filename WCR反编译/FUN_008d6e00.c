// FUN_008d6e00 @ 008d6e00

/* WARNING: Removing unreachable block (ram,0x008d6f78) */

void FUN_008d6e00(long param_1)

{
  code *pcVar1;
  long lVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined4 local_38;
  byte local_21;
  long local_20;
  long local_18;
  
  local_21 = 0;
  lVar2 = *(long *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSS_MRO);
  }
  else {
    FUN_008cb7ec(*(undefined8 *)(param_1 + 0x20));
  }
  local_38 = 0;
  dVar3 = _dispatch_time(0,500000000);
  puVar4 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_60 = PTR___NSConcreteStackBlock_02578660;
  local_58 = 0xc0000000;
  local_54 = 0;
  local_50 = FUN_008d6fe8;
  local_48 = &DAT_025797b0;
  local_40 = *(undefined8 *)(param_1 + 0x28);
  _dispatch_after(dVar3,puVar4,&local_60);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  if ((local_21 & 1) == 0) {
    return;
  }
  _objc_exception_rethrow();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x8d6f68);
  (*pcVar1)();
}

