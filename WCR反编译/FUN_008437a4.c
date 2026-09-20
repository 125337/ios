// FUN_008437a4 @ 008437a4

void FUN_008437a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  uVar3 = local_18;
  puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((uVar3 & 1) == 0) && (uVar3 = local_18, FUN_008439b0(), (uVar3 & 1) == 0)) {
    uVar3 = local_18;
    FUN_00843ae4();
    if ((uVar3 & 1) == 0) {
      FUN_00821344(local_18);
      uVar3 = local_18;
      uVar1 = _WCRPageBackgroundSceneGlobal;
      uVar4 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      _CFAbsoluteTimeGetCurrent();
      FUN_0081501c(param_1,uVar3,&cf_skip_generic,uVar1,uVar4,&cf___,&cf___);
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    else {
      FUN_00810a08(local_18,_WCRPageBackgroundSceneGlobal,0);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

