// FUN_0052d8e8 @ 0052d8e8

undefined1 * FUN_0052d8e8(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *local_20;
  undefined1 *local_18;
  
  local_20 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_18 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_momentsSpecialFollowHistoryCount_026a4ba0);
  if ((long)local_20 < 1) {
    local_20 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  }
  puVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_momentsSpecialFollowAction_026a4ba8);
  iVar2 = 10;
  if (puVar1 != (undefined1 *)0x0) {
    iVar2 = 0x32;
  }
  if ((long)iVar2 < (long)local_20) {
    local_20 = (undefined1 *)(long)iVar2;
  }
  _objc_storeStrong(&local_18,0);
  return local_20;
}

