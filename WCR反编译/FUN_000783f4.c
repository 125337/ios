// FUN_000783f4 @ 000783f4

void FUN_000783f4(undefined8 param_1,byte param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 local_b0;
  undefined1 local_a1;
  undefined8 local_a0;
  ulong local_98;
  undefined1 local_89;
  ulong local_88;
  undefined8 local_80;
  undefined8 local_78;
  byte local_69;
  undefined8 local_68;
  undefined8 local_60;
  ulong local_58;
  undefined1 local_49;
  ulong local_48;
  byte local_3d;
  undefined4 local_30;
  byte local_29;
  ulong local_28;
  
  uVar2 = DAT_02323c90;
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_29 = param_2;
  if (local_28 == 0) {
    local_30 = 1;
  }
  else {
    if ((DAT_028c7e78 & 1) == 0) {
      FUN_0006e628();
    }
    uVar6 = local_28;
    FUN_00078a1c();
    local_3d = (byte)uVar6;
    local_49 = 0;
    bVar4 = false;
    uVar1 = (uVar6 & 1) != 0;
    uVar5 = (uint)uVar6;
    if ((bool)uVar1) {
      uVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      bVar4 = uVar6 == 0;
      local_49 = uVar1;
      local_48 = uVar6;
      (*(code *)PTR__objc_release_02578630)();
      uVar5 = (uint)uVar6;
      uVar1 = local_49;
    }
    local_49 = uVar1;
    if (bVar4) {
      if ((local_29 & 1) == 0) {
        FUN_00078cbc(uVar2,local_28);
      }
      local_30 = 1;
    }
    else {
      FUN_00079024();
      if ((uVar5 & 1) == 0) {
        uVar6 = local_28;
        FUN_00079064();
        _objc_retainAutoreleasedReturnValue();
        local_58 = uVar6;
        FUN_00079304(local_28);
        FUN_000794a8(local_28);
        FUN_0007972c(local_28);
        FUN_000799f0(local_58,0);
        local_30 = 1;
        _objc_storeStrong(&local_58,0);
      }
      else {
        local_60 = 0;
        local_68 = 0;
        local_69 = 0;
        local_78 = 0;
        local_80 = 0;
        uVar6 = local_28;
        FUN_0007a50c(local_28,&local_78,&local_80,&local_69);
        _objc_storeStrong(&local_60,local_78);
        _objc_storeStrong(&local_68,local_80);
        if ((uVar6 & 1) == 0) {
          if ((local_3d & 1) != 0) {
            local_89 = 0;
            bVar4 = false;
            uVar1 = (local_29 & 1) == 0;
            if ((bool)uVar1) {
              uVar6 = local_28;
              (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_window_026cabf0);
              _objc_retainAutoreleasedReturnValue();
              bVar4 = uVar6 == 0;
              local_89 = uVar1;
              local_88 = uVar6;
              (*(code *)PTR__objc_release_02578630)(uVar6);
              uVar1 = local_89;
            }
            local_89 = uVar1;
            if (bVar4) {
              uVar6 = local_28;
              _objc_getAssociatedObject(local_28,DAT_026df760);
              _objc_retainAutoreleasedReturnValue();
              uVar7 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(uVar6);
              uVar6 = local_28;
              uVar3 = DAT_026df760;
              local_98 = uVar7;
              if ((long)uVar7 < 8) {
                puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,
                           uVar7 + 1);
                _objc_retainAutoreleasedReturnValue();
                _objc_setAssociatedObject(uVar6,uVar3,puVar8,1);
                (*(code *)PTR__objc_release_02578630)(puVar8);
                FUN_00078cbc(uVar2,local_28);
              }
            }
          }
          local_30 = 1;
        }
        else {
          uVar6 = local_28;
          FUN_0007a7f4(local_28,local_60,local_69 & 1);
          if ((uVar6 & 1) == 0) {
            local_30 = 1;
          }
          else {
            local_a0 = 0;
            local_b0 = 0;
            uVar6 = local_28;
            FUN_0007a964(local_28,local_68,&local_b0);
            _objc_storeStrong(&local_a0,local_b0);
            local_a1 = (undefined1)uVar6;
            FUN_0007ab3c(local_28,local_a0,local_68,(uint)uVar6 & 1,local_29 & 1,local_69 & 1);
            _objc_storeStrong(&local_a0,0);
            local_30 = 0;
          }
        }
        _objc_storeStrong(&local_68);
        _objc_storeStrong(&local_60,0);
      }
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

