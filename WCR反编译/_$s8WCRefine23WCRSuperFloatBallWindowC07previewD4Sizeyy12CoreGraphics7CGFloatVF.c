// _$s8WCRefine23WCRSuperFloatBallWindowC07previewD4Sizeyy12CoreGraphics7CGFloatVF @ 021b41b4

void __s8WCRefine23WCRSuperFloatBallWindowC07previewD4Sizeyy12CoreGraphics7CGFloatVF
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 local_b0;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  
  local_60 = 0;
  local_40 = 0x403c000000000000;
  local_50 = 0x407f400000000000;
  local_58 = param_1;
  FUN_021c8058();
  puVar2 = PTR___s12CoreGraphics7CGFloatVN_02578ba0;
  __ss3minyxx_xtSLRzlF(&local_50,&local_58);
  __ss3maxyxx_xtSLRzlF(&local_38,&local_40,auStack_48,puVar2,param_2);
  local_60 = local_38;
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballSize);
  _swift_beginAccess(puVar1,auStack_78,0x21,0);
  *puVar1 = local_38;
  _swift_endAccess(auStack_78);
  uVar3 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
  (*(code *)PTR__objc_retain_02578638)();
  FUN_02222dc0(0,0,local_38,local_38,uVar3,local_b0);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  FUN_021b4324();
  FUN_021ad198();
  return;
}

