// FUN_0112aea4 @ 0112aea4

void FUN_0112aea4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  long local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  long local_48;
  uint local_3c;
  long local_38;
  long local_30;
  long local_28;
  
  lVar5 = *(long *)(param_1 + 0x20);
  local_30 = param_1;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_containerView_026a6d08);
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar5;
  (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  lVar3 = local_38;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  puVar1 = PTR___NSConcreteStackBlock_02578660;
  if (lVar5 != 0) {
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_0112b0a8;
    local_50 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    lVar4 = local_38;
    local_48 = lVar3;
    local_98 = puVar1;
    local_90 = 0xc2000000;
    local_8c = 0;
    local_88 = FUN_0112b184;
    local_80 = &DAT_02583fe0;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = lVar4;
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3fd3333333333333,0,puVar2,PTR_s_animateWithDuration_delay_option_026ca4f0,0x10000,
               &local_68,&local_98);
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_48,0);
  }
  local_3c = (uint)(lVar5 == 0);
  _objc_storeStrong(&local_38,0);
  return;
}

