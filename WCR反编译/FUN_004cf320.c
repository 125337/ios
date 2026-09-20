// FUN_004cf320 @ 004cf320

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_004cf320(double param_1,undefined8 param_2,undefined8 param_3,double param_4,
                 undefined8 param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  long local_58 [3];
  long local_40;
  undefined4 local_34;
  double local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  local_30 = param_1;
  if (local_28 == 0) {
    local_34 = 1;
  }
  else {
    lVar2 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028cac95);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_28;
    local_40 = lVar2;
    _objc_getAssociatedObject(local_28,&DAT_028cac96);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 0x3fe0000000000000;
    local_58[0] = lVar3;
    if (0.5 < local_30) {
      _objc_setAssociatedObject(local_28,&DAT_028cac95,0,1);
      _objc_setAssociatedObject(local_28,&DAT_028cac97,0,1);
      _objc_setAssociatedObject(local_28,&DAT_028cac96,0,1);
      _objc_setAssociatedObject(local_28,&DAT_028cac98,0,1);
      local_34 = 0;
    }
    else {
      dVar5 = local_30;
      uVar7 = uVar6;
      uVar8 = param_3;
      dVar9 = param_4;
      if (local_40 != 0) {
        dVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_UIEdgeInsetsValue_026a4138);
        lVar2 = local_28;
        dVar5 = param_4;
        uVar7 = param_3;
        uVar8 = uVar6;
        dVar9 = dVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentInset_0269dcc8);
        uVar1 = (uint)lVar2;
        FUN_004d0834();
        if ((uVar1 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setContentInset__0269e770);
          dVar5 = dVar4;
          uVar7 = uVar6;
          uVar8 = param_3;
          dVar9 = param_4;
        }
      }
      if (local_58[0] != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_UIEdgeInsetsValue_026a4138);
        (*(code *)PTR__objc_msgSend_02578628)
                  (dVar5,uVar7,uVar8,dVar9,local_28,PTR_s_setScrollIndicatorInsets__0269e778);
      }
      _objc_setAssociatedObject(local_28,&DAT_028cac95,0,1);
      _objc_setAssociatedObject(local_28,&DAT_028cac97,0,1);
      _objc_setAssociatedObject(local_28,&DAT_028cac96,0,1);
      _objc_setAssociatedObject(local_28,&DAT_028cac98,0,1);
      local_34 = 1;
    }
    _objc_storeStrong(local_58);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

