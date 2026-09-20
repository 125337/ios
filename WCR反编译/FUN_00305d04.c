// FUN_00305d04 @ 00305d04

void FUN_00305d04(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  double dVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  char local_51;
  double local_50 [3];
  ulong local_38;
  undefined8 local_30;
  long local_28;
  
  dVar2 = DAT_02323d38;
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  lVar5 = local_28;
  _objc_getAssociatedObject(local_28,&DAT_028c9ba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (lVar5 != 0) {
    local_50[0] = 0.0;
    local_51 = '\0';
    if (local_38 != 0) {
      dVar11 = 0.0;
      local_60 = 0;
      local_68 = 0;
      local_70 = 0;
      local_78 = 0;
      uVar6 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_getRed_green_blue_alpha__026ca660,&local_60,&local_68,&local_70,
                 local_50);
      if (((uVar6 & 1) == 0) &&
         (uVar7 = local_38,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_38,PTR_s_getWhite_alpha__026ca668,&local_78,local_50), uVar6 = local_38,
         (uVar7 & 1) == 0)) {
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_CGColor_026ca470);
        _CGColorGetAlpha(uVar6);
        local_50[0] = dVar11;
      }
      local_51 = '\x01';
    }
    lVar5 = local_28;
    uVar4 = local_30;
    pcVar3 = DAT_028c9b18;
    if ((local_51 != '\0') && (dVar2 < local_50[0])) {
      puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
      dVar11 = local_50[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      (*pcVar3)(lVar5,uVar4);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      lVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = false;
      if (lVar9 != 0) {
        lVar9 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar9;
        (*(code *)PTR__objc_msgSend_02578628)();
        _CGColorGetAlpha(lVar10);
        bVar1 = dVar2 < dVar11;
        (*(code *)PTR__objc_release_02578630)(lVar9);
      }
      (*(code *)PTR__objc_release_02578630)(lVar5);
      if (bVar1) {
        puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_CGColor_026ca470);
        lVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar5);
        (*(code *)PTR__objc_release_02578630)(puVar8);
      }
      goto LAB_00306218;
    }
  }
  (*DAT_028c9b18)(local_28,local_30,local_38);
LAB_00306218:
  _objc_storeStrong(&local_38,0);
  return;
}

