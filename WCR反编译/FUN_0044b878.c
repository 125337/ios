// FUN_0044b878 @ 0044b878

void FUN_0044b878(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_38;
  undefined *local_30;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028caa98)(param_1,param_2);
  uVar1 = local_18;
  FUN_00459d08();
  if ((uVar1 & 1) == 0) {
    FUN_00459e94(local_18);
    local_48 = PTR___NSConcreteGlobalBlock_02578658;
    local_40 = 0xd0800000;
    local_3c = 0;
    local_38 = FUN_0045d5cc;
    local_30 = &DAT_025797b0;
    local_28 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_performWithoutAnimation__0269e7e0,&local_48);
  }
  return;
}

