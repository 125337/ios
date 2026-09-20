// FUN_008ab75c @ 008ab75c

byte FUN_008ab75c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_40 [3];
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    uVar1 = local_20;
    FUN_008ab47c(local_20,PTR_s_hasLocalTranslateResult_026a9970);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      FUN_008ab47c(local_20,PTR_s_isTranslateEnd_026a9978);
      if ((uVar1 & 1) == 0) {
        uVar1 = local_20;
        FUN_008ab47c(local_20,PTR_s_canShowTranslateLoadingView_026a9980);
        if ((uVar1 & 1) == 0) {
          uVar1 = local_20;
          FUN_008ab47c(local_20,PTR_s_canShowTranslateText_026a9988);
          if ((uVar1 & 1) == 0) {
            local_11 = 0;
            local_24 = 1;
          }
          else {
            uVar1 = local_20;
            FUN_008ab668(local_20,PTR_s_voiceTranslateInfo_026a9990);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar1;
            FUN_008ab668();
            _objc_retainAutoreleasedReturnValue();
            local_40[0] = uVar2;
            (*(code *)PTR__objc_release_02578630)(uVar1);
            uVar1 = local_40[0];
            puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
            local_11 = false;
            if ((uVar1 & 1) != 0) {
              uVar1 = local_40[0];
              (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_length_0269cca0);
              local_11 = uVar1 != 0;
            }
            local_24 = 1;
            _objc_storeStrong(local_40,0);
          }
        }
        else {
          local_11 = 0;
          local_24 = 1;
        }
      }
      else {
        local_11 = 1;
        local_24 = 1;
      }
    }
    else {
      local_11 = 1;
      local_24 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

