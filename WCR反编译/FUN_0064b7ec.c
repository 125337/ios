// FUN_0064b7ec @ 0064b7ec

void FUN_0064b7ec(cfstringStruct *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  cfstringStruct *local_100;
  ulong local_c0;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  ulong local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_48;
  ulong local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  ulong *puVar2;
  
  puVar2 = &local_38;
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(puVar2,param_3);
  uVar1 = (uint)puVar2;
  FUN_006620a0();
  if ((uVar1 & 1) == 0) {
    (*DAT_028cbb98)(local_28,local_30,local_38);
    local_48 = 1;
  }
  else {
    pcVar3 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028cbc96);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    if (((ulong)pcVar4 & 1) == 0) {
      pcVar3 = local_28;
      FUN_0067428c(local_28,&cf_MainFrameItemView);
      _objc_retainAutoreleasedReturnValue();
      local_50 = pcVar3;
      FUN_0066e298();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = local_38;
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_58 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
      if ((uVar6 & 1) == 0) {
        local_c0 = 0;
      }
      else {
        local_c0 = local_38;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = local_c0;
      FUN_006627f0();
      if (((local_c0 & 1) == 0) &&
         (uVar6 = local_60,
         (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_hasPrefix__0269d320,&cf___),
         (uVar6 & 1) == 0)) {
        pcVar3 = local_58;
        FUN_00662d08();
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = pcVar3;
        FUN_00663124();
        _objc_retainAutoreleasedReturnValue();
        local_100 = pcVar4;
        if (pcVar4 == (cfstringStruct *)0x0) {
          local_100 = &cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_68 = local_100;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        pcVar3 = local_68;
        FUN_00663614();
        if ((((ulong)pcVar3 & 1) == 0) || (uVar6 = local_60, FUN_006638c8(), (uVar6 & 1) == 0)) {
          if ((local_58 != (cfstringStruct *)0x0) &&
             (uVar6 = local_60, FUN_00666cb0(), (uVar6 & 1) != 0)) {
            pcVar3 = local_58;
            FUN_0066af54();
            _objc_retainAutoreleasedReturnValue();
            local_70 = pcVar3;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isEqualToString__0269ccc8,local_60);
            if ((((ulong)pcVar3 & 1) != 0) ||
               ((pcVar3 = local_70,
                (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0),
                pcVar3 == (cfstringStruct *)0x0 &&
                (uVar6 = local_60, FUN_006620c0(), (uVar6 & 1) != 0)))) {
              FUN_0066426c(local_58,local_60,&cf_setText);
            }
            _objc_storeStrong(&local_70,0);
          }
          (*DAT_028cbb98)(local_28,local_30,local_38);
          if ((local_50 != (cfstringStruct *)0x0) &&
             (pcVar3 = local_50, FUN_0066cfc4(), ((ulong)pcVar3 & 1) != 0)) {
            FUN_0066d7d0(local_50,0);
            pcVar3 = local_58;
            FUN_0066c6c4();
            if (((ulong)pcVar3 & 1) != 0) {
              FUN_0066dcbc(local_50,local_58,&cf_RedTipsLabelsetText);
            }
          }
          local_48 = 0;
        }
        else {
          FUN_0066c02c(local_58);
          FUN_00663f60(local_58);
          (*DAT_028cbb98)(local_28,local_30,&cf___);
          local_48 = 1;
        }
        _objc_storeStrong(&local_68,0);
      }
      else {
        (*DAT_028cbb98)(local_28,local_30,&cf___);
        local_48 = 1;
      }
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_58,0);
      _objc_storeStrong(&local_50,0);
    }
    else {
      (*DAT_028cbb98)(local_28,local_30,local_38);
      local_48 = 1;
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

