// FUN_00783ba0 @ 00783ba0

byte FUN_00783ba0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  uint local_64;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  long local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  lVar4 = local_30;
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcrefine_swipeGesture_026a7fb8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_38;
  local_64 = 0;
  if (lVar4 == lVar1) {
    puVar2 = PTR__OBJC_CLASS___UIScreenEdgePanGestureRecognizer_026ce2b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreenEdgePanGestureRecognizer_026ce2b0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_64 = (uint)uVar3;
  }
  (*(code *)PTR__objc_release_02578630)(lVar1);
  if ((local_64 & 1) == 0) {
    lVar4 = local_20;
    (*DAT_028cca18)(local_20,local_28,local_30,local_38);
    local_11 = (byte)lVar4 & 1;
  }
  else {
    local_11 = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

