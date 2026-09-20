// FUN_0019422c @ 0019422c

void FUN_0019422c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  byte local_69;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  byte local_49;
  undefined4 local_48;
  ulong local_38;
  long local_30;
  ulong local_28;
  ulong *puVar2;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  puVar2 = &local_38;
  local_38 = 0;
  _objc_storeStrong(puVar2,param_3);
  uVar1 = (uint)puVar2;
  if ((((local_28 == 0) || (local_30 == 0)) || (local_38 == 0)) ||
     (FUN_0018b0b8(), (uVar1 & 1) == 0)) {
    local_48 = 1;
  }
  else {
    uVar3 = local_28;
    FUN_0018ad9c();
    if ((uVar3 & 1) == 0) {
      lVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_section_0269e988);
      if (lVar4 < 7) {
        lVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_row_0269e210);
        if (lVar4 + -10 == 0 || lVar4 < 10) {
          uVar3 = local_28;
          FUN_00192440(lVar4 + -10,local_28,local_30,local_38);
          local_49 = (byte)uVar3;
          uVar3 = local_38;
          FUN_00192f68();
          _objc_retainAutoreleasedReturnValue();
          local_58 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
          if ((uVar3 == 0) || (uVar3 = local_58, FUN_0018cce0(), (uVar3 & 1) == 0)) {
            local_48 = 1;
          }
          else {
            uVar3 = local_28;
            FUN_0018a9d0(local_28,0);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
            lVar4 = local_30;
            local_60 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_section_0269e988);
            (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_numberWithInteger__0269e080,lVar4);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_objectForKeyedSubscript__0269d098);
            _objc_retainAutoreleasedReturnValue();
            local_68 = uVar3;
            (*(code *)PTR__objc_release_02578630)(puVar5);
            uVar3 = local_68;
            local_69 = 1;
            puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
            uVar6 = local_68;
            puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
            if ((uVar3 & 1) != 0) {
              lVar4 = local_30;
              (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_row_0269e210);
              (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_numberWithInteger__0269e080,lVar4);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_containsObject__0269cbb8);
              local_69 = (byte)uVar6;
              (*(code *)PTR__objc_release_02578630)(puVar5);
            }
            if (((local_49 & 1) != 0) || ((local_69 & 1) != 0)) {
              FUN_0018f054(local_28);
              FUN_00194fec(local_28);
            }
            _objc_storeStrong(&local_68);
            _objc_storeStrong(&local_60,0);
            local_48 = 0;
          }
          _objc_storeStrong(&local_58,0);
          goto LAB_001946cc;
        }
      }
      local_48 = 1;
    }
    else {
      local_48 = 1;
    }
  }
LAB_001946cc:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

