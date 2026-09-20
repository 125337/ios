// FUN_001427fc @ 001427fc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

double FUN_001427fc(double param_1,undefined8 param_2,undefined8 param_3,double param_4,
                   undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  long local_80 [3];
  double local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  double dStack_50;
  long local_48;
  double local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  double dStack_28;
  
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_frame_026ca640);
  lVar4 = local_48;
  local_68 = param_1;
  uStack_60 = param_2;
  local_58 = param_3;
  dStack_50 = param_4;
  _objc_getAssociatedObject(local_48,DAT_026df8e8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_48;
  uVar1 = DAT_026df8e8;
  local_80[0] = lVar4;
  if (lVar4 == 0) {
    puVar5 = PTR__OBJC_CLASS___NSValue_026ce1f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,uStack_60,local_58,dStack_50,PTR__OBJC_CLASS___NSValue_026ce1f0,
               PTR_s_valueWithCGRect__0269e130);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(lVar2,uVar1,puVar5,1);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    uStack_38 = uStack_60;
    local_40 = local_68;
    dStack_28 = dStack_50;
    local_30 = local_58;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_CGRectValue_0269e128);
    dVar6 = param_4;
    _CGRectGetWidth(param_4,param_3,param_2,param_1);
    dVar7 = local_68;
    _CGRectGetWidth(local_68,uStack_60,local_58,dStack_50);
    bVar3 = true;
    if (ABS(dVar6 - dVar7) < 0.5) {
      dVar6 = param_4;
      _CGRectGetHeight(param_4,param_3,param_2,param_1);
      dVar7 = local_68;
      _CGRectGetHeight(local_68,uStack_60,local_58,dStack_50);
      bVar3 = true;
      if (ABS(dVar6 - dVar7) < 0.5) {
        dVar6 = param_4;
        _CGRectGetMinY(param_4,param_3,param_2,param_1);
        dVar7 = local_68;
        _CGRectGetMinY(local_68,uStack_60,local_58,dStack_50);
        bVar3 = 0.5 <= ABS(dVar6 - dVar7);
      }
    }
    lVar2 = local_48;
    uVar1 = DAT_026df8e8;
    local_40 = param_4;
    uStack_38 = param_3;
    local_30 = param_2;
    dStack_28 = param_1;
    if (bVar3) {
      puVar5 = PTR__OBJC_CLASS___NSValue_026ce1f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,uStack_60,local_58,dStack_50,PTR__OBJC_CLASS___NSValue_026ce1f0,
                 PTR_s_valueWithCGRect__0269e130);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(lVar2,uVar1,puVar5,1);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      uStack_38 = uStack_60;
      local_40 = local_68;
      dStack_28 = dStack_50;
      local_30 = local_58;
    }
  }
  _objc_storeStrong(local_80);
  _objc_storeStrong(&local_48,0);
  return local_40;
}

