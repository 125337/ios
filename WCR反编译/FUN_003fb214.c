// FUN_003fb214 @ 003fb214

void FUN_003fb214(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                 double *param_5,double *param_6)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  long local_80;
  long local_78;
  double local_70;
  double dStack_68;
  double local_50;
  double dStack_48;
  double *local_40;
  double *local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_40 = param_6;
  local_38 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_translationInView__026cabb0,local_30);
  local_50 = param_1;
  dStack_48 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_velocityInView__026cabd0,local_30);
  lVar1 = local_28;
  local_70 = param_2;
  dStack_68 = param_1;
  _objc_getAssociatedObject(local_28,DAT_026e0328);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_28;
  local_78 = lVar1;
  _objc_getAssociatedObject(local_28,DAT_026e0330);
  _objc_retainAutoreleasedReturnValue();
  local_80 = lVar2;
  if (ABS(local_50) < 1.0) {
    dVar3 = ABS(dStack_48);
    dVar4 = 1.0;
    if ((dVar3 < 1.0) && (local_78 != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_CGPointValue_0269e330);
      local_50 = dVar3;
      dStack_48 = dVar4;
    }
  }
  if (ABS(local_70) < 1.0) {
    dVar3 = ABS(dStack_68);
    dVar4 = 1.0;
    if ((dVar3 < 1.0) && (local_80 != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_CGPointValue_0269e330);
      local_70 = dVar3;
      dStack_68 = dVar4;
    }
  }
  if (local_38 != (double *)0x0) {
    local_38[1] = dStack_48;
    *local_38 = local_50;
  }
  if (local_40 != (double *)0x0) {
    local_40[1] = dStack_68;
    *local_40 = local_70;
  }
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

