// FUN_003c5a44 @ 003c5a44

void FUN_003c5a44(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined *puVar4;
  double dVar5;
  double local_178;
  uint local_124;
  double local_120;
  undefined8 local_b8;
  double local_b0;
  undefined8 local_a8;
  double local_a0;
  undefined8 uStack_98;
  double local_90;
  undefined8 uStack_88;
  double local_78;
  undefined8 local_70;
  byte local_61;
  ulong local_60;
  byte local_51;
  ulong local_50;
  double local_48;
  ulong local_40;
  byte local_31;
  undefined8 local_30;
  ulong local_28;
  
  puVar2 = &local_28;
  local_28 = 0;
  _objc_storeStrong(puVar2,param_5);
  local_31 = (byte)puVar2;
  local_30 = param_6;
  _WCRHomeScrollPerfIsActive();
  uVar3 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = uVar3;
  if ((local_31 & 1) == 0) {
    local_120 = 0.0;
  }
  else {
    _CACurrentMediaTime();
    local_120 = param_1;
  }
  local_48 = local_120;
  uVar3 = local_28;
  _objc_getAssociatedObject(local_28,&DAT_028ca294);
  _objc_retainAutoreleasedReturnValue();
  local_61 = 0;
  local_124 = 0;
  local_178 = local_120;
  local_50 = uVar3;
  if ((local_31 & 1) != 0) {
    uVar3 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028ca293);
    _objc_retainAutoreleasedReturnValue();
    local_61 = 1;
    local_60 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_124 = 0;
    local_178 = local_120;
    if (((uVar3 & 1) != 0) && (local_124 = 0, local_50 != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_CGSizeValue_0269ec50);
      uVar3 = local_40;
      local_78 = local_120;
      local_70 = param_2;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
      local_124 = (uint)uVar3;
      local_178 = local_78;
      local_b0 = local_120;
      local_a8 = param_2;
      local_a0 = param_3;
      uStack_98 = param_4;
      local_90 = param_3;
      uStack_88 = param_4;
      FUN_003c8edc();
    }
  }
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  uVar1 = DAT_028ca288;
  local_51 = (byte)local_124 & 1;
  if ((local_124 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b8 = uVar1;
    DAT_028ca288 = local_28;
    local_178 = param_3;
    if (DAT_028ca248 != (code *)0x0) {
      (*DAT_028ca248)(local_28,local_30);
      local_178 = param_3;
    }
    uVar3 = local_28;
    DAT_028ca288 = local_b8;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar3,&DAT_028ca293);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    uVar3 = local_28;
    puVar4 = PTR__OBJC_CLASS___NSValue_026ce1f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
    (*(code *)PTR__objc_msgSend_02578628)(local_178,param_4,puVar4,PTR_s_valueWithCGSize__0269ec00);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar3,&DAT_028ca294,puVar4,1);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_b8,0);
  }
  if ((local_31 & 1) == 0) {
    local_178 = 0.0;
  }
  else {
    _CACurrentMediaTime();
  }
  uVar3 = local_40;
  dVar5 = local_178;
  FUN_00372850();
  if ((uVar3 & 1) != 0) {
    FUN_003c67a4(local_28);
    FUN_003c8f34(local_28);
  }
  if ((local_31 & 1) == 0) {
    FUN_003c94dc(local_28);
  }
  FUN_003c69dc(local_28);
  if ((local_31 & 1) != 0) {
    _CACurrentMediaTime();
    _WCRHomeScrollPerfRecordItemLayout((local_178 - local_48) * 1000.0,(dVar5 - local_178) * 1000.0)
    ;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_28,0);
  return;
}

