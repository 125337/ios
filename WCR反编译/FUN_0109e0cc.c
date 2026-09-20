// FUN_0109e0cc @ 0109e0cc

void FUN_0109e0cc(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  pcVar1 = local_18;
  FUN_0109a9f4();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefineMessageBlockSupport_026ce0f8;
  local_20 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineMessageBlockSupport_026ce0f8,PTR_s_isChatRoomID__0269ec68,pcVar1);
  if (((ulong)puVar2 & 1) == 0) {
    local_28 = &cf___;
  }
  else {
    local_28 = local_20;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

