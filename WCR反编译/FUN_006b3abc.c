// FUN_006b3abc @ 006b3abc

void FUN_006b3abc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong local_58 [4];
  ulong local_38;
  undefined8 local_30;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  local_38 = 0;
  uVar2 = local_28;
  local_30 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_m_msgWrap);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_38;
  local_38 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  uVar3 = local_28;
  FUN_006b20e0(local_28,local_38);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_WCRefinePrivateFriendManager_026ce160;
  local_58[0] = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_shouldConcealUsername__0269fef8,uVar3);
  if (((ulong)puVar4 & 1) == 0) {
    if (DAT_028cc068 != (code *)0x0) {
      (*DAT_028cc068)(local_18,local_20,local_28,local_30);
    }
  }
  else {
    uVar3 = local_38;
    FUN_006b2384();
    if ((uVar3 & 1) == 0) {
      FUN_006b2660(local_58[0]);
      puVar4 = PTR_WCRefinePrivateFriendManager_026ce160;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefinePrivateFriendManager_026ce160,
                 PTR_s_shouldPresentDisguiseNotificatio_026a6800);
      bVar1 = false;
      if (((ulong)puVar4 & 1) != 0) {
        puVar4 = PTR__OBJC_CLASS___UIApplication_026ce010;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = puVar5 != (undefined *)0x0;
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      if (bVar1) {
        FUN_006b27c8(local_38);
      }
    }
  }
  _objc_storeStrong(local_58);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

