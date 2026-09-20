// FUN_006b668c @ 006b668c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006b668c(double param_1,undefined8 param_2,double param_3,cfstringStruct *param_4,
                 undefined8 param_5)

{
  undefined1 uVar1;
  bool bVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  uint local_15c;
  cfstringStruct *local_f8;
  bool local_71;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined4 local_58;
  cfstringStruct *local_48;
  undefined1 local_39;
  cfstringStruct *local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  
  local_30 = param_5;
  local_28 = param_4;
  (*DAT_028cc180)(param_4,param_5);
  local_39 = 0;
  bVar2 = true;
  uVar1 = (DAT_028cc1a0 & 1) != 0;
  if ((bool)uVar1) {
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = pcVar3 == (cfstringStruct *)0x0;
    local_39 = uVar1;
    local_38 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    uVar1 = local_39;
  }
  local_39 = uVar1;
  if (!bVar2) {
    pcVar3 = local_28;
    FUN_006bf988();
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar3;
    FUN_006b8e24();
    if (((ulong)pcVar3 & 1) == 0) {
      local_58 = 1;
    }
    else {
      FUN_006b97b0();
      _objc_retainAutoreleasedReturnValue();
      local_60 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_58 = 1;
      }
      else {
        local_71 = local_48 == (cfstringStruct *)0x0;
        if (local_71) {
          local_f8 = &cf___;
        }
        else {
          local_f8 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_class_0269cd60);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          local_70 = local_f8;
        }
        local_71 = !local_71;
        (*(code *)PTR__objc_retain_02578638)();
        local_68 = local_f8;
        if (local_71) {
          (*(code *)PTR__objc_release_02578630)(local_70);
        }
        pcVar3 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_isEqualToString__0269ccc8,&cf_AddFriendEntryViewController);
        if ((((ulong)pcVar3 & 1) == 0) &&
           (pcVar3 = local_28, FUN_006bca28(local_28,local_68), ((ulong)pcVar3 & 1) == 0)) {
          pcVar3 = local_28;
          FUN_006bd260(local_28,local_68);
          bVar2 = false;
          if (((ulong)pcVar3 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
            bVar2 = true;
            if (20.0 <= param_3) {
              (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
              bVar2 = param_1 < 20.0;
            }
            local_15c = 0;
            if (bVar2) {
              pcVar4 = local_28;
              (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_image_026ca678);
              _objc_retainAutoreleasedReturnValue();
              pcVar5 = pcVar4;
              FUN_006bf3e4();
              local_15c = (uint)pcVar5;
              (*(code *)PTR__objc_release_02578630)(pcVar4);
            }
            bVar2 = (local_15c & 1) != 0;
          }
          if ((((ulong)pcVar3 & 1) != 0) || (bVar2)) {
            pcVar4 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_image_026ca678);
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = local_60;
            (*(code *)PTR__objc_release_02578630)();
            if (pcVar4 != pcVar3) {
              (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setImage__026ca978,local_60);
            }
            local_58 = 0;
          }
          else {
            local_58 = 1;
          }
        }
        else {
          local_58 = 1;
        }
        _objc_storeStrong(&local_68,0);
      }
      _objc_storeStrong(&local_60,0);
    }
    _objc_storeStrong(&local_48,0);
  }
  return;
}

