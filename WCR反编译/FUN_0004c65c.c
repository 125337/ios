// FUN_0004c65c @ 0004c65c

void FUN_0004c65c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *local_198;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  undefined1 *local_c8;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined4 local_5c;
  undefined *local_58;
  undefined1 *local_50 [3];
  undefined1 *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  FUN_0004d8bc();
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  FUN_0004da68();
  _objc_retainAutoreleasedReturnValue();
  local_58 = (undefined1 *)0x0;
  local_50[0] = puVar1;
  if ((puVar1 != (undefined1 *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_respondsToSelector__026ca818,PTR_s_SessionNewArray_0269d988),
     ((ulong)puVar1 & 1) != 0)) {
    puVar4 = local_50[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_SessionNewArray_0269d988);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_58;
    local_58 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_58;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)puVar1 & 1) == 0) {
      _objc_storeStrong(&local_58,0);
    }
  }
  puVar4 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_autoDownloadPrivateChatDefaultEn_0269d990);
  if (((ulong)puVar4 & 1) == 0) {
    puVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_autoDownloadSessionRule_0269d998);
    if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
      puVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0);
      puVar4 = local_38;
      if (puVar1 == (undefined1 *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = puVar4;
        local_5c = 1;
      }
      else {
        puVar2 = PTR__OBJC_CLASS___NSSet_026ce150;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_setWithArray__0269d9a0,local_38);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = local_58;
        local_90 = PTR___NSConcreteStackBlock_02578660;
        local_88 = 0xc2000000;
        local_84 = 0;
        local_80 = FUN_0004e434;
        local_78 = &DAT_025795f0;
        local_68 = puVar2;
        (*(code *)PTR__objc_retain_02578638)();
        local_70 = puVar2;
        FUN_0004da88(puVar1,&local_90);
        _objc_retainAutoreleasedReturnValue();
        local_28 = puVar1;
        _objc_storeStrong(&local_70);
        local_5c = 1;
        _objc_storeStrong(&local_68,0);
      }
    }
    else {
      puVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0);
      if (puVar1 == (undefined1 *)0x0) {
        puVar4 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
        if (puVar4 == (undefined1 *)0x0) {
          local_198 = *(undefined1 **)PTR____NSArray0___02578280;
        }
        else {
          local_198 = local_38;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = local_198;
        local_5c = 1;
      }
      else {
        puVar2 = PTR__OBJC_CLASS___NSSet_026ce150;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_setWithArray__0269d9a0,local_38);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = local_58;
        local_c0 = PTR___NSConcreteStackBlock_02578660;
        local_b8 = 0xc2000000;
        local_b4 = 0;
        local_b0 = FUN_0004e4c4;
        local_a8 = &DAT_025795f0;
        local_98 = puVar2;
        (*(code *)PTR__objc_retain_02578638)();
        local_a0 = puVar2;
        FUN_0004da88(puVar1,&local_c0);
        _objc_retainAutoreleasedReturnValue();
        local_28 = puVar1;
        _objc_storeStrong(&local_a0);
        local_5c = 1;
        _objc_storeStrong(&local_98,0);
      }
    }
  }
  else {
    puVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0);
    puVar4 = local_30;
    local_28 = local_58;
    if (puVar1 == (undefined1 *)0x0) {
      puVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_autoDownloadSessionRule_0269d998);
      puVar4 = local_38;
      if (puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = puVar4;
        local_5c = 1;
      }
      else {
        puVar4 = *(undefined1 **)PTR____NSArray0___02578280;
        (*(code *)PTR__objc_retain_02578638)();
        local_5c = 1;
        local_28 = puVar4;
      }
    }
    else {
      local_e8 = PTR___NSConcreteStackBlock_02578660;
      local_e0 = 0xc2000000;
      local_dc = 0;
      local_d8 = FUN_0004e5a8;
      local_d0 = &DAT_025795f0;
      (*(code *)PTR__objc_retain_02578638)();
      local_c8 = puVar4;
      FUN_0004da88(local_28,&local_e8);
      _objc_retainAutoreleasedReturnValue();
      _objc_storeStrong(&local_c8,0);
      local_5c = 1;
    }
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(local_50,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

