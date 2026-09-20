// FUN_004e0f3c @ 004e0f3c

byte FUN_004e0f3c(double param_1,double param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  double local_80;
  double dStack_78;
  ulong local_70;
  ulong local_68;
  double local_60;
  double dStack_58;
  double local_40;
  undefined4 local_34;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  if (local_30 == 0) {
    local_21 = 0;
    local_34 = 1;
    goto LAB_004e1420;
  }
  _CFAbsoluteTimeGetCurrent();
  local_40 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_contentOffset_0269dd18);
  uVar1 = local_30;
  local_60 = param_1;
  dStack_58 = param_2;
  _objc_getAssociatedObject(local_30,&DAT_028cadf0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_30;
  local_68 = uVar1;
  _objc_getAssociatedObject(local_30,&DAT_028cadf1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_30;
  local_70 = uVar2;
  if (local_68 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSValue_026ce1f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,dStack_58,PTR__OBJC_CLASS___NSValue_026ce1f0,
               PTR_s_valueWithCGPoint__0269e328);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar1,&DAT_028cadf0,puVar3,1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  else {
    dStack_78 = *(double *)(PTR__CGPointZero_025782e0 + 8);
    local_80 = *(double *)PTR__CGPointZero_025782e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_getValue__026a0480,&local_80);
    uVar1 = local_30;
    dVar4 = ABS(dStack_58 - dStack_78);
    if (dVar4 <= 0.5 || dVar4 < ABS(local_60 - local_80) * DAT_023241d0) {
      if ((0.5 < ABS(local_60 - local_80)) || (0.5 < dVar4)) {
        puVar3 = PTR__OBJC_CLASS___NSValue_026ce1f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,dStack_58,PTR__OBJC_CLASS___NSValue_026ce1f0,
                   PTR_s_valueWithCGPoint__0269e328);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar1,&DAT_028cadf0,puVar3,1);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSValue_026ce1f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,dStack_58,PTR__OBJC_CLASS___NSValue_026ce1f0,
                 PTR_s_valueWithCGPoint__0269e328);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar1,&DAT_028cadf0,puVar3,1);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
  }
  uVar1 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_doubleValue_026ca608);
  dVar4 = local_40;
  if ((uVar1 & 1) == 0) {
LAB_004e13c4:
    local_21 = 0;
  }
  else {
    dVar5 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_doubleValue_026ca608);
    if ((dVar4 - dVar5 < 0.0) || (DAT_02323c70 <= dVar4 - dVar5)) goto LAB_004e13c4;
    local_21 = 1;
  }
  local_34 = 1;
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
LAB_004e1420:
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

