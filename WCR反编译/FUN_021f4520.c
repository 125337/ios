// FUN_021f4520 @ 021f4520

void FUN_021f4520(undefined8 param_1,code *param_2,undefined8 param_3,long param_4,long param_5,
                 long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x21;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  
  lVar4 = *(long *)(param_5 + -8);
  lVar5 = *(long *)(lVar4 + 0x40);
  local_c0 = param_1;
  local_b8 = param_2;
  local_b0 = param_3;
  local_a8 = param_4;
  local_a0 = param_5;
  local_98 = param_6;
  (*(code *)PTR____chkstk_darwin_02578668)();
  puVar1 = local_d0 + -(lVar5 + 0xfU & 0xfffffffffffffff0);
  lVar3 = *(long *)(param_4 + 0x10);
  lVar6 = *(long *)(lVar3 + -8);
  lVar5 = *(long *)(lVar6 + 0x40);
  (*(code *)PTR____chkstk_darwin_02578668)();
  lVar5 = (long)puVar1 - (lVar5 + 0xfU & 0xfffffffffffffff0);
  lVar7 = *(long *)(*(long *)(param_4 + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_02578668)();
  lVar7 = lVar5 - (lVar7 + 0xfU & 0xfffffffffffffff0);
  FUN_021fcb00();
  lVar2 = lVar7;
  (**(code **)(lVar6 + 0x30))(lVar7,1,lVar3);
  if ((int)lVar2 == 1) {
    (**(code **)(*(long *)(local_98 + -8) + 0x38))(local_c0,1);
  }
  else {
    (**(code **)(lVar6 + 0x20))(lVar5,lVar7,lVar3);
    (*local_b8)(local_c0,lVar5,puVar1);
    if (unaff_x21 != 0) {
      (**(code **)(lVar6 + 8))(lVar5,lVar3);
      (**(code **)(lVar4 + 0x20))(param_8,puVar1,local_a0);
      return;
    }
    (**(code **)(lVar6 + 8))(lVar5,lVar3);
    (**(code **)(*(long *)(local_98 + -8) + 0x38))(local_c0,0,1);
  }
  return;
}

