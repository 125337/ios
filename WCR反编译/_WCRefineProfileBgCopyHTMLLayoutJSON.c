// _WCRefineProfileBgCopyHTMLLayoutJSON @ 01cf3210

void _WCRefineProfileBgCopyHTMLLayoutJSON(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  long local_58;
  undefined *local_50;
  long local_48;
  ulong local_40;
  uint local_34;
  long local_30;
  ulong local_28;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar2 = local_18;
  _WCRefineProfileBgSafePathComponent();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = local_20;
  local_28 = uVar2;
  _WCRefineProfileBgSafePathComponent();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_28;
  local_30 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (((uVar2 == 0) ||
      (lVar3 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
      lVar3 == 0)) ||
     (uVar2 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,local_30),
     (uVar2 & 1) != 0)) {
    local_34 = 1;
  }
  else {
    uVar2 = local_28;
    FUN_01cf1aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_30;
    local_40 = uVar2;
    FUN_01cf1aa0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_48 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_fileExistsAtPath__026ca630,local_40);
    bVar1 = ((ulong)puVar4 & 1) != 0;
    if (bVar1) {
      lVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_stringByDeletingLastPathComponen_0269fb90);
      _objc_retainAutoreleasedReturnValue();
      local_58 = lVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_createDirectoryAtPath_withInterm_0269e230,lVar3,1,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_removeItemAtPath_error__0269f910,local_48,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_copyItemAtPath_toPath_error__026a1758,local_40,local_48,0);
      _objc_storeStrong(&local_58,0);
    }
    local_34 = (uint)!bVar1;
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

