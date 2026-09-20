// FUN_0023e5b0 @ 0023e5b0

byte FUN_0023e5b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_60 [2];
  ulong local_50;
  byte local_45;
  byte local_31;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_20;
  (*DAT_028c92e8)(local_20,local_28,local_30);
  local_31 = (byte)uVar1;
  local_45 = 0;
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_isCaller);
  _objc_retainAutoreleasedReturnValue();
  local_50 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_boolValue_026ca540);
  if ((uVar2 & 1) != 0) {
    uVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_boolValue_026ca540);
    local_45 = (byte)uVar2;
  }
  _objc_storeStrong(&local_50,0);
  uVar2 = local_30;
  FUN_00240420();
  _objc_retainAutoreleasedReturnValue();
  local_60[0] = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    uVar3 = local_30;
    FUN_00240240(local_30,&cf_contact);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    FUN_0023fa84();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_60[0];
    local_60[0] = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  uVar2 = local_60[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    uVar3 = local_30;
    FUN_00240240(local_30,&cf_monoMsg);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    FUN_0023fa84();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_60[0];
    local_60[0] = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  if ((local_45 & 1) == 0) {
    FUN_002406e8(0,local_60[0],&cf_openWindow,0);
  }
  local_11 = local_31 & 1;
  _objc_storeStrong(local_60);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

