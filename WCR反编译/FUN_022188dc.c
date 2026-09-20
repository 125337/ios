// FUN_022188dc @ 022188dc

void FUN_022188dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  ulong local_188;
  undefined8 local_148;
  ulong local_108;
  undefined1 auStack_90 [24];
  ulong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 auStack_50 [24];
  ulong local_38;
  
  local_38 = 0;
  local_78 = 0;
  _swift_beginAccess(unaff_x20 + 0x10,auStack_50,0x20,0);
  local_108 = *(ulong *)(unaff_x20 + 0x10);
  (*(code *)PTR__objc_retain_02578638)();
  _swift_endAccess(auStack_50);
  if (local_108 == 0) {
    FUN_0221a630(0);
    (*(code *)PTR__objc_retain_02578638)(param_5);
    FUN_02222060(param_5,local_148);
    local_108 = param_5;
    local_70 = param_1;
    local_68 = param_2;
    local_60 = param_3;
    local_58 = param_4;
    (*(code *)PTR__objc_release_02578630)();
    FUN_02216948();
    local_78 = local_108;
    (*(code *)PTR__objc_retain_02578638)();
    _swift_beginAccess(unaff_x20 + 0x10,auStack_90,0x21,0);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
    *(ulong *)(unaff_x20 + 0x10) = local_108;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    _swift_endAccess(auStack_90);
    (*(code *)PTR__objc_retain_02578638)(local_108);
    (*(code *)PTR__objc_retain_02578638)(local_108);
    local_38 = local_108;
    (*(code *)PTR__objc_release_02578630)();
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    (*(code *)PTR__objc_retain_02578638)(local_108);
    local_38 = local_108;
    (*(code *)PTR__objc_release_02578630)();
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_retain_02578638)(param_5);
  FUN_02222060(param_5,local_148);
  (*(code *)PTR__objc_release_02578630)(param_5);
  FUN_022230c0(param_1,param_2,param_3,param_4,local_108,local_148);
  (*(code *)PTR__objc_release_02578630)(local_108);
  local_188 = local_108;
  FUN_02223880(local_108,local_148);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(local_108);
  if (local_188 == 0) {
    local_188 = 0;
  }
  (*(code *)PTR__objc_retain_02578638)(param_5);
  uVar3 = local_188;
  __ss3neeoiySbyXlSg_ABtF(local_188,param_5);
  _swift_unknownObjectRelease(param_5);
  _swift_unknownObjectRelease(local_188);
  uVar1 = local_38;
  if ((uVar3 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    (*(code *)PTR__objc_retain_02578638)(uVar1);
    FUN_02222080(param_5,local_148,uVar1);
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    (*(code *)PTR__objc_retain_02578638)(uVar1);
    FUN_02222b40(uVar1,local_148);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    (*(code *)PTR__objc_retain_02578638)(uVar1);
    FUN_02221e40(param_5,local_148,uVar1);
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  FUN_022175a8();
  FUN_022173fc();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*(code *)PTR__objc_release_02578630)(local_38);
  return;
}

