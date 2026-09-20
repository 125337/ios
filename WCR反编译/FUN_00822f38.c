// FUN_00822f38 @ 00822f38

byte FUN_00822f38(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  while (local_20 != 0 && local_28 < 0x10) {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_containsString__0269d0b0,&cf_SearchController)
    ;
    if ((((uVar2 & 1) == 0) &&
        (uVar2 = local_30,
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_FTSMsg),
        (uVar2 & 1) == 0)) &&
       (uVar2 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_MsgSearch),
       (uVar2 & 1) == 0)) {
      bVar1 = false;
    }
    else {
      local_11 = 1;
      bVar1 = true;
    }
    _objc_storeStrong(&local_30,0);
    if (bVar1) goto LAB_00823144;
    local_28 = local_28 + 1;
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_20;
    local_20 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  local_11 = 0;
LAB_00823144:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

