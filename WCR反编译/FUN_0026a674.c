// FUN_0026a674 @ 0026a674

byte FUN_0026a674(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_48;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  FUN_0026a464();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar2;
  if (uVar2 == 0) {
    local_11 = 0;
    local_38 = 1;
    goto LAB_0026aa28;
  }
  FUN_0026bec0();
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar2;
  FUN_00269660(uVar2,"_favDownloadMgr");
  _objc_retainAutoreleasedReturnValue();
  local_48 = uVar2;
  if (uVar2 == 0) {
    uVar3 = local_40;
    FUN_0026c118(local_40,&cf__favDownloadMgr);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_48;
    local_48 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  puVar1 = PTR_s_startDownloadItem_IsPriority__026a1460;
  if (local_48 == 0) {
LAB_0026a884:
    puVar1 = PTR_s_startDownloadFavoritesItem_IsPri_026a1468;
    if (local_40 != 0) {
      uVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_respondsToSelector__026ca818,
                 PTR_s_startDownloadFavoritesItem_IsPri_026a1468);
      if ((uVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,puVar1,local_28,0);
        local_11 = 1;
        goto LAB_0026a9e8;
      }
    }
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_StartDownload_0269daf0);
    if ((uVar2 & 1) == 0) {
      local_11 = 0;
    }
    else {
      uVar2 = local_20;
      FUN_0026b798(local_20,PTR_s_StartDownload_0269daf0,0);
      local_11 = (byte)uVar2 & 1;
    }
  }
  else {
    uVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_respondsToSelector__026ca818,
               PTR_s_startDownloadItem_IsPriority__026a1460);
    if ((uVar2 & 1) == 0) goto LAB_0026a884;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,puVar1,local_28,0);
    local_11 = 1;
  }
LAB_0026a9e8:
  local_38 = 1;
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
LAB_0026aa28:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

