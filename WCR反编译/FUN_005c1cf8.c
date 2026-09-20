// FUN_005c1cf8 @ 005c1cf8

void FUN_005c1cf8(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  long local_28;
  long local_20;
  char *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar2 = local_20;
  FUN_005a19c8();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = "FavoritesUtil";
  local_28 = lVar2;
  _objc_getClass();
  puVar1 = PTR_s_ConvertFinderFeedMsg2FavItem__026a5a10;
  if (((local_28 == 0) || (pcVar3 == (char *)0x0)) ||
     (pcVar4 = pcVar3,
     (*(code *)PTR__objc_msgSend_02578628)
               (pcVar3,PTR_s_respondsToSelector__026ca818,
                PTR_s_ConvertFinderFeedMsg2FavItem__026a5a10), ((ulong)pcVar4 & 1) == 0)) {
    local_18 = (char *)0x0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,puVar1,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar3;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

