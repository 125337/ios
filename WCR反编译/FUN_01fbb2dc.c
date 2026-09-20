// FUN_01fbb2dc @ 01fbb2dc

void FUN_01fbb2dc(double param_1,double param_2,long param_3)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_3;
  _objc_storeStrong(&local_20);
  if (*(long *)(param_3 + 0x20) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_3 + 0x20),PTR_s_size_026cab00);
    uVar1 = *(undefined8 *)(param_3 + 0x20);
    dVar2 = (*(double *)(param_3 + 0x28) - param_1) / 2.0;
    dVar3 = (*(double *)(param_3 + 0x30) - param_2) / 2.0;
    FUN_01fb73a4();
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar2,dVar3,param_1,param_2,uVar1,PTR_s_drawInRect__026ca610);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

