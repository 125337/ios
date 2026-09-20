// FUN_0220c1f8 @ 0220c1f8

void FUN_0220c1f8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 local_40;
  
  uVar1 = *param_2;
  (*(code *)PTR__objc_retain_02578638)();
  puVar2 = PTR__OBJC_CLASS___UIScreen_026cdf70;
  _objc_opt_self();
  FUN_02222a00();
  _objc_retainAutoreleasedReturnValue();
  FUN_02222c00();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  FUN_02222f00(param_1,uVar1,local_40);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  _objc_opt_self();
  FUN_022220e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  FUN_02221d00();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  FUN_02223060(uVar1,local_40,puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  uVar4 = *(undefined8 *)PTR__kCALineCapRound_02578408;
  (*(code *)PTR__objc_retain_02578638)();
  FUN_02223180(uVar1,local_40,uVar4);
  (*(code *)PTR__objc_release_02578630)(uVar4);
  uVar4 = *(undefined8 *)PTR__kCALineJoinRound_02578418;
  (*(code *)PTR__objc_retain_02578638)();
  FUN_022231e0(uVar1,local_40,uVar4);
  (*(code *)PTR__objc_release_02578630)(uVar4);
  (*(code *)PTR__objc_retain_02578638)(uVar1);
  FUN_02223220(uVar1,local_40,0);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*(code *)PTR__objc_retain_02578638)(uVar1);
  uVar4 = *(undefined8 *)PTR__kCACornerCurveContinuous_025783c8;
  (*(code *)PTR__objc_retain_02578638)();
  FUN_02222f20(uVar1,local_40,uVar4);
  (*(code *)PTR__objc_release_02578630)(uVar4);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*(code *)PTR__objc_retain_02578638)(param_3);
  uVar4 = param_3;
  FUN_02222960(param_3,local_40);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(param_3);
  FUN_02221e20(uVar4,local_40,uVar1);
  (*(code *)PTR__objc_release_02578630)(uVar4);
  return;
}

