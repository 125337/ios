// FUN_0081cc5c @ 0081cc5c

void FUN_0081cc5c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint local_144;
  undefined *local_130;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  byte local_59;
  undefined *local_58;
  undefined4 local_50;
  byte local_39;
  undefined *local_38;
  undefined *local_30;
  byte local_22;
  undefined1 local_21;
  
  uVar3 = DAT_028cd070;
  if (((DAT_028cd280 & 1) != 0) &&
     (local_21 = DAT_028cd288 == 1 || DAT_028cd288 == 2, (bool)local_21)) {
    puVar2 = PTR__OBJC_CLASS___WKWebView_026ce4e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___WKWebView_026ce4e8,PTR_s_class_0269cd60)
    ;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) == 0) {
      local_22 = false;
      if (DAT_028cd288 == 2) {
        puVar2 = DAT_028cd058;
        (*(code *)PTR__objc_msgSend_02578628)(DAT_028cd058,PTR_s_length_0269cca0);
        local_22 = puVar2 != (undefined *)0x0;
      }
      local_39 = 0;
      bVar1 = (bool)local_22 == false;
      if (bVar1) {
        local_130 = (undefined *)0x0;
        FUN_00859aac();
        _objc_retainAutoreleasedReturnValue();
        local_38 = local_130;
      }
      else {
        local_130 = DAT_028cd058;
      }
      local_39 = bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_30 = local_130;
      if ((local_39 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_38);
      }
      puVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
      if (puVar2 == (undefined *)0x0) {
        local_50 = 1;
      }
      else {
        local_59 = 0;
        local_144 = 0;
        if ((local_22 & 1) == 0) {
          puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
          _objc_retainAutoreleasedReturnValue();
          local_59 = 1;
          local_58 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_144 = (uint)puVar2 ^ 1;
        }
        if ((local_59 & 1) != 0) {
          puVar2 = local_58;
          (*(code *)PTR__objc_release_02578630)();
        }
        if ((local_144 & 1) == 0) {
          FUN_00857cd8();
          _objc_retainAutoreleasedReturnValue();
          local_68 = puVar2;
          FUN_00857d4c();
          uVar6 = 0;
          uVar5 = 0;
          local_78 = param_1;
          local_70 = param_2;
          FUN_0081e864();
          local_c0 = uVar5;
          uStack_b8 = uVar6;
          local_b0 = param_1;
          uStack_a8 = param_2;
          local_98 = uVar5;
          uStack_90 = uVar6;
          local_88 = param_1;
          uStack_80 = param_2;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setFrame__026ca960);
          puVar2 = local_68;
          FUN_0085d324(local_68,local_30,0);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___WKWebView_026ce4e8;
          local_c8 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___WKWebView_026ce4e8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
          if (((ulong)puVar2 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_bounds_026ca548);
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar5,uVar6,param_1,param_2,local_c8,PTR_s_setFrame__026ca960);
          }
          _objc_storeStrong(&local_c8);
          _objc_storeStrong(&local_68,0);
          local_50 = 0;
        }
        else {
          local_50 = 1;
        }
      }
      _objc_storeStrong(&local_30,0);
    }
  }
  return;
}

