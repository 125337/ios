// FUN_0080aa58 @ 0080aa58

void FUN_0080aa58(double param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  uint local_fc;
  uint local_ac;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  byte local_71;
  undefined *local_70;
  undefined1 *local_68;
  undefined4 local_60;
  byte local_59;
  undefined *local_58;
  undefined1 *local_40;
  undefined1 *local_38;
  double local_30;
  undefined1 *local_28;
  
  _CACurrentMediaTime();
  local_28 = DAT_028ccf28;
  local_30 = param_1;
  if (((DAT_028ccf9c & 1) == 0) || (0.75 <= param_1 - DAT_028ccfa0)) {
    DAT_028ccf9c = 1;
    puVar1 = PTR_WCRefineConfig_026cdf58;
    DAT_028ccfa0 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_touchTrailCustomImagePath_026a8b50);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 0;
    local_40 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
    local_ac = 0;
    if (puVar1 != (undefined1 *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      local_59 = 1;
      local_58 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_ac = (uint)puVar1;
    }
    if ((local_59 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    if ((local_ac & 1) == 0) {
      puVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_touchTrailCurrentFolder_026a8b58);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      FUN_0080b628();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      FUN_0080b320();
      _objc_retainAutoreleasedReturnValue();
      local_68 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_71 = 0;
      puVar2 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
      local_fc = 0;
      if (puVar2 != (undefined1 *)0x0) {
        puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        local_71 = 1;
        local_70 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_fc = (uint)puVar1;
      }
      if ((local_71 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_70);
      }
      if ((local_fc & 1) == 0) {
        puVar3 = (undefined1 *)((long)&MACH_HEADER.cputype + 1);
        _NSSearchPathForDirectoriesInDomains(5,1,1);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_80 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar3 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_80,PTR_s_stringByAppendingPathComponent__026cab30,&cf_Preferences);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_80;
        local_80 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_80,PTR_s_stringByAppendingPathComponent__026cab30,&cf_WCRefine);
        _objc_retainAutoreleasedReturnValue();
        local_88 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_stringByAppendingPathComponent__026cab30,&cf_touch_trail_png);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        local_90 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar1);
        if (((ulong)puVar5 & 1) == 0) {
          _objc_storeStrong(&DAT_028ccf28,0);
          local_28 = (undefined1 *)0x0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_setTouchTrailCustomImagePath__026a8b60,local_90);
          _objc_storeStrong(&DAT_028ccf28,local_90);
          puVar2 = local_90;
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = puVar2;
        }
        local_60 = 1;
        _objc_storeStrong(&local_90);
        _objc_storeStrong(&local_88,0);
        _objc_storeStrong(&local_80,0);
      }
      else {
        puVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_touchTrailCurrentFolder_026a8b58);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        FUN_0080b628();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setTouchTrailCustomImagePath__026a8b60)
        ;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        _objc_storeStrong(&DAT_028ccf28,local_68);
        puVar2 = local_68;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = puVar2;
        local_60 = 1;
      }
      _objc_storeStrong(&local_68,0);
    }
    else {
      _objc_storeStrong(&DAT_028ccf28,local_40);
      puVar2 = local_40;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar2;
      local_60 = 1;
    }
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
  }
  _objc_autoreleaseReturnValue(local_28);
  return;
}

