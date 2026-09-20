// makeFooterStatsView @ 0198da60

/* Function Stack Size: 0x10 bytes */

ID WCRefineFileManagerViewController::makeFooterStatsView(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double in_d2;
  undefined8 uVar5;
  undefined *local_80 [5];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_30 = param_2;
  local_28 = param_1;
  _objc_alloc();
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  uVar4 = 0;
  uVar3 = 0;
  uVar5 = 0x403e000000000000;
  FUN_0198a0ec();
  local_58 = uVar3;
  local_50 = uVar4;
  local_40 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithFrame__026ca6e8);
  local_38 = puVar1;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
  uVar4 = 0;
  uVar5 = 0x403e000000000000;
  in_d2 = in_d2 - 16.0;
  uVar3 = uVar4;
  FUN_0198a0ec();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,uVar3,in_d2,uVar5,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_80[0] = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setAutoresizingMask__026ca878);
  puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x402a000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_80[0],PTR_s_setFont__026ca958);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_80[0],PTR_s_setTextColor__026caa98);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_80[0],PTR_s_setTextAlignment__026caa90,2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_footerStatsText_026ba530);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_80[0],PTR_s_setText__026caa88);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addSubview__026ca4c0,local_80[0]);
  puVar1 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(local_80);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

