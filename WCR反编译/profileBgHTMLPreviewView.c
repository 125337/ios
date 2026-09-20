// profileBgHTMLPreviewView @ 01cd40e0

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

ID WCRefineProfileCardBeautifyViewController::profileBgHTMLPreviewView(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double in_d2;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double local_150;
  undefined *local_120;
  undefined4 local_118;
  undefined4 local_114;
  code *local_110;
  undefined *local_108;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined8 local_f0;
  undefined8 local_e8;
  double local_e0;
  double local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  double local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  double local_90;
  double local_88;
  undefined *local_80;
  double local_78;
  double local_70;
  undefined8 local_68;
  double local_40;
  double local_38;
  SEL local_30;
  ID local_28;
  
  uVar3 = 0x406b800000000000;
  local_40 = 220.0;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_68 = uVar3;
  (*(code *)PTR__objc_release_02578630)(param_1);
  local_150 = in_d2;
  if (in_d2 <= local_40) {
    local_150 = local_40;
  }
  local_70 = local_150;
  local_38 = local_150;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_profileBgHTMLPreviewWebHeight_026c3698);
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_78 = local_150;
  _objc_alloc();
  dVar6 = local_78 + 36.0;
  uVar4 = 0;
  uVar3 = 0;
  dVar5 = local_38;
  FUN_01cd3384();
  local_a0 = uVar3;
  local_98 = uVar4;
  local_90 = dVar5;
  local_88 = dVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,uVar4,dVar5,dVar6,puVar1,PTR_s_initWithFrame__026ca6e8);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_80 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  _objc_alloc();
  dVar5 = local_38 - 32.0;
  uVar7 = 0x4030000000000000;
  uVar3 = 0x4030000000000000;
  uVar4 = 0x4018000000000000;
  FUN_01cd3384();
  local_c8 = uVar3;
  local_c0 = uVar4;
  local_b8 = dVar5;
  local_b0 = uVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,uVar4,dVar5,uVar7,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_a8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setAutoresizingMask__026ca878);
  puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4028000000000000,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
             PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setFont__026ca958);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setTextColor__026caa98);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setText__026caa88,&::cf_format_s_);
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_addSubview__026ca4c0,local_a8);
  puVar1 = PTR_WCRefineProfileBgHTMLLivePreviewView_026cf4f8;
  _objc_alloc();
  uVar3 = 0x4030000000000000;
  dVar6 = local_38 - 32.0;
  uVar4 = 0x403a000000000000;
  dVar5 = local_78;
  FUN_01cd3384();
  local_f0 = uVar3;
  local_e8 = uVar4;
  local_e0 = dVar6;
  local_d8 = dVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,uVar4,dVar6,dVar5,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_d0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setAutoresizingMask__026ca878,2);
  puVar1 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x4028000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setUserInteractionEnabled__026caad8,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_addSubview__026ca4c0,local_d0);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setHtmlLivePreview__026c36a0,local_d0);
  _objc_initWeak(auStack_f8,local_28);
  local_120 = PTR___NSConcreteStackBlock_02578660;
  local_118 = 0xc2000000;
  local_114 = 0;
  local_110 = FUN_01cd4748;
  local_108 = &DAT_0257be28;
  _objc_copyWeak(auStack_100,auStack_f8);
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setOnLayoutInvalidated__026c36a8,&local_120);
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_reloadCurrentWork_026c36b0);
  puVar1 = local_80;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_f8);
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_80,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

