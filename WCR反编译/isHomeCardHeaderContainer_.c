// isHomeCardHeaderContainer: @ 00fcd53c

/* Function Stack Size: 0x18 bytes */

bool WCRefineHomeHeaderUnstick::isHomeCardHeaderContainer_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_11 = 0;
  }
  else {
    uVar2 = local_30;
    _objc_getAssociatedObject(local_30,&DAT_028e3031);
    _objc_retainAutoreleasedReturnValue();
    local_11 = 1;
    if (uVar2 == 0) {
      uVar3 = local_30;
      _objc_getAssociatedObject(local_30,&DAT_028e3030);
      _objc_retainAutoreleasedReturnValue();
      local_11 = uVar3 != 0;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

