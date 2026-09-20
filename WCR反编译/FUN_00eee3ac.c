// FUN_00eee3ac @ 00eee3ac

void FUN_00eee3ac(undefined8 param_1)

{
  bool bVar1;
  char *pcVar2;
  long lVar3;
  char *local_40;
  char *local_30;
  char *local_28;
  long local_20;
  char *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  pcVar2 = "CContactMgr";
  _objc_getClass();
  FUN_00ef5980();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = local_20;
  local_28 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  bVar1 = false;
  if (lVar3 != 0) {
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178);
    if (((ulong)pcVar2 & 1) != 0) {
      local_40 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_getContactByName__0269d178,local_20);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_30 = local_40;
      goto LAB_00eee48c;
    }
  }
  local_40 = (char *)0x0;
LAB_00eee48c:
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_40;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

