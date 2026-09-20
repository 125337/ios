// _WCRAvatarScaleSceneNameForTrackedScene @ 0093a79c

void _WCRAvatarScaleSceneNameForTrackedScene(undefined8 param_1)

{
  long lVar1;
  long local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  _WCRAvatarScaleFilterTokenForTrackedScene();
  if (lVar1 == 1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_wechat;
  }
  else if (lVar1 == 2) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_contacts;
  }
  else if (lVar1 == 3) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_chat;
  }
  else if (lVar1 == 4) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_profile;
  }
  else if (lVar1 == 5) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_moments;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_other;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

