// FUN_0177f74c @ 0177f74c

void FUN_0177f74c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6,undefined8 param_7)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_5;
  _objc_storeStrong();
  dVar1 = (double)NEON_ucvtf(param_7);
  dVar4 = *(double *)(param_5 + 0x28);
  dVar1 = dVar1 * dVar4;
  uVar2 = *(undefined8 *)(param_5 + 0x28);
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_5 + 0x20),PTR_s_bounds_026ca548);
  _CGRectGetHeight(uVar3,dVar4,param_3,param_4);
  uVar5 = 0;
  FUN_0177f868();
  (*(code *)PTR__objc_msgSend_02578628)(dVar1,uVar5,uVar2,uVar3,local_20,PTR_s_setFrame__026ca960);
  _objc_storeStrong(&local_20,0);
  return;
}

