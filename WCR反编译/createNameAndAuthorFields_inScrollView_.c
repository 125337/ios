// createNameAndAuthorFields:inScrollView: @ 01d47774

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

void WCRefineScreenshotFrameEditorViewController::createNameAndAuthorFields_inScrollView_
               (ID param_1,SEL param_2,double param_3,ID param_4)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  undefined8 uVar6;
  double dVar7;
  double in_d2;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  undefined *local_d8;
  double local_d0;
  undefined8 local_c8;
  byte local_b9;
  ID local_b8;
  undefined8 local_b0;
  double local_a8;
  double local_a0;
  undefined8 local_98;
  undefined8 local_90;
  double local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined *local_70;
  double local_68;
  double local_48;
  undefined8 local_40;
  double local_38;
  SEL local_30;
  ID local_28;
  
  local_40 = 0;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_40,param_4);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_68 = param_3;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  local_48 = in_d2;
  _objc_alloc();
  uVar6 = 0x4034000000000000;
  uVar8 = 0x4049000000000000;
  uVar10 = 0x403e000000000000;
  dVar7 = local_38;
  FUN_01d42a30();
  local_90 = uVar6;
  local_88 = dVar7;
  local_80 = uVar8;
  local_78 = uVar10;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar6,dVar7,uVar8,uVar10,puVar3,PTR_s_initWithFrame__026ca6e8);
  local_70 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setText__026caa88,&cf_Ty_);
  puVar3 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setFont__026ca958);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3fd3333333333333,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setTextColor__026caa98);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addSubview__026ca4c0,local_70);
  puVar3 = PTR__OBJC_CLASS___UITextField_026ce2a0;
  _objc_alloc();
  uVar8 = 0x403e000000000000;
  dVar9 = local_48 - 90.0;
  uVar6 = 0x4051800000000000;
  dVar7 = local_38;
  FUN_01d42a30();
  local_b0 = uVar6;
  local_a8 = dVar7;
  local_a0 = dVar9;
  local_98 = uVar8;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar6,dVar7,dVar9,uVar8,puVar3,PTR_s_initWithFrame__026ca6e8);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setNameField__026bdc58);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_nameField_026bdbf0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_nameField_026bdbf0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  uVar6 = 0x402a000000000000;
  puVar3 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_nameField_026bdbf0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_nameField_026bdbf0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_nameField_026bdbf0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_nameField_026bdbf0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_defaultName_026bdb88);
  _objc_retainAutoreleasedReturnValue();
  local_b9 = 0;
  bVar1 = false;
  if (IVar2 != 0) {
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_defaultName_026bdb88);
    _objc_retainAutoreleasedReturnValue();
    local_b9 = 1;
    local_b8 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = IVar4 != 0;
  }
  if ((local_b9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_b8);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (bVar1) {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_defaultName_026bdb88);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_nameField_026bdbf0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_c8 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_Frame___0f);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_nameField_026bdbf0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  uVar6 = local_40;
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_nameField_026bdbf0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_addSubview__026ca4c0);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setTag__026caa80,0x4a3c);
  local_d0 = local_38 + 40.0;
  puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  _objc_alloc();
  uVar6 = 0x4034000000000000;
  uVar8 = 0x4049000000000000;
  uVar10 = 0x403e000000000000;
  dVar7 = local_d0;
  FUN_01d42a30();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar6,dVar7,uVar8,uVar10,puVar3,PTR_s_initWithFrame__026ca6e8);
  local_d8 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setText__026caa88,&cf__O_);
  puVar3 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setFont__026ca958);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3fd3333333333333,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setTextColor__026caa98);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setTag__026caa80,0x4a45);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addSubview__026ca4c0,local_d8);
  puVar3 = PTR__OBJC_CLASS___UITextField_026ce2a0;
  _objc_alloc();
  uVar8 = 0x403e000000000000;
  dVar9 = local_48 - 90.0;
  uVar6 = 0x4051800000000000;
  dVar7 = local_d0;
  FUN_01d42a30();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar6,dVar7,dVar9,uVar8,puVar3,PTR_s_initWithFrame__026ca6e8);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setAuthorField__026c47e8);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_authorField_026c47f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_authorField_026c47f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar3 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x402a000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_authorField_026c47f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_authorField_026c47f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_authorField_026c47f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_authorField_026c47f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_defaultAuthor_026c47f8);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = false;
  if (IVar2 != 0) {
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_defaultAuthor_026c47f8);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = IVar5 != 0;
    (*(code *)PTR__objc_release_02578630)(IVar4);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (bVar1) {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_defaultAuthor_026c47f8);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_authorField_026c47f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  else {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_authorField_026c47f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  uVar6 = local_40;
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_authorField_026c47f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_addSubview__026ca4c0);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_40,0);
  return;
}

