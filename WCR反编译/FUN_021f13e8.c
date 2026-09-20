// FUN_021f13e8 @ 021f13e8

undefined1  [16] FUN_021f13e8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  undefined8 unaff_x20;
  undefined8 local_b8;
  undefined8 local_a0;
  undefined8 local_98;
  
  FUN_02223880();
  _objc_retainAutoreleasedReturnValue();
  local_a0 = param_1;
  local_98 = param_2;
  if (param_3 != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    (*(code *)PTR__objc_retain_02578638)(unaff_x20);
    uVar2 = param_3;
    __ss3neeoiySbyXlSg_ABtF(param_3,unaff_x20);
    _swift_unknownObjectRelease(unaff_x20);
    _swift_unknownObjectRelease(param_3);
    if ((uVar2 & 1) == 0) {
      (*(code *)PTR__objc_release_02578630)(param_3);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)(unaff_x20);
      FUN_02222200(param_3,local_b8,unaff_x20);
      _swift_unknownObjectRelease(unaff_x20);
      (*(code *)PTR__objc_release_02578630)(param_3);
      local_a0 = param_1;
      local_98 = param_2;
    }
  }
  auVar1._8_8_ = local_98;
  auVar1._0_8_ = local_a0;
  return auVar1;
}

