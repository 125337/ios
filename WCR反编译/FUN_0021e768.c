// FUN_0021e768 @ 0021e768

void FUN_0021e768(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  double dVar5;
  undefined8 uVar6;
  ulong local_a0;
  undefined1 local_92;
  byte local_91;
  ulong local_90;
  ulong local_88;
  double local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  double local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_2c;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
    local_50 = param_1;
    local_48 = param_2;
    local_40 = param_3;
    local_38 = param_4;
    _CGRectGetWidth(param_1,param_2);
    uVar6 = 0x3ff0000000000000;
    if (1.0 <= param_1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
      local_80 = param_1;
      local_78 = uVar6;
      local_70 = param_3;
      local_68 = param_4;
      _CGRectGetHeight(param_1,uVar6,param_3,param_4);
      if (1.0 <= param_1) {
        uVar1 = local_28;
        FUN_0021ecfc();
        _objc_retainAutoreleasedReturnValue();
        local_88 = uVar1;
        if (uVar1 == 0) {
          local_2c = 1;
        }
        else {
          uVar1 = local_28;
          FUN_0021f5e4();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_28;
          local_90 = uVar1;
          FUN_0021f930(local_28,uVar1);
          local_91 = (byte)uVar2;
          uVar2 = local_28;
          _objc_getAssociatedObject(local_28,&DAT_028c91ad);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)();
          uVar1 = local_88;
          local_92 = (undefined1)uVar3;
          if ((local_91 & 1) == 0) {
            if ((uVar3 & 1) != 0) {
              uVar1 = local_28;
              _objc_getAssociatedObject(local_28,&DAT_028c91ae);
              _objc_retainAutoreleasedReturnValue();
              local_a0 = uVar1;
              FUN_0021fa9c(local_88);
              if ((local_a0 != 0) && (local_a0 - local_88 != 0)) {
                FUN_0021fa9c(local_a0 - local_88,local_a0);
              }
              uVar1 = local_28;
              puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
              _objc_retainAutoreleasedReturnValue();
              _objc_setAssociatedObject(uVar1,&DAT_028c91ad,puVar4,1);
              (*(code *)PTR__objc_release_02578630)(puVar4);
              _objc_setAssociatedObject(local_28,&DAT_028c91ae,0,1);
              _objc_storeStrong(&local_a0,0);
            }
            local_2c = 1;
          }
          else {
            FUN_001ec32c();
            dVar5 = param_1;
            FUN_001ec428();
            uVar3 = uVar2;
            FUN_001ec4c4();
            FUN_001ec5a4();
            _objc_retainAutoreleasedReturnValue();
            FUN_001ebf20(param_1,dVar5,uVar1,uVar2 & 0xffffffff,0);
            (*(code *)PTR__objc_release_02578630)(uVar3);
            uVar1 = local_28;
            puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
            _objc_retainAutoreleasedReturnValue();
            _objc_setAssociatedObject(uVar1,&DAT_028c91ad,puVar4,1);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            _objc_setAssociatedObject(local_28,&DAT_028c91ae,local_88,1);
            local_2c = 0;
          }
          _objc_storeStrong(&local_90,0);
        }
        _objc_storeStrong(&local_88,0);
        goto LAB_0021ec60;
      }
    }
    local_2c = 1;
  }
LAB_0021ec60:
  _objc_storeStrong(&local_28,0);
  return;
}

