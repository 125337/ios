// FUN_0019fd48 @ 0019fd48

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_0019fd48(double param_1,double param_2,double param_3,undefined8 param_4,undefined8 param_5
                 )

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  long lVar6;
  double dVar7;
  double dVar8;
  long local_e8;
  long local_b8;
  long local_50;
  double local_48;
  double dStack_40;
  double local_38;
  undefined8 uStack_30;
  byte local_21;
  long *plVar5;
  
  plVar5 = &local_50;
  local_50 = 0;
  local_48 = param_1;
  dStack_40 = param_2;
  local_38 = param_3;
  uStack_30 = param_4;
  _objc_storeStrong(plVar5,param_5);
  uVar4 = (uint)plVar5;
  dVar8 = local_38;
  FUN_001a01e0(local_48,dStack_40);
  if ((uVar4 & 1) == 0) {
    local_21 = 1;
  }
  else {
    bVar3 = true;
    if (local_50 != 0) {
      lVar6 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      bVar3 = lVar6 == 0;
      (*(code *)PTR__objc_release_02578630)(lVar6);
    }
    if (bVar3) {
      local_21 = 0;
    }
    else {
      bVar2 = false;
      bVar1 = false;
      bVar3 = false;
      if ((local_48 <= 1.0) && (bVar3 = false, dStack_40 <= 1.0)) {
        local_b8 = local_50;
        dVar7 = dStack_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_contentView_026ca5a8);
        _objc_retainAutoreleasedReturnValue();
        bVar2 = true;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar3 = false;
        if (120.0 < dVar8) {
          local_e8 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_contentView_026ca5a8);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar3 = 30.0 < dVar7;
        }
      }
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_e8);
      }
      if (bVar2) {
        (*(code *)PTR__objc_release_02578630)(local_b8);
      }
      if (bVar3) {
        local_21 = 1;
      }
      else {
        local_21 = 0;
      }
    }
  }
  _objc_storeStrong(&local_50,0);
  return local_21 & 1;
}

