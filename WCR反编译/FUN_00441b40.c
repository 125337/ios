// FUN_00441b40 @ 00441b40

void FUN_00441b40(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,uint param_5
                 )

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _CFAbsoluteTimeGetCurrent();
  uVar3 = local_18;
  uVar2 = local_20;
  pcVar1 = DAT_028caa08;
  uVar4 = local_28;
  FUN_00454d84();
  _objc_retainAutoreleasedReturnValue();
  (*pcVar1)(uVar3,uVar2,uVar4,param_4 & 1,param_5 & 1);
  (*(code *)PTR__objc_release_02578630)(uVar4);
  _objc_storeStrong(&local_28,0);
  return;
}

