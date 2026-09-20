// FUN_006a042c @ 006a042c

void FUN_006a042c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_90;
  bool local_59;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (local_28 == 0) {
    (*DAT_028cbdf8)(local_18,local_20,0);
    local_38 = 1;
  }
  else {
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_string_0269cc38);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar3;
    FUN_006a3624();
    if ((uVar3 & 1) == 0) {
      (*DAT_028cbdf8)(local_18,local_20,local_28);
      local_38 = 1;
    }
    else {
      uVar3 = local_18;
      FUN_006a3894();
      if ((uVar3 & 1) == 0) {
        (*DAT_028cbdf8)(local_18,local_20,local_28);
        local_38 = 1;
      }
      else {
        uVar3 = local_40;
        FUN_006a3b78();
        _objc_retainAutoreleasedReturnValue();
        local_48 = uVar3;
        if (uVar3 == 0) {
          (*DAT_028cbdf8)(local_18,local_20,local_28);
          local_38 = 1;
        }
        else {
          uVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
          if (uVar3 == 0) {
            local_90 = *(ulong *)PTR____NSDictionary0___02578288;
          }
          else {
            local_90 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_attributesAtIndex_effectiveRange_026a02a8,0,0);
            _objc_retainAutoreleasedReturnValue();
            local_58 = local_90;
          }
          local_59 = uVar3 != 0;
          (*(code *)PTR__objc_retain_02578638)();
          local_50 = local_90;
          if (local_59) {
            (*(code *)PTR__objc_release_02578630)(local_58);
          }
          uVar3 = local_18;
          uVar2 = local_20;
          pcVar1 = DAT_028cbdf8;
          puVar4 = PTR__OBJC_CLASS___NSMutableAttributedString_026ce3e8;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_initWithString_attributes__026a02b0,local_48,local_50);
          (*pcVar1)(uVar3,uVar2,puVar4);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          _objc_storeStrong(&local_50,0);
          local_38 = 0;
        }
        _objc_storeStrong(&local_48,0);
      }
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

