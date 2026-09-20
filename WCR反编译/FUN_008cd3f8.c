// FUN_008cd3f8 @ 008cd3f8

void FUN_008cd3f8(undefined8 param_1,undefined8 param_2)

{
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_38;
  undefined *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028ce260)(param_1,param_2);
  FUN_008d1600(local_18);
  local_48 = PTR___NSConcreteGlobalBlock_02578658;
  local_40 = 0xd0800000;
  local_3c = 0;
  local_38 = FUN_008d1ab0;
  local_30 = &DAT_025797b0;
  local_28 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_performWithoutAnimation__0269e7e0,&local_48);
  return;
}

