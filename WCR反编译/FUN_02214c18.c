// FUN_02214c18 @ 02214c18

void FUN_02214c18(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  _swift_retain();
  uVar1 = unaff_x20[1];
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  _swift_release(uVar1);
  _swift_release(param_2);
  return;
}

