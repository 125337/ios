// FUN_006b6c70 @ 006b6c70

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006b6c70(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                 cfstringStruct *param_5,undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  uint uVar2;
  cfstringStruct *pcVar3;
  undefined *local_1e8;
  cfstringStruct *local_1b8;
  cfstringStruct *local_120;
  undefined *local_e0;
  undefined *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  undefined1 local_b1;
  undefined8 local_b0;
  undefined8 local_a8;
  double local_a0;
  double local_98;
  undefined8 local_90;
  undefined8 local_88;
  double local_80;
  double local_78;
  byte local_6c;
  byte local_6b;
  byte local_6a;
  bool local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_48;
  undefined *local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  
  local_38 = (undefined *)0x0;
  local_30 = param_6;
  local_28 = param_5;
  _objc_storeStrong(&local_38,param_7);
  if ((DAT_028cc1a0 & 1) == 0) {
    _objc_setAssociatedObject(local_28,&DAT_028cc1bb,0,3);
    (*DAT_028cc188)(local_28,local_30,local_38);
    local_48 = 1;
  }
  else {
    pcVar3 = local_28;
    FUN_006bf988();
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar3;
    FUN_006b8e24();
    if (((ulong)pcVar3 & 1) == 0) {
      (*DAT_028cc188)(local_28,local_30,local_38);
      local_48 = 1;
    }
    else {
      FUN_006b97b0();
      _objc_retainAutoreleasedReturnValue();
      local_69 = false;
      bVar1 = local_50 == (cfstringStruct *)0x0;
      local_58 = pcVar3;
      if (bVar1) {
        local_120 = &cf___;
      }
      else {
        local_120 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_class_0269cd60);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        local_68 = local_120;
      }
      local_69 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = local_120;
      if ((local_69 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      pcVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_isEqualToString__0269ccc8,&cf_AddFriendEntryViewController);
      if ((((ulong)pcVar3 & 1) == 0) &&
         (pcVar3 = local_28, FUN_006bca28(local_28,local_60), ((ulong)pcVar3 & 1) == 0)) {
        pcVar3 = local_28;
        FUN_006bd260(local_28,local_60);
        local_6a = (byte)pcVar3;
        local_6b = 0;
        if (((ulong)pcVar3 & 1) == 0) {
          local_6c = (byte)local_60;
          FUN_006babd0();
          pcVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
          uVar2 = (uint)pcVar3;
          local_b0 = param_1;
          local_a8 = param_2;
          local_a0 = param_3;
          local_98 = param_4;
          _CGRectIsEmpty();
          if ((uVar2 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
            local_90 = param_1;
            local_88 = param_2;
            local_80 = param_3;
            local_78 = param_4;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_frame_026ca640);
            local_90 = param_1;
            local_88 = param_2;
            local_80 = param_3;
            local_78 = param_4;
          }
          local_b1 = local_80 < 20.0 || local_78 < 20.0;
          if (((local_6c & 1) != 0) && ((bool)local_b1)) {
            uVar2 = (uint)local_38;
            FUN_006bf3e4();
            if ((uVar2 & 1) != 0) {
              local_6b = 1;
            }
          }
        }
        if ((local_58 == (cfstringStruct *)0x0) || (((local_6a & 1) == 0 && ((local_6b & 1) == 0))))
        {
          (*DAT_028cc188)(local_28,local_30,local_38);
          local_48 = 1;
        }
        else {
          if (DAT_028cc158 == (cfstringStruct *)0x0) {
            local_1b8 = &cf___;
          }
          else {
            local_1b8 = DAT_028cc158;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_c0 = local_1b8;
          pcVar3 = local_28;
          _objc_getAssociatedObject(local_28,&DAT_028cc1bb);
          _objc_retainAutoreleasedReturnValue();
          local_c8 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
          if ((pcVar3 == (cfstringStruct *)0x0) ||
             (pcVar3 = local_c8,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_c8,PTR_s_isEqualToString__0269ccc8,local_c0), ((ulong)pcVar3 & 1) == 0
             )) {
            pcVar3 = local_28;
            _objc_getAssociatedObject(local_28,&DAT_028cc1ba);
            _objc_retainAutoreleasedReturnValue();
            local_d0 = pcVar3;
            if (pcVar3 == (cfstringStruct *)0x0) {
              bVar1 = local_38 == (undefined *)0x0;
              if (bVar1) {
                local_1e8 = PTR__OBJC_CLASS___NSNull_026ce0e8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
                _objc_retainAutoreleasedReturnValue();
                local_e0 = local_1e8;
              }
              else {
                local_1e8 = local_38;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_d8 = local_1e8;
              if (bVar1) {
                (*(code *)PTR__objc_release_02578630)(local_e0);
              }
              _objc_setAssociatedObject(local_28,&DAT_028cc1ba,local_d8,1);
              _objc_storeStrong(&local_d8,0);
            }
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setContentMode__026ca8e0,1);
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setClipsToBounds__026ca8c8,1);
            _objc_setAssociatedObject(local_28,&DAT_028cc1bb,local_c0,3);
            (*DAT_028cc188)(local_28,local_30,local_58);
            _objc_storeStrong(&local_d0,0);
            local_48 = 0;
          }
          else {
            local_48 = 1;
          }
          _objc_storeStrong(&local_c8);
          _objc_storeStrong(&local_c0,0);
        }
      }
      else {
        _objc_setAssociatedObject(local_28,&DAT_028cc1bb,0,3);
        (*DAT_028cc188)(local_28,local_30,local_38);
        local_48 = 1;
      }
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

