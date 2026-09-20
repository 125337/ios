// FUN_003fae24 @ 003fae24

void FUN_003fae24(double param_1,double param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  long local_b8;
  long local_58;
  long local_50 [3];
  long local_38;
  undefined4 local_2c;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    local_b8 = local_28;
    FUN_003f1f7c();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = local_b8 == 0;
    local_38 = local_b8;
    if (bVar1) {
      local_58 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      local_b8 = local_58;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50[0] = local_b8;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    if (local_50[0] == 0) {
      local_2c = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_translationInView__026cabb0,local_50[0]);
      dVar5 = param_2;
      dVar6 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_velocityInView__026cabd0,local_50[0]);
      lVar3 = local_28;
      uVar2 = DAT_026e0328;
      if ((1.0 <= ABS(param_1)) || (1.0 <= ABS(param_2))) {
        puVar4 = PTR__OBJC_CLASS___NSValue_026ce1f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (param_1,param_2,PTR__OBJC_CLASS___NSValue_026ce1f0,
                   PTR_s_valueWithCGPoint__0269e328);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(lVar3,uVar2,puVar4,1);
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      lVar3 = local_28;
      uVar2 = DAT_026e0330;
      if ((1.0 <= ABS(dVar5)) || (1.0 <= ABS(dVar6))) {
        puVar4 = PTR__OBJC_CLASS___NSValue_026ce1f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (dVar5,dVar6,PTR__OBJC_CLASS___NSValue_026ce1f0,PTR_s_valueWithCGPoint__0269e328);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(lVar3,uVar2,puVar4,1);
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      local_2c = 0;
    }
    _objc_storeStrong(local_50);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

