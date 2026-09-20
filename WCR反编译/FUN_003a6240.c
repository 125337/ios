// FUN_003a6240 @ 003a6240

void FUN_003a6240(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_groupId_0269ea88);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_title_0269d250);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_unreadCount_026a3080);
    uVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasRedDotUnread_026a3088);
    FUN_003dfc78(local_20);
    uVar5 = uVar1;
    FUN_003dec94(uVar1,uVar2,uVar3,uVar4 & 0xffffffff);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

