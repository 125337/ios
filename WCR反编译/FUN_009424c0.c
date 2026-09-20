// FUN_009424c0 @ 009424c0

void FUN_009424c0(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  ulong local_58;
  ulong local_50;
  undefined *local_48;
  ulong local_40;
  ulong local_38;
  int local_2c;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_00941344(local_20,&cf_m_nsRealChatUsr);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_009407ac();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  uVar1 = local_28;
  if (uVar2 != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar1;
    local_2c = 1;
    goto LAB_00942834;
  }
  uVar1 = local_20;
  FUN_00941344(0,local_20,&cf_m_nsFromUsr);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_009407ac();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if ((uVar1 == 0) ||
     (uVar2 = local_38,
     (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasSuffix__0269d018,&cf__chatroom),
     uVar1 = local_38, (uVar2 & 1) != 0)) {
    uVar1 = local_20;
    FUN_00941344(local_20,&cf_m_nsContent);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    FUN_009407ac();
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_40;
    puVar3 = PTR_s_rangeOfString__0269d838;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_rangeOfString__0269d838,&cf__);
    local_50 = uVar1;
    local_48 = puVar3;
    if ((uVar1 == 0x7fffffffffffffff) || ((uVar1 == 0 || (0x3f < uVar1)))) {
LAB_009427ec:
      uVar1 = local_38;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar1;
      local_2c = 1;
    }
    else {
      uVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_substringToIndex__0269d6c0,uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      FUN_009407ac();
      _objc_retainAutoreleasedReturnValue();
      local_58 = uVar1;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      lVar4 = 0;
      if (uVar1 == 0) {
LAB_009427c8:
        local_2c = 0;
      }
      else {
        uVar1 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_rangeOfString__0269d838,&cf_space_s_);
        lVar4 = uVar1 + 0x8000000000000001;
        if (lVar4 != 0) goto LAB_009427c8;
        uVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_rangeOfString__0269d838,&cf_<);
        uVar1 = local_58;
        lVar4 = uVar2 + 0x8000000000000001;
        if (lVar4 != 0) goto LAB_009427c8;
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar1;
        lVar4 = 1;
        local_2c = 1;
      }
      _objc_storeStrong(lVar4,&local_58,0);
      if (local_2c == 0) goto LAB_009427ec;
    }
    _objc_storeStrong(&local_40,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar1;
    local_2c = 1;
  }
  _objc_storeStrong(&local_38,0);
LAB_00942834:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

