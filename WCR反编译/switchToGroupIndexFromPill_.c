// switchToGroupIndexFromPill: @ 0178e8a4

/* Function Stack Size: 0x18 bytes */

void WCPluginsViewControllerBehavior::switchToGroupIndexFromPill_
               (ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  ID local_a8;
  long local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  ID local_70 [5];
  undefined8 local_48;
  long local_40;
  long_long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cyclicPagingEnabled_026b45e0);
  local_40 = param_3 + (long)(int)(uint)((param_1 & 1) != 0);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pageScrollView_026b4530);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  _CGRectGetWidth(in_d0,in_d1,in_d2,in_d3);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  local_48 = in_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setProgrammaticCircularTransitio_026b47c0,1);
  IVar3 = local_28;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_90 = PTR___NSConcreteStackBlock_02578660;
  local_88 = 0xc2000000;
  local_84 = 0;
  local_80 = FUN_0178eac8;
  local_78 = &DAT_0257a800;
  (*(code *)PTR__objc_retain_02578638)();
  IVar2 = local_28;
  local_70[0] = IVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_a8 = IVar2;
  local_a0 = local_40;
  local_98 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323c90,puVar1,PTR_s_animateWithDuration_animations_c_026ca4e8,&local_90);
  _objc_storeStrong(&local_a8);
  _objc_storeStrong(local_70,0);
  return;
}

