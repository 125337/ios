// FUN_009418d0 @ 009418d0

void FUN_009418d0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_a0;
  ulong local_98;
  ulong local_48;
  undefined4 local_3c;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar1 = local_20;
  FUN_00941344(local_20,&cf_m_nsFromUsr);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_009407ac();
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_20;
  FUN_00941344(local_20,&cf_m_nsToUsr);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_009407ac();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasSuffix__0269d018,&cf__chatroom);
  local_18 = local_30;
  if ((uVar1 & 1) == 0) {
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasSuffix__0269d018,&cf__chatroom);
    local_18 = local_38;
    if ((uVar1 & 1) == 0) {
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
      uVar1 = 0;
      if ((uVar2 == 0) ||
         (((uVar1 = local_28,
           (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,local_30),
           (uVar1 & 1) == 0 &&
           (uVar1 = local_28,
           (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,local_38),
           (uVar1 & 1) == 0)) &&
          (uVar1 = local_28,
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasSuffix__0269d018,&cf__chatroom),
          (uVar1 & 1) == 0)))) {
        FUN_00941cc8();
        _objc_retainAutoreleasedReturnValue();
        local_48 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
        if ((uVar1 == 0) ||
           (uVar2 = local_30,
           (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,local_48),
           uVar1 = local_38, (uVar2 & 1) == 0)) {
          uVar1 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
          if ((uVar1 == 0) ||
             (uVar1 = local_38,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_38,PTR_s_isEqualToString__0269ccc8,local_48), local_18 = local_30,
             (uVar1 & 1) == 0)) {
            uVar1 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
            if (uVar1 == 0) {
              uVar1 = local_30;
              (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
              if (uVar1 == 0) {
                local_a0 = local_38;
              }
              else {
                local_a0 = local_30;
              }
              local_98 = local_a0;
            }
            else {
              local_98 = local_28;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = local_98;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
          }
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = uVar1;
        }
        local_3c = 1;
        _objc_storeStrong(&local_48,0);
      }
      else {
        uVar1 = local_28;
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar1;
        local_3c = 1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_3c = 1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_3c = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

