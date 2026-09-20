// _$s8WCRefine23WCRSuperFloatBallWindowC14sharedInstanceACyFZ @ 0219e614

undefined8 *
__s8WCRefine23WCRSuperFloatBallWindowC14sharedInstanceACyFZ
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *local_b8;
  undefined1 auStack_80 [24];
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 auStack_40 [24];
  
  local_68 = (undefined8 *)0x0;
  FUN_0219e50c();
  _swift_beginAccess();
  local_b8 = (undefined8 *)*param_5;
  (*(code *)PTR__objc_retain_02578638)();
  _swift_endAccess(auStack_40);
  if (local_b8 == (undefined8 *)0x0) {
    local_b8 = (undefined8 *)PTR__OBJC_CLASS___UIScreen_026cdf70;
    _objc_opt_self();
    FUN_02222a00();
    _objc_retainAutoreleasedReturnValue();
    FUN_02222060();
    local_60 = param_1;
    local_58 = param_2;
    local_50 = param_3;
    local_48 = param_4;
    (*(code *)PTR__objc_release_02578630)();
    __s8WCRefine23WCRSuperFloatBallWindowC5frameACSo6CGRectV_tcfC(param_1,param_2,param_3,param_4);
    puVar1 = local_b8;
    local_68 = local_b8;
    FUN_0219e50c();
    (*(code *)PTR__objc_retain_02578638)(local_b8);
    _swift_beginAccess(puVar1,auStack_80,0x21,0);
    uVar2 = *puVar1;
    *puVar1 = local_b8;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    _swift_endAccess(auStack_80);
  }
  return local_b8;
}

