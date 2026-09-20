// FUN_005c00b4 @ 005c00b4

void FUN_005c00b4(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_40 [3];
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_contentObj_026a5990);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_0059d260();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_28;
  FUN_0059d260(local_28,&cf_objectId);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_005a0828();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (uVar4 != 0) goto LAB_005c03a4;
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_contentObj_026a5990);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_0059d260();
  _objc_retainAutoreleasedReturnValue();
  local_40[0] = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  puVar1 = PTR_s_converToShareFeedItem_026a18a8;
  if (local_40[0] == 0) {
LAB_005c0384:
    _objc_storeStrong(&local_28,0);
  }
  else {
    uVar2 = local_40[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40[0],PTR_s_respondsToSelector__026ca818,PTR_s_converToShareFeedItem_026a18a8);
    if ((uVar2 & 1) == 0) goto LAB_005c0384;
    uVar3 = local_40[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_40[0],puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_28;
    local_28 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  _objc_storeStrong(local_40,0);
LAB_005c03a4:
  uVar2 = local_28;
  FUN_0059d260(local_28,&cf_objectId);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_005a0828();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  local_18 = local_28;
  if (uVar4 == 0) {
    local_18 = 0;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

