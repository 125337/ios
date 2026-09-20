// _WCRAvatarScaleFilterTokenForView @ 0093a624

ulong _WCRAvatarScaleFilterTokenForView(undefined8 param_1)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  _WCRAvatarViewControllerForView();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_18;
  local_20 = uVar2;
  _WCRAvatarTrackedSceneNameForView(local_18,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_18;
  local_28 = uVar3;
  _WCRAvatarFindAncestorByClassName(local_18,&cf_TLProfileExpandableHeaderView,10);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  uVar3 = local_18;
  _WCRAvatarIsTLProfileImageScene();
  uVar4 = local_18;
  _WCRAvatarIsTextStateProfileScene(local_18,local_20);
  uVar5 = local_18;
  _WCRAvatarIsMomentsProfileResponderScene();
  bVar1 = 0;
  if ((((uVar5 & 1) != 0) && (bVar1 = 1, uVar2 == 0)) && (bVar1 = 1, (uVar3 & 1) == 0)) {
    bVar1 = (byte)uVar4;
  }
  if ((bVar1 & 1) != 0) {
    _objc_storeStrong(&local_28,&cf_moments_profile);
  }
  uVar2 = local_28;
  _WCRAvatarScaleFilterTokenForTrackedScene();
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return uVar2;
}

