// FUN_003b4b34 @ 003b4b34

bool FUN_003b4b34(undefined8 param_1)

{
  bool bVar1;
  segment_command *psVar2;
  segment_command *psVar3;
  cfstringStruct *local_38;
  segment_command *local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  psVar2 = (segment_command *)PTR_WCRefineGroupManager_026ce2b8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  if (local_18 == (cfstringStruct *)0x0) {
    local_38 = &cf___;
  }
  else {
    local_38 = local_18;
  }
  psVar3 = psVar2;
  (*(code *)PTR__objc_msgSend_02578628)(psVar2,PTR_s_groupForId__026a27e0,local_38);
  _objc_retainAutoreleasedReturnValue();
  local_20 = psVar3;
  (*(code *)PTR__objc_release_02578630)(psVar2);
  psVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_kind_026a27e8);
  bVar1 = false;
  if (psVar2 == (segment_command *)((long)&MACH_HEADER.magic + 3)) {
    psVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_scope_0269ea90);
    bVar1 = psVar2 == &segment_command_00000020;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return bVar1;
}

