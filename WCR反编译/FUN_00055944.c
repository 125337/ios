// FUN_00055944 @ 00055944

byte FUN_00055944(undefined8 param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  char *local_68;
  undefined *local_60;
  char *local_58;
  undefined *local_50;
  undefined4 local_44;
  undefined *local_40;
  undefined8 *local_28;
  undefined8 local_20;
  byte local_11;
  
  puVar1 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar1,param_1);
  FUN_00051280();
  _objc_retainAutoreleasedReturnValue();
  local_40 = PTR_s_StartDownloadImage_HD_AutoDownlo_0269da78;
  local_28 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_respondsToSelector__026ca818,
               PTR_s_StartDownloadImage_HD_AutoDownlo_0269da78);
    if (((ulong)puVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,local_40,local_20,1,1,0,0,0);
      local_11 = 1;
      local_44 = 1;
      goto LAB_00055bb8;
    }
  }
  local_50 = PTR_s_StartDownloadImage_HD_AutoDownlo_0269da80;
  if (local_28 != (undefined8 *)0x0) {
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,
               PTR_s_StartDownloadImage_HD_AutoDownlo_0269da80);
    if (((ulong)puVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,local_50,local_20,1,1);
      local_11 = 1;
      local_44 = 1;
      goto LAB_00055bb8;
    }
  }
  pcVar2 = "MsgDataDownloadLogic";
  _objc_getClass();
  local_60 = PTR_s_startDownloadMsgImg_HD__0269da88;
  local_58 = pcVar2;
  if (pcVar2 != (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_instancesRespondToSelector__0269da90,
               PTR_s_startDownloadMsgImg_HD__0269da88);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar2 = local_58;
      _objc_alloc_init();
      local_68 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,local_60,local_20,1);
      local_11 = 1;
      local_44 = 1;
      _objc_storeStrong(&local_68,0);
      goto LAB_00055bb8;
    }
  }
  local_11 = 0;
  local_44 = 1;
LAB_00055bb8:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

