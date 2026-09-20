// FUN_007b881c @ 007b881c

undefined8 FUN_007b881c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong local_a8;
  ulong local_48;
  ulong local_30;
  long local_28;
  ulong local_20;
  undefined8 local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar3 = local_20;
  puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    local_a8 = 0;
  }
  else {
    local_a8 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_a8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_a8;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  lVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = local_30 == 0;
  (*(code *)PTR__objc_release_02578630)(lVar4);
  if (lVar4 == 0 || bVar1) {
    local_18 = 0x7fefffffffffffff;
  }
  else {
    uVar5 = *(undefined8 *)(PTR__CGPointZero_025782e0 + 8);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_convertPoint_toView__0269e548,local_30);
    local_18 = uVar5;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

