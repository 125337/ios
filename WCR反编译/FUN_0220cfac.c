// FUN_0220cfac @ 0220cfac

void FUN_0220cfac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  undefined8 local_88;
  
  uVar3 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  FUN_02222060(unaff_x20,local_88);
  (*(code *)PTR__objc_release_02578630)(unaff_x20);
  FUN_022230c0(uVar3,param_2,param_3,param_4,param_5,local_88);
  (*(code *)PTR__objc_release_02578630)(param_5);
  uVar3 = param_6;
  FUN_02221d20(param_6,local_88);
  _objc_retainAutoreleasedReturnValue();
  FUN_02223360(param_5,local_88);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_retain_02578638)(param_5);
  FUN_02221d20(param_6,local_88);
  _objc_retainAutoreleasedReturnValue();
  FUN_02223480(param_5,local_88);
  (*(code *)PTR__objc_release_02578630)(param_6);
  (*(code *)PTR__objc_release_02578630)(param_5);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  _objc_opt_self();
  FUN_022220e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_02221d00();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  FUN_02223060(param_5,local_88,puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  FUN_02223200(param_1,param_5,local_88);
  uVar3 = *(undefined8 *)PTR__kCALineCapRound_02578408;
  (*(code *)PTR__objc_retain_02578638)();
  FUN_02223180(param_5,local_88,uVar3);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  uVar3 = *(undefined8 *)PTR__kCALineJoinRound_02578418;
  (*(code *)PTR__objc_retain_02578638)();
  FUN_022231e0(param_5,local_88,uVar3);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  return;
}

