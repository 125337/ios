// FUN_005a59a4 @ 005a59a4

void FUN_005a59a4(long param_1)

{
  bool bVar1;
  char *pcVar2;
  char *local_70;
  char *local_48;
  char *local_30;
  char *local_28;
  long local_20;
  long local_18;
  
  pcVar2 = "WCFacade";
  local_20 = param_1;
  local_18 = param_1;
  _objc_getClass();
  FUN_005a5ba4();
  _objc_retainAutoreleasedReturnValue();
  bVar1 = false;
  local_28 = pcVar2;
  if ((pcVar2 == (char *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_uploadMgr_026a54c8),
     ((ulong)pcVar2 & 1) == 0)) {
    local_70 = (char *)0x0;
  }
  else {
    local_70 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_uploadMgr_026a54c8);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    local_48 = local_70;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_70;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  if ((local_30 != (char *)0x0) &&
     (pcVar2 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_addUploadTask__026a54d0),
     ((ulong)pcVar2 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addUploadTask__026a54d0,*(undefined8 *)(param_1 + 0x20));
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

