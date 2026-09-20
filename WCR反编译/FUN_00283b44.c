// FUN_00283b44 @ 00283b44

void FUN_00283b44(undefined8 param_1)

{
  undefined *puVar1;
  char *pcVar2;
  undefined **ppuVar3;
  char *pcVar4;
  char *local_d0;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  undefined1 auStack_a0 [8];
  undefined **local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined1 auStack_70 [8];
  undefined **local_68;
  undefined1 auStack_60 [8];
  char *local_58;
  char *local_50;
  undefined4 local_48;
  char *local_38;
  long local_30;
  char *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_d0 = "WCFinderScrollActionSheetItem";
  _objc_getClass();
  if (local_d0 == (char *)0x0) {
    local_d0 = "MMScrollActionSheetItem";
    _objc_getClass();
  }
  local_38 = local_d0;
  if (local_d0 == (char *)0x0) {
    local_28 = (char *)0x0;
    local_48 = 1;
  }
  else {
    _objc_alloc_init();
    local_50 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_respondsToSelector__026ca818,PTR_s_setTitle__0269cef0);
    if (((ulong)local_d0 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setTitle__0269cef0,&cf_N_);
    }
    pcVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_setItemId__026a17c0);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_setItemId__026a17c0,&cf_wcr_finder_download);
    }
    FUN_002840d8();
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar2;
    if ((pcVar2 != (char *)0x0) &&
       (pcVar2 = local_50,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_setIconImg__026a1330),
       ((ulong)pcVar2 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setIconImg__026a1330,local_58);
    }
    if ((local_30 != 0) &&
       (pcVar2 = local_50,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_setUserInfo__026a17c8),
       ((ulong)pcVar2 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setUserInfo__026a17c8,local_30);
    }
    _objc_initWeak(auStack_60,local_30);
    ppuVar3 = &local_90;
    local_90 = PTR___NSConcreteStackBlock_02578660;
    local_88 = 0xc2000000;
    local_84 = 0;
    local_80 = FUN_0028468c;
    local_78 = &DAT_02578da0;
    _objc_copyWeak(auStack_70,auStack_60);
    _objc_retainBlock();
    pcVar4 = local_50;
    local_68 = ppuVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_setAction__026a17d0);
    pcVar2 = local_50;
    puVar1 = PTR_s_setAction__026a17d0;
    if (((ulong)pcVar4 & 1) != 0) {
      ppuVar3 = local_68;
      _objc_retainBlock();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,puVar1);
      (*(code *)PTR__objc_release_02578630)(ppuVar3);
    }
    pcVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_setSelection__026a17d8);
    if (((ulong)pcVar2 & 1) != 0) {
      ppuVar3 = &local_c0;
      local_c0 = PTR___NSConcreteStackBlock_02578660;
      local_b8 = 0xc2000000;
      local_b4 = 0;
      local_b0 = FUN_0028488c;
      local_a8 = &DAT_0257b438;
      _objc_copyWeak(auStack_a0,auStack_60);
      _objc_retainBlock();
      pcVar2 = local_50;
      puVar1 = PTR_s_setSelection__026a17d8;
      local_98 = ppuVar3;
      _objc_retainBlock();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,puVar1);
      (*(code *)PTR__objc_release_02578630)(ppuVar3);
      _objc_storeStrong(&local_98,0);
      _objc_destroyWeak(auStack_a0);
    }
    pcVar2 = local_50;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar2;
    local_48 = 1;
    _objc_storeStrong(&local_68);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_60);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

