// FUN_0050d94c @ 0050d94c

byte FUN_0050d94c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_130;
  undefined *local_108;
  cfstringStruct *local_88;
  byte local_79;
  undefined *local_78;
  byte local_69;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58 [3];
  undefined4 local_3c;
  undefined8 local_38;
  undefined *local_30;
  byte local_21;
  
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  if (local_30 == (undefined *)0x0) {
    local_21 = 0;
    local_3c = 1;
  }
  else {
    puVar1 = local_30;
    _objc_getAssociatedObject(local_30,DAT_026f42c8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (puVar1 == (undefined *)0x0) {
      puVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_action_026a4358);
      if (puVar1 == PTR_s_onOperate__026a4688) {
        local_21 = 1;
        local_3c = 1;
      }
      else {
        puVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_customView_0269ea28);
        _objc_retainAutoreleasedReturnValue();
        local_58[0] = puVar2;
        _objc_getAssociatedObject(puVar2,DAT_026f42c8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        puVar1 = local_58[0];
        if (puVar2 == (undefined *)0x0) {
          puVar2 = PTR__OBJC_CLASS___UIControl_026ce2d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIControl_026ce2d0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
          if ((((ulong)puVar1 & 1) == 0) ||
             (puVar1 = local_58[0], FUN_0050e7d4(local_58[0],local_38,PTR_s_onOperate__026a4688),
             ((ulong)puVar1 & 1) == 0)) {
            local_69 = 0;
            local_79 = 0;
            puVar1 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_accessibilityLabel_0269e1c8);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (puVar2 == (undefined *)0x0) {
              local_108 = local_58[0];
              (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_accessibilityLabel_0269e1c8);
              _objc_retainAutoreleasedReturnValue();
              local_79 = 1;
              local_78 = local_108;
            }
            else {
              local_108 = local_30;
              (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_accessibilityLabel_0269e1c8);
              _objc_retainAutoreleasedReturnValue();
              local_69 = 1;
              local_68 = local_108;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_60 = local_108;
            if ((local_79 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_78);
            }
            if ((local_69 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_68);
            }
            (*(code *)PTR__objc_release_02578630)(puVar1);
            pcVar3 = &cf_Common_More;
            FUN_0050df80();
            _objc_retainAutoreleasedReturnValue();
            local_130 = pcVar3;
            if (pcVar3 == (cfstringStruct *)0x0) {
              local_130 = &cf_fY;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_88 = local_130;
            (*(code *)PTR__objc_release_02578630)(pcVar3);
            puVar1 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
            if ((puVar1 == (undefined *)0x0) ||
               ((puVar1 = local_60,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_60,PTR_s_isEqualToString__0269ccc8,local_88),
                ((ulong)puVar1 & 1) == 0 &&
                (puVar1 = local_60,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_60,PTR_s_isEqualToString__0269ccc8,&cf_fY),
                ((ulong)puVar1 & 1) == 0)))) {
              local_21 = 0;
            }
            else {
              local_21 = 1;
            }
            local_3c = 1;
            _objc_storeStrong(&local_88);
            _objc_storeStrong(&local_60,0);
          }
          else {
            local_21 = 1;
            local_3c = 1;
          }
        }
        else {
          local_21 = 1;
          local_3c = 1;
        }
        _objc_storeStrong(local_58,0);
      }
    }
    else {
      local_21 = 1;
      local_3c = 1;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

