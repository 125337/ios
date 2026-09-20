// FUN_0083e3a8 @ 0083e3a8

void FUN_0083e3a8(void)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint local_9c;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  byte local_69;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  byte local_41;
  undefined *local_40;
  long local_28;
  
  if (DAT_028cd288 == 1) {
    lVar2 = DAT_028cd050;
    _WCRefineProfileBgHTMLWorkDirectory();
    _objc_retainAutoreleasedReturnValue();
    local_41 = 0;
    local_28 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
    local_9c = 1;
    if (lVar2 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      local_41 = 1;
      local_40 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_9c = (uint)puVar3 ^ 1;
    }
    if ((local_41 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    if ((local_9c & 1) == 0) {
      local_50 = 0;
      local_58 = 0;
      local_60 = 0;
      local_68 = 0;
      _WCRefineProfileBgPreviewResolveDayNightOfKind(local_28,2,&local_60,&local_68);
      _objc_storeStrong(&local_50,local_60);
      _objc_storeStrong(&local_58,local_68);
      _objc_storeStrong(&DAT_028cd060,local_50);
      _objc_storeStrong(&DAT_028cd068,local_58);
      local_48 = 1;
      _objc_storeStrong(&local_58);
      _objc_storeStrong(&local_50,0);
    }
    else {
      _objc_storeStrong(&DAT_028cd060);
      _objc_storeStrong(&DAT_028cd068,0);
      local_48 = 1;
    }
    _objc_storeStrong(&local_28,0);
  }
  else if (DAT_028cd288 == 2) {
    _objc_storeStrong(0,&DAT_028cd060);
    _objc_storeStrong(&DAT_028cd068,0);
  }
  else if ((DAT_028cd048 == 0) ||
          (lVar2 = DAT_028cd048,
          (*(code *)PTR__objc_msgSend_02578628)(DAT_028cd048,PTR_s_length_0269cca0), lVar2 == 0)) {
    _objc_storeStrong(&DAT_028cd060);
    _objc_storeStrong(&DAT_028cd068,0);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = 0;
    if (((ulong)puVar4 & 1) != 0) {
      bVar1 = local_69;
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    lVar2 = DAT_028cd048;
    if ((bVar1 & 1) == 0) {
      _objc_storeStrong(&DAT_028cd060,DAT_028cd048);
      _objc_storeStrong(&DAT_028cd068,0);
    }
    else {
      local_78 = 0;
      local_80 = 0;
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_88 = local_78;
      local_90 = local_80;
      _WCRefineProfileBgPreviewResolveDayNightOfKind(lVar2,puVar4,&local_88,&local_90);
      _objc_storeStrong(&local_78,local_88);
      _objc_storeStrong(&local_80,local_90);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&DAT_028cd060,local_78);
      _objc_storeStrong(&DAT_028cd068,local_80);
      _objc_storeStrong(&local_80);
      _objc_storeStrong(&local_78,0);
    }
  }
  return;
}

