// FUN_0076423c @ 0076423c

byte FUN_0076423c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  byte local_68;
  byte local_64;
  byte local_60;
  byte local_5c;
  ulong local_40;
  undefined4 local_34;
  long local_30;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_isEqualToString__0269ccc8,_WCRefineTextStyleHomeCount);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_isEqualToString__0269ccc8,_WCRefineTextStyleHomeFold);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_isEqualToString__0269ccc8,_WCRefineTextStyleHomeLogin);
      if ((uVar1 & 1) == 0) {
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_isEqualToString__0269ccc8,_WCRefineTextStyleSearchPlaceholder);
        if ((uVar1 & 1) == 0) {
          uVar1 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_isEqualToString__0269ccc8,_WCRefineTextStyleVoicePlaceholder);
          if ((uVar1 & 1) == 0) {
            lVar3 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
            local_68 = 1;
            if (lVar3 != 0) {
              uVar1 = local_28;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_28,PTR_s_isEqualToString__0269ccc8,local_30);
              local_68 = (byte)uVar1 ^ 1;
            }
            local_11 = local_68 & 1;
            local_34 = 1;
          }
          else {
            FUN_007630c0();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = local_28;
            local_40 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf__);
            local_60 = 1;
            if ((uVar2 & 1) == 0) {
              uVar1 = local_40;
              (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
              local_64 = 0;
              if (uVar1 != 0) {
                uVar1 = local_28;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_28,PTR_s_isEqualToString__0269ccc8,local_40);
                local_64 = (byte)uVar1;
              }
              local_60 = local_64;
            }
            local_11 = local_60 & 1;
            local_34 = 1;
            _objc_storeStrong(&local_40,0);
          }
        }
        else {
          uVar1 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_d__);
          local_5c = 1;
          if ((uVar1 & 1) == 0) {
            uVar1 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_isEqualToString__0269ccc8,&cf_Search);
            local_5c = (byte)uVar1;
          }
          local_11 = local_5c & 1;
          local_34 = 1;
        }
      }
      else {
        uVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf___vU_);
        local_11 = (byte)uVar1 & 1;
        local_34 = 1;
      }
    }
    else {
      uVar1 = local_28;
      FUN_00764ec4();
      local_11 = (byte)uVar1 & 1;
      local_34 = 1;
    }
  }
  else {
    uVar1 = local_28;
    FUN_00762ca8(local_28,0);
    local_11 = (byte)uVar1 & 1;
    local_34 = 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

