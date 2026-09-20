// FUN_006b7838 @ 006b7838

void FUN_006b7838(cfstringStruct *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  cfstringStruct *local_e8;
  cfstringStruct *local_c0;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  undefined1 local_72;
  bool local_71;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined4 local_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = param_4;
  if ((DAT_028cc1a0 & 1) == 0) {
    _objc_setAssociatedObject(local_28,&DAT_028cc1b8,0,3);
    _objc_setAssociatedObject(local_28,&DAT_028cc1b9,0,3);
    (*DAT_028cc198)(local_28,local_30,local_38,local_40);
    local_50 = 1;
    goto LAB_006b7fec;
  }
  pcVar2 = local_28;
  FUN_006bf988();
  _objc_retainAutoreleasedReturnValue();
  local_58 = pcVar2;
  FUN_006b8e24();
  if (((ulong)pcVar2 & 1) == 0) {
    (*DAT_028cc198)(local_28,local_30,local_38,local_40);
    local_50 = 1;
  }
  else {
    FUN_006b97b0();
    _objc_retainAutoreleasedReturnValue();
    local_71 = false;
    bVar1 = local_58 == (cfstringStruct *)0x0;
    local_60 = pcVar2;
    if (bVar1) {
      local_c0 = &cf___;
    }
    else {
      local_c0 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      local_70 = local_c0;
    }
    local_71 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_c0;
    if ((local_71 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    pcVar2 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_isEqualToString__0269ccc8,&cf_AddFriendEntryViewController);
    if (((ulong)pcVar2 & 1) == 0) {
      if ((local_60 == (cfstringStruct *)0x0) ||
         (pcVar2 = local_28, FUN_006bbf80(local_28,local_38,local_68), ((ulong)pcVar2 & 1) == 0)) {
        (*DAT_028cc198)(local_28,local_30,local_38,local_40);
        local_50 = 1;
      }
      else {
        if (DAT_028cc158 == (cfstringStruct *)0x0) {
          local_e8 = &cf___;
        }
        else {
          local_e8 = DAT_028cc158;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_80 = local_e8;
        pcVar2 = local_28;
        _objc_getAssociatedObject(local_28,&DAT_028cc1b8);
        _objc_retainAutoreleasedReturnValue();
        local_88 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
        uVar3 = 0;
        if (pcVar2 == (cfstringStruct *)0x0) {
LAB_006b7e08:
          _objc_setAssociatedObject(uVar3,local_28,&DAT_028cc1b8,local_80,3);
          pcVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_imageView_0269f230);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          if (pcVar2 != (cfstringStruct *)0x0) {
            pcVar2 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_imageView_0269f230);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(pcVar2);
            pcVar2 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_imageView_0269f230);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(pcVar2);
          }
          (*DAT_028cc198)(local_28,local_30,local_60,local_40);
          local_50 = 0;
        }
        else {
          pcVar2 = local_88;
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_isEqualToString__0269ccc8,local_80);
          uVar3 = (ulong)pcVar2 & 0xffffffff;
          if (((ulong)pcVar2 & 1) == 0) goto LAB_006b7e08;
          pcVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_imageView_0269f230);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          if (pcVar2 != (cfstringStruct *)0x0) {
            pcVar2 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_imageView_0269f230);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(pcVar2);
            pcVar2 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_imageView_0269f230);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(pcVar2);
          }
          (*DAT_028cc198)(local_28,local_30,local_60,local_40);
          local_50 = 1;
        }
        _objc_storeStrong(&local_88);
        _objc_storeStrong(&local_80,0);
      }
    }
    else {
      pcVar2 = local_28;
      FUN_006bb580();
      local_72 = SUB81(pcVar2,0);
      if (((ulong)pcVar2 & 1) == 0) {
        (*DAT_028cc198)(local_28,local_30,local_38,local_40);
        local_50 = 1;
      }
      else {
        (*DAT_028cc198)(local_28,local_30,local_38,local_40);
        if (local_60 != (cfstringStruct *)0x0) {
          FUN_006bbc64(local_28,local_60);
        }
        local_50 = 1;
      }
    }
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_58,0);
LAB_006b7fec:
  _objc_storeStrong(&local_38,0);
  return;
}

