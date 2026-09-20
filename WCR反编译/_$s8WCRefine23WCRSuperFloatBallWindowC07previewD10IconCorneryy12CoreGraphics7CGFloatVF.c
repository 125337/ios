// _$s8WCRefine23WCRSuperFloatBallWindowC07previewD10IconCorneryy12CoreGraphics7CGFloatVF @ 021b4d5c

void __s8WCRefine23WCRSuperFloatBallWindowC07previewD10IconCorneryy12CoreGraphics7CGFloatVF
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined8 local_58;
  undefined8 local_50;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  
  local_40 = 0;
  local_50 = 0x4059000000000000;
  local_58 = param_1;
  FUN_021c8058();
  puVar2 = PTR___s12CoreGraphics7CGFloatVN_02578ba0;
  __ss3minyxx_xtSLRzlF(&local_50,&local_58);
  __ss3maxyxx_xtSLRzlF(&local_38,&local_40,auStack_48,puVar2,param_2);
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballIconCornerPercent);
  _swift_beginAccess(puVar1,auStack_70,0x21,0);
  *puVar1 = local_38;
  _swift_endAccess(auStack_70);
  FUN_021b4324();
  FUN_021ad198();
  return;
}

