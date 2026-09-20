// FUN_0066c8ac @ 0066c8ac

void FUN_0066c8ac(double param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  uint local_144;
  cfstringStruct *local_128;
  cfstringStruct *local_108;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  byte local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  byte local_51;
  cfstringStruct *local_50 [3];
  byte local_35;
  undefined4 local_34;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_3);
  if (local_28 == (cfstringStruct *)0x0) {
    local_34 = 1;
  }
  else {
    pcVar2 = local_28;
    FUN_0066cfc4();
    local_35 = (byte)pcVar2;
    pcVar3 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028cbc90);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 0;
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_50[0] = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    pcVar2 = local_50[0];
    if (((ulong)pcVar3 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = pcVar2;
      local_69 = 0;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isHidden_026ca768);
      bVar1 = false;
      if (((ulong)pcVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_alpha_026ca4d8);
        bVar1 = false;
        if (DAT_02323d38 < param_1) {
          pcVar2 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          local_69 = 1;
          local_68 = pcVar2;
          bVar1 = pcVar2 != (cfstringStruct *)0x0;
        }
      }
      local_51 = bVar1;
      if ((local_69 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      _objc_storeStrong(&local_60,0);
    }
    if (((local_35 & 1) == 0) && ((local_51 & 1) == 0)) {
      local_34 = 1;
    }
    else {
      pcVar2 = local_30;
      FUN_00662d08();
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      FUN_00663124();
      _objc_retainAutoreleasedReturnValue();
      local_108 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_108 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = local_108;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_28;
      _objc_getAssociatedObject(local_28,&DAT_028cbc92);
      _objc_retainAutoreleasedReturnValue();
      local_128 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_128 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_80 = local_128;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_30;
      FUN_0066c6c4();
      pcVar3 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
      local_144 = 0;
      if (pcVar3 != (cfstringStruct *)0x0) {
        pcVar3 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
        local_144 = 0;
        if (pcVar3 != (cfstringStruct *)0x0) {
          pcVar3 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_isEqualToString__0269ccc8,local_78);
          local_144 = (uint)pcVar3 ^ 1;
        }
      }
      if ((((ulong)pcVar2 & 1) == 0) || ((local_144 & 1) != 0)) {
        FUN_0066c488(local_28,1);
        FUN_0066d7d0(local_28,0);
      }
      _objc_storeStrong(&local_80);
      _objc_storeStrong(&local_78,0);
      local_34 = 0;
    }
    _objc_storeStrong(local_50,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

