// FUN_02205614 @ 02205614

undefined8 * FUN_02205614(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1[3] == 0) {
    uVar2 = *param_1;
    param_2[1] = param_1[1];
    *param_2 = uVar2;
    uVar2 = param_1[2];
    param_2[3] = param_1[3];
    param_2[2] = uVar2;
  }
  else {
    lVar1 = param_1[3];
    param_2[3] = lVar1;
    (*(code *)**(undefined8 **)(lVar1 + -8))();
  }
  return param_2;
}

