// nameplateImageAspectForDayPath:nightPath: @ 010e08e8

/* Function Stack Size: 0x20 bytes */

double WCRefineNameplateHelper::nameplateImageAspectForDayPath_nightPath_
                 (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  double dVar1;
  ID IVar2;
  ID IVar3;
  double dVar4;
  double in_d1;
  double dVar5;
  double local_98;
  ID local_70;
  undefined4 local_64;
  double local_60;
  double local_58;
  ID local_48;
  ID local_40;
  undefined8 local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  double local_18;
  
  dVar1 = DAT_02324020;
  local_30 = 0;
  dVar5 = DAT_02324020;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  IVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_resolvedImageRelativePath_nightP_026ae8d0,local_30,local_38);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_20;
  local_40 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_absolutePathForRelativePath__026ae8d8,IVar2);
  _objc_retainAutoreleasedReturnValue();
  local_48 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_nameplateImagePixelSizeAtPath__026ae8e0,IVar3);
  dVar4 = dVar5;
  local_58 = dVar5;
  if ((1.0 <= dVar5) && (dVar4 = in_d1, 1.0 <= in_d1)) {
    local_60 = dVar5 / in_d1;
    if (local_60 < dVar1) {
      local_60 = dVar1;
    }
    if (8.0 < local_60) {
      local_60 = 8.0;
    }
    local_18 = local_60;
    local_64 = 1;
    goto LAB_010e0ba4;
  }
  IVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_cachedImageAtPath__026ae8c8,local_48);
  _objc_retainAutoreleasedReturnValue();
  local_70 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_size_026cab00);
  local_98 = 1.0;
  if (dVar4 < 1.0) {
LAB_010e0b7c:
    local_18 = DAT_02324270;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_size_026cab00);
    dVar5 = 1.0;
    if (local_98 < 1.0) goto LAB_010e0b7c;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_size_026cab00);
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_size_026cab00);
    local_98 = local_98 / dVar5;
    if (local_98 < dVar1) {
      local_98 = dVar1;
    }
    if (8.0 < local_98) {
      local_98 = 8.0;
    }
    local_18 = local_98;
  }
  local_64 = 1;
  _objc_storeStrong(&local_70,0);
LAB_010e0ba4:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_18;
}

