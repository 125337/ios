// FUN_01630d7c @ 01630d7c

void FUN_01630d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long local_80;
  long local_48;
  long local_40;
  uint local_34;
  long local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  if (local_20 == 0) {
    local_18 = 0;
    local_34 = 1;
    goto LAB_01630f20;
  }
  lVar1 = local_20;
  _WCRefineColorizePngForSvgRule(local_20,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar1;
  if ((lVar1 == 0) || (lVar1 == local_20)) {
    if (local_30 != 0) {
      lVar1 = local_20;
      _WCRefineColorizePngWithColor(local_20,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_48 = lVar1;
      if (lVar1 != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = lVar1;
      }
      local_34 = (uint)(lVar1 != 0);
      _objc_storeStrong(&local_48,0);
      if (local_34 != 0) goto LAB_01630f10;
    }
    if (local_40 == 0) {
      local_80 = local_20;
    }
    else {
      local_80 = local_40;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_80;
    local_34 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_34 = 1;
    local_18 = lVar1;
  }
LAB_01630f10:
  _objc_storeStrong(&local_40,0);
LAB_01630f20:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

