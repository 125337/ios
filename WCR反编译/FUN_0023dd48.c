// FUN_0023dd48 @ 0023dd48

void FUN_0023dd48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_b8;
  ulong local_60;
  ulong local_58;
  ulong local_50 [3];
  ulong local_38;
  undefined8 local_30;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_3;
  local_18 = param_2;
  _objc_storeStrong(&local_28,param_4);
  uVar1 = local_28;
  local_30 = param_1;
  FUN_0023fa84();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    uVar2 = local_28;
    FUN_00240240(local_28,&cf_contact);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    FUN_0023fa84();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_38;
    local_38 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  uVar1 = local_28;
  FUN_00240240(local_28,&cf_title);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_28;
  local_50[0] = uVar1;
  FUN_00240240(local_28,&cf_message);
  _objc_retainAutoreleasedReturnValue();
  local_b8 = uVar2;
  if (uVar2 == 0) {
    local_60 = local_28;
    FUN_00240240(local_28,&cf_content);
    _objc_retainAutoreleasedReturnValue();
    local_b8 = local_60;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_b8;
  if (uVar2 == 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar1 = local_38;
  FUN_00240100(local_38,local_50[0],local_58);
  if ((uVar1 & 1) == 0) {
    (*DAT_028c92c8)(local_30,local_18,local_20,local_28);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(local_50,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

