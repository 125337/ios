// FUN_00270fb0 @0x270fb0


void FUN_00270fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,

                 undefined8 param_5)



{

  undefined8 uVar1;

  undefined8 uVar2;

  

  uVar1 = *(undefined8 *)PTR__CGPointZero_00388b38;

  uVar2 = *(undefined8 *)(PTR__CGPointZero_00388b38 + 8);

  _objc_retain();

  FUN_0029d140(uVar1,uVar2,param_3,param_4,param_5);

  uVar1 = _CGRectGetMidX(param_1,param_2,param_3,param_4);

  uVar2 = _CGRectGetMidY(param_1,param_2,param_3,param_4);

  FUN_0029d320(uVar1,uVar2,param_5);

  _objc_release(param_5);

  return;

}




