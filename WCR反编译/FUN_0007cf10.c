// FUN_0007cf10 @ 0007cf10

/* WARNING: Restarted to delay deadcode elimination for space: stack */

long FUN_0007cf10(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  long local_98;
  double local_90;
  undefined8 uStack_88;
  double local_80;
  double dStack_78;
  long local_68;
  undefined4 local_60;
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  double local_38;
  double dStack_30;
  long local_28;
  
  local_50 = 0;
  local_48 = param_1;
  uStack_40 = param_2;
  local_38 = param_3;
  dStack_30 = param_4;
  _objc_storeStrong(&local_50,param_5);
  if (((local_50 == 0) || (local_38 <= 0.5)) || (uStack_88 = 0x3fe0000000000000, dStack_30 <= 0.5))
  {
    _objc_setAssociatedObject(local_50,DAT_026df790,0,1);
    _objc_setAssociatedObject(local_50,DAT_026df798,0,1);
    local_28 = 0;
    local_60 = 1;
  }
  else {
    lVar3 = local_50;
    local_90 = dStack_30;
    _objc_getAssociatedObject(local_50,DAT_026df790);
    _objc_retainAutoreleasedReturnValue();
    local_68 = lVar3;
    if (lVar3 == 0) {
      uStack_88 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 8);
      local_90 = *(double *)PTR__CGRectZero_025782f0;
      dStack_78 = *(double *)(PTR__CGRectZero_025782f0 + 0x18);
      local_80 = *(double *)(PTR__CGRectZero_025782f0 + 0x10);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_CGRectValue_0269e128);
      local_80 = param_3;
      dStack_78 = param_4;
    }
    lVar3 = local_50;
    _objc_getAssociatedObject(local_50,DAT_026df798);
    _objc_retainAutoreleasedReturnValue();
    local_98 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)();
    uVar2 = (uint)lVar3;
    if ((local_68 == 0) ||
       (FUN_0007e710(local_90,uStack_88,local_80,dStack_78,local_48,uStack_40,local_38,dStack_30),
       (uVar2 & 1) == 0)) {
      lVar3 = local_50;
      uVar1 = DAT_026df790;
      local_98 = 1;
      puVar4 = PTR__OBJC_CLASS___NSValue_026ce1f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,uStack_40,local_38,dStack_30,PTR__OBJC_CLASS___NSValue_026ce1f0,
                 PTR_s_valueWithCGRect__0269e130);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(lVar3,uVar1,puVar4,1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    else {
      local_98 = local_98 + 1;
    }
    lVar3 = local_50;
    uVar1 = DAT_026df798;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_98);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(lVar3,uVar1,puVar4,1);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_28 = local_98;
    local_60 = 1;
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_50,0);
  return local_28;
}

