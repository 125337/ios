// FUN_002b6e10 @ 002b6e10

void FUN_002b6e10(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  long local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  long local_68;
  undefined1 local_59;
  long local_58;
  long local_40;
  undefined4 local_38;
  byte local_31;
  undefined8 local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_31 = param_3;
  if (local_28 == 0) {
    local_38 = 1;
  }
  else {
    lVar6 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028c9805);
    _objc_retainAutoreleasedReturnValue();
    local_40 = lVar6;
    if (lVar6 == 0) {
      local_38 = 1;
    }
    else {
      _objc_setAssociatedObject(local_28,&DAT_028c9805,0,1);
      local_59 = 0;
      bVar5 = false;
      uVar1 = (local_31 & 1) != 0;
      if ((bool)uVar1) {
        lVar6 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        bVar5 = lVar6 != 0;
        local_59 = uVar1;
        local_58 = lVar6;
        (*(code *)PTR__objc_release_02578630)(lVar6);
        uVar1 = local_59;
      }
      local_59 = uVar1;
      lVar6 = local_40;
      puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
      puVar2 = PTR___NSConcreteStackBlock_02578660;
      if (bVar5) {
        local_88 = PTR___NSConcreteStackBlock_02578660;
        local_80 = 0xc2000000;
        local_7c = 0;
        local_78 = FUN_002b84d0;
        local_70 = &DAT_02578c20;
        (*(code *)PTR__objc_retain_02578638)();
        lVar4 = local_40;
        local_68 = lVar6;
        local_b0 = puVar2;
        local_a8 = 0xc2000000;
        local_a4 = 0;
        local_a0 = FUN_002b8514;
        local_98 = &DAT_025790c0;
        (*(code *)PTR__objc_retain_02578638)();
        local_90 = lVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_02323c68,DAT_02323e38,puVar3,PTR_s_animateWithDuration_delay_option_026ca4f0,
                   6,&local_88,&local_b0);
        _objc_storeStrong(&local_90);
        _objc_storeStrong(&local_68,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_removeFromSuperview_026ca800);
      }
      local_38 = 0;
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

