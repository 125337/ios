// FUN_00f89450 @ 00f89450

void FUN_00f89450(double param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_2;
  _objc_storeStrong(&local_20);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((((uVar2 & 1) != 0) &&
       (uVar2 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isHidden_026ca768),
       (uVar2 & 1) == 0)) &&
      ((*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_alpha_026ca4d8), DAT_02323d38 <= param_1
      )) && (((uVar2 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_tag_026cab98),
              uVar2 != 0x24f721 &&
              (uVar2 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_tag_026cab98),
              uVar2 != 0x24f722)) &&
             (uVar2 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_tag_026cab98),
             uVar2 != 0x24f723)))) {
    lVar3 = *(long *)(param_2 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_indexOfObjectIdenticalTo__0269e160,local_20);
    if (lVar3 == 0x7fffffffffffffff) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_2 + 0x20),PTR_s_addObject__0269d180,local_20);
    }
  }
  _objc_storeStrong(&local_20,0);
  return;
}

