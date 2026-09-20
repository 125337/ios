// FUN_00744dd0 @ 00744dd0

/* WARNING: Removing unreachable block (ram,0x00744ed4) */

void FUN_00744dd0(long param_1)

{
  code *pcVar1;
  dispatch_time_t dVar2;
  undefined *puVar3;
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
  local_20 = param_1;
  local_18 = param_1;
  FUN_00744f54(*(undefined8 *)(param_1 + 0x20));
  local_38 = 0;
  dVar2 = _dispatch_time(0,500000000);
  puVar3 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_60 = PTR___NSConcreteStackBlock_02578660;
  local_58 = 0xc0000000;
  local_54 = 0;
  local_50 = FUN_007452f0;
  local_48 = &DAT_025797b0;
  local_40 = *(undefined8 *)(param_1 + 0x20);
  _dispatch_after(dVar2,puVar3,&local_60);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if ((local_21 & 1) == 0) {
    return;
  }
  _objc_exception_rethrow();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x744ec4);
  (*pcVar1)();
}

