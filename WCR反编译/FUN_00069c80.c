// FUN_00069c80 @ 00069c80

byte FUN_00069c80(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                 byte param_5,code *param_6)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  uint local_9c;
  long local_78;
  undefined8 local_70;
  double dStack_68;
  byte local_59;
  undefined8 local_58;
  double dStack_50;
  long local_48;
  undefined8 local_40;
  double dStack_38;
  code *local_30;
  byte local_21;
  undefined8 local_20;
  long local_18;
  
  plVar2 = &local_18;
  local_18 = 0;
  _objc_storeStrong(plVar2,param_3);
  local_30 = param_6;
  local_21 = param_5;
  local_20 = param_4;
  FUN_00067398();
  if (((ulong)plVar2 & 1) != 0) {
    FUN_00069244(local_18);
  }
  dStack_38 = *(double *)(PTR__CGPointZero_025782e0 + 8);
  uVar4 = *(undefined8 *)PTR__CGPointZero_025782e0;
  lVar3 = local_18;
  local_40 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_panGestureRecognizer_0269dd98);
  _objc_retainAutoreleasedReturnValue();
  local_48 = lVar3;
  if (lVar3 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_velocityInView__026cabd0,local_18);
    local_58 = uVar4;
    dStack_50 = param_2;
    local_40 = uVar4;
    dStack_38 = param_2;
  }
  if (local_30 == (code *)0x0) {
    local_9c = local_21 & 1;
  }
  else {
    lVar3 = local_18;
    (*local_30)(local_18,local_20,local_21 & 1);
    local_9c = (uint)lVar3;
  }
  local_59 = local_9c != 0;
  if (local_48 == 0) {
    dStack_68 = *(double *)(PTR__CGPointZero_025782e0 + 8);
    local_70 = *(undefined8 *)PTR__CGPointZero_025782e0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_velocityInView__026cabd0,local_18);
    local_70 = uVar4;
    dStack_68 = param_2;
  }
  if ((ABS(dStack_38) < 1.0) && (1.0 <= ABS(dStack_68))) {
    dStack_38 = dStack_68;
    local_40 = local_70;
  }
  lVar3 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028c7cb0);
  _objc_retainAutoreleasedReturnValue();
  local_78 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,dStack_38,lVar3,PTR_s_handleWillEndDraggingWithVelocit_0269de10);
  bVar1 = local_59;
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_18,0);
  return bVar1 & 1;
}

