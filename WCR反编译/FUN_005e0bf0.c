// FUN_005e0bf0 @ 005e0bf0

void FUN_005e0bf0(undefined8 param_1,undefined1 *param_2,ulong *param_3)

{
  ulong *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60 [3];
  uint local_44;
  ulong *local_40;
  undefined1 *local_38;
  ulong local_30;
  ulong local_28;
  
  puVar1 = &local_30;
  local_30 = 0;
  _objc_storeStrong(puVar1,param_1);
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (ulong *)0x0) {
    *param_3 = 0;
  }
  local_40 = param_3;
  local_38 = param_2;
  FUN_005e1f98();
  uVar3 = local_30;
  if (((ulong)puVar1 & 1) == 0) {
    local_28 = 0;
    local_44 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((uVar3 & 1) == 0) ||
       (uVar3 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
       uVar3 == 0)) {
      local_28 = 0;
      local_44 = 1;
    }
    else {
      uVar3 = local_30;
      FUN_005e2a48();
      _objc_retainAutoreleasedReturnValue();
      local_60[0] = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
      if (uVar3 == 0) {
        _objc_storeStrong(local_60,local_30);
      }
      uVar3 = local_60[0];
      if (local_40 != (ulong *)0x0) {
        _objc_retainAutorelease();
        *local_40 = uVar3;
      }
      uVar3 = local_60[0];
      FUN_005e3310(local_60[0],"contact_chats_only",DAT_028cb837 & 1,&cf_NJ_YvgS,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_68 = uVar3;
      if (uVar3 != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = uVar3;
      }
      local_44 = (uint)(uVar3 != 0);
      _objc_storeStrong(&local_68,0);
      if (local_44 == 0) {
        uVar3 = local_60[0];
        FUN_005e3310(local_60[0],"contact_group",DAT_028cb838 & 1,&cf__J,local_38);
        _objc_retainAutoreleasedReturnValue();
        local_70 = uVar3;
        if (uVar3 != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = uVar3;
        }
        local_44 = (uint)(uVar3 != 0);
        _objc_storeStrong(&local_70,0);
        if (local_44 == 0) {
          uVar3 = local_60[0];
          FUN_005e3310(local_60[0],"contact_tags",DAT_028cb839 & 1,&cf_h__,local_38);
          _objc_retainAutoreleasedReturnValue();
          local_78 = uVar3;
          if (uVar3 != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = uVar3;
          }
          local_44 = (uint)(uVar3 != 0);
          _objc_storeStrong(&local_78,0);
          if (local_44 == 0) {
            uVar3 = local_60[0];
            FUN_005e3310(local_60[0],"contact_official",DAT_028cb83a & 1,&cf_lQOS,local_38);
            _objc_retainAutoreleasedReturnValue();
            local_80 = uVar3;
            if (uVar3 != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_28 = uVar3;
            }
            local_44 = (uint)(uVar3 != 0);
            _objc_storeStrong(&local_80,0);
            if (local_44 == 0) {
              uVar3 = local_60[0];
              FUN_005e3310(local_60[0],"contact_service",DAT_028cb83b & 1,&cf_gRS,local_38);
              _objc_retainAutoreleasedReturnValue();
              local_88 = uVar3;
              if (uVar3 != 0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_28 = uVar3;
              }
              local_44 = (uint)(uVar3 != 0);
              _objc_storeStrong(&local_88,0);
              if (local_44 == 0) {
                uVar3 = local_60[0];
                FUN_005e3310(local_60[0],"contact_wecom",DAT_028cb83c & 1,&cf_ON_OT_N,local_38);
                _objc_retainAutoreleasedReturnValue();
                local_90 = uVar3;
                if (uVar3 != 0) {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_28 = uVar3;
                }
                local_44 = (uint)(uVar3 != 0);
                _objc_storeStrong(&local_90,0);
                if (local_44 == 0) {
                  local_28 = 0;
                  local_44 = 1;
                }
              }
            }
          }
        }
      }
      _objc_storeStrong(local_60,0);
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

