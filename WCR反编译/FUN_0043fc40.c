// FUN_0043fc40 @ 0043fc40

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0043fc40(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  byte local_1d0;
  ulong local_c0 [2];
  ulong local_b0 [2];
  ulong local_a0;
  long local_98 [2];
  long local_88;
  ulong local_80;
  ulong local_78;
  undefined4 local_6c;
  ulong local_68 [3];
  ulong local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulong local_30;
  ulong local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  uVar1 = local_30;
  (*DAT_028ca9e8)(local_30,local_38,local_40,local_48);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_30;
  local_50 = uVar1;
  FUN_0045210c();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = local_48;
  local_68[0] = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_item_026a1890);
  if (-1 < lVar3) {
    lVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_item_026a1890);
    uVar2 = local_68[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_count_0269cfe0);
    uVar1 = local_68[0];
    if (lVar3 < (long)uVar2) {
      lVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_item_026a1890);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_objectAtIndexedSubscript__0269cc78,lVar3);
      _objc_retainAutoreleasedReturnValue();
      local_78 = uVar1;
      FUN_0045299c();
      uVar2 = local_50;
      if ((uVar1 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = uVar2;
        local_6c = 1;
      }
      else {
        uVar1 = local_50;
        FUN_00452a78();
        _objc_retainAutoreleasedReturnValue();
        local_88 = 2;
        uVar2 = local_30;
        local_80 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_darkMode_026a3cc8);
        if (((uVar2 & 1) != 0) &&
           (uVar1 = local_30,
           (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_darkMode_026a3cc8), (uVar1 & 1) != 0
           )) {
          local_88 = 1;
        }
        lVar3 = local_88;
        FUN_00452edc();
        _objc_retainAutoreleasedReturnValue();
        local_a0 = 0;
        local_98[0] = lVar3;
        if (local_80 != 0) {
          uVar2 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_valueForKey__0269d128,&cf_m_webImageView);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = local_a0;
          local_a0 = uVar2;
          (*(code *)PTR__objc_release_02578630)(uVar1);
        }
        uVar1 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_80,PTR_s_respondsToSelector__026ca818,
                   PTR_s_setAlwaysTemplateRenderingMode__026a3cd0);
        if ((uVar1 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_setAlwaysTemplateRenderingMode__026a3cd0,0);
        }
        uVar1 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a0,PTR_s_respondsToSelector__026ca818,
                   PTR_s_setAlwaysTemplateRenderingMode__026a3cd0);
        if ((uVar1 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a0,PTR_s_setAlwaysTemplateRenderingMode__026a3cd0,0);
        }
        if ((local_98[0] != 0) &&
           (uVar1 = local_80,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_80,PTR_s_respondsToSelector__026ca818,PTR_s_setNormalImage__026a3cd8),
           (uVar1 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setNormalImage__026a3cd8,local_98[0])
          ;
        }
        if ((local_98[0] != 0) &&
           (uVar1 = local_a0,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_a0,PTR_s_respondsToSelector__026ca818,PTR_s_setImage__026ca978),
           (uVar1 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setImage__026ca978,local_98[0]);
        }
        uVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_setAccessibilityLabel__0269e968
                  );
        uVar1 = local_50;
        puVar4 = PTR_s_setAccessibilityLabel__0269e968;
        if ((uVar2 & 1) != 0) {
          FUN_004528d4();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,puVar4);
          (*(code *)PTR__objc_release_02578630)(uVar2);
        }
        uVar1 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_setAllowManage__026a3ce0);
        if ((uVar1 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setAllowManage__026a3ce0,0);
        }
        local_b0[0] = 0;
        uVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_selectedPid_026a3ce8);
        if ((uVar1 & 1) != 0) {
          uVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_selectedPid_026a3ce8);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = local_b0[0];
          local_b0[0] = uVar2;
          (*(code *)PTR__objc_release_02578630)(uVar1);
        }
        uVar1 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_setWxSelected__026a3cf0);
        if ((uVar1 & 1) != 0) {
          uVar2 = local_78;
          FUN_004512d8();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = local_b0[0];
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_c0[0] = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar4);
          local_1d0 = 0;
          if ((uVar1 & 1) != 0) {
            uVar1 = local_c0[0];
            (*(code *)PTR__objc_msgSend_02578628)(local_c0[0],PTR_s_length_0269cca0);
            local_1d0 = 0;
            if (uVar1 != 0) {
              uVar1 = local_b0[0];
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_b0[0],PTR_s_isEqualToString__0269ccc8,local_c0[0]);
              local_1d0 = (byte)uVar1;
            }
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_setWxSelected__026a3cf0,local_1d0 & 1);
          _objc_storeStrong(local_c0,0);
        }
        uVar1 = local_50;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = uVar1;
        local_6c = 1;
        _objc_storeStrong(local_b0);
        _objc_storeStrong(&local_a0,0);
        _objc_storeStrong(local_98,0);
        _objc_storeStrong(&local_80,0);
      }
      _objc_storeStrong(&local_78,0);
      goto LAB_00440620;
    }
  }
  uVar1 = local_50;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = uVar1;
  local_6c = 1;
LAB_00440620:
  _objc_storeStrong(local_68);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

