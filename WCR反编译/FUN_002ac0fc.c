// FUN_002ac0fc @ 002ac0fc

void FUN_002ac0fc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_002bad18();
  if ((uVar1 & 1) == 0) {
    FUN_002b7184(param_1,&cf_MMTabBar_layoutSubviews_beforeOrig);
    (*DAT_028c97c8)(param_1,param_2);
    FUN_002b7184(param_1,&cf_MMTabBar_layoutSubviews_afterOrig);
    uVar1 = param_1;
    FUN_0029cc70();
    _objc_retainAutoreleasedReturnValue();
    FUN_002bb194(param_1,uVar1,0);
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  else {
    (*DAT_028c97c8)(param_1,param_2);
  }
  return;
}

