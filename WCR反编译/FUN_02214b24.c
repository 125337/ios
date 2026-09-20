// FUN_02214b24 @ 02214b24

void FUN_02214b24(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  _swift_retain();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  _swift_release(uVar1);
  _swift_release(param_1);
  return;
}

