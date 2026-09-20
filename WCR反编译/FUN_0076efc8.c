// FUN_0076efc8 @ 0076efc8

void FUN_0076efc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long local_38;
  undefined4 local_30;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar2 = local_18;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) != 0) &&
     (lVar3 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     lVar3 != 0)) {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_count_0269cfe0);
    if (uVar2 < 0xc) {
      lVar3 = local_20;
      FUN_007700bc(uVar2 - 0xc);
      _objc_retainAutoreleasedReturnValue();
      local_38 = lVar3;
      (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
      if ((lVar3 == 0) ||
         (uVar2 = local_18,
         (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_containsObject__0269cbb8,local_38),
         (uVar2 & 1) != 0)) {
        local_30 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_addObject__0269d180,local_38);
        local_30 = 0;
      }
      _objc_storeStrong(&local_38,0);
      goto LAB_0076f1b0;
    }
  }
  local_30 = 1;
LAB_0076f1b0:
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

