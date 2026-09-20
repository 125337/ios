// FUN_005b5e90 @ 005b5e90

byte FUN_005b5e90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long local_40;
  ulong local_38;
  long local_30;
  undefined8 local_28;
  long local_20;
  bool local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  lVar1 = local_20;
  _objc_getAssociatedObject(local_20,&DAT_028cb787);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_38;
  local_40 = lVar1;
  if ((local_30 == lVar1) && (lVar1 != 0)) {
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) == 0) {
      local_11 = false;
    }
    else {
      uVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_numberOfTapsRequired_026a1f58);
      local_11 = uVar3 < 2;
    }
  }
  else {
    local_11 = false;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

