// FUN_00086dec @ 00086dec

void FUN_00086dec(undefined8 param_1,byte param_2,byte param_3,byte param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong local_28;
  byte local_1b;
  byte local_1a;
  byte local_19;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_1b = param_4;
  local_1a = param_3;
  local_19 = param_2;
  _objc_storeStrong(&local_28,param_5);
  uVar1 = local_18;
  FUN_0008a60c(local_18,local_19 & 1,local_1b & 1,local_28);
  if ((uVar1 & 1) != 0) {
    uVar1 = local_18;
    FUN_0008a890();
    if ((uVar1 & 1) == 0) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_isEqualToString__0269ccc8,_WCRAvatarSceneMyProfile);
      if ((uVar1 & 1) == 0) {
        if ((local_1a & 1) == 0) {
          uVar1 = local_18;
          FUN_00071900();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          if (uVar1 == 0) {
            uVar1 = local_18;
            FUN_0008b2ec();
            if ((uVar1 & 1) != 0) {
              FUN_0008b550(local_18);
            }
          }
          else {
            FUN_0008b11c(local_18);
          }
        }
        else {
          FUN_0008af0c(local_18);
        }
      }
      else {
        FUN_0008acbc(local_18);
      }
    }
    else {
      FUN_0008aa3c(local_18);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

