// FUN_002e4a24 @ 002e4a24

void FUN_002e4a24(double param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_a0;
  ulong local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  ulong *local_70;
  long *local_68;
  long local_60;
  ulong local_58;
  uint local_50;
  ulong local_40;
  undefined *local_38;
  double local_30;
  ulong local_28;
  
  local_30 = param_1;
  if (param_1 < 1.0) {
    local_28 = 0;
    goto LAB_002e4e54;
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = DAT_028c9878;
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028c9878,PTR_s_objectForKey__0269e048,puVar1);
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar2;
  if (uVar2 == 0) {
    local_70 = &local_58;
    local_58 = 0;
    local_68 = &local_60;
    local_60 = 0;
    local_90 = PTR___NSConcreteGlobalBlock_02578658;
    local_88 = 0xd0800000;
    local_84 = 0;
    local_80 = FUN_002e5154;
    local_78 = &DAT_0257bbc8;
    _dispatch_sync(DAT_028c9870,&local_90);
    uVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    if (uVar2 == 0) {
      local_28 = 0;
      local_50 = 1;
    }
    else {
      lVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
      if ((lVar3 != 0) && (uVar2 = local_58, FUN_002e51cc(lVar3), (uVar2 & 1) != 0)) {
        uVar2 = local_58;
        FUN_002e5378(local_30);
        _objc_retainAutoreleasedReturnValue();
        local_98 = uVar2;
        if (uVar2 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_028c9878,PTR_s_setObject_forKey__026ca9e8,uVar2,local_38);
          uVar4 = local_98;
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = uVar4;
        }
        local_50 = (uint)(uVar2 != 0);
        _objc_storeStrong(&local_98,0);
        if (local_50 != 0) goto LAB_002e4dd8;
      }
      uVar2 = local_58;
      FUN_002e57b4(local_30);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = uVar2;
      if ((uVar2 == 0) &&
         (lVar3 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0),
         lVar3 != 0)) {
        uVar4 = local_58;
        FUN_002e5378(lVar3,local_30);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_a0;
        local_a0 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      if (local_a0 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_028c9878,PTR_s_setObject_forKey__026ca9e8,local_a0,local_38);
      }
      uVar2 = local_a0;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar2;
      local_50 = 1;
      _objc_storeStrong(&local_a0,0);
    }
LAB_002e4dd8:
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = 1;
    local_28 = uVar2;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
LAB_002e4e54:
  _objc_autoreleaseReturnValue(local_28);
  return;
}

