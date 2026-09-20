// updateGroup: @ 01ad7c60

/* Function Stack Size: 0x18 bytes */

bool WCRefineGroupManager::updateGroup_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_40;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_groupId_0269ea88);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar1);
  if (lVar2 == 0) {
    local_11 = 0;
  }
  else {
    local_40 = 0;
    while( true ) {
      uVar3 = *(ulong *)(local_20 + 8);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_count_0269cfe0);
      if (uVar3 <= local_40) break;
      uVar4 = *(ulong *)(local_20 + 8);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_objectAtIndexedSubscript__0269cc78,local_40)
      ;
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_groupId_0269ea88);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isEqualToString__0269ccc8);
      (*(code *)PTR__objc_release_02578630)(lVar1);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar4);
      if ((uVar5 & 1) != 0) {
        lVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copy_0269d150);
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(local_20 + 8),PTR_s_setObject_atIndexedSubscript__0269e970,lVar1,
                   local_40);
        (*(code *)PTR__objc_release_02578630)(lVar1);
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_persist_026b68b8);
        local_11 = 1;
        goto LAB_01ad7ec0;
      }
      local_40 = local_40 + 1;
    }
    local_11 = 0;
  }
LAB_01ad7ec0:
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

