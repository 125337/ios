// FUN_005369b4 @ 005369b4

/* WARNING: Type propagation algorithm not settling */

void FUN_005369b4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 local_90;
  undefined8 local_88;
  long local_80 [4];
  undefined *local_60;
  ulong local_58;
  undefined *local_50;
  ulong local_48;
  int local_40;
  long local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  if ((local_28 == 0) ||
     (lVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0),
     lVar1 == 0)) {
    local_40 = 1;
    goto LAB_00536e5c;
  }
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_m_delegate);
  _objc_retainAutoreleasedReturnValue();
  local_48 = uVar2;
  if (uVar2 == 0) {
    local_40 = 1;
  }
  else {
    local_50 = PTR_s_onHomepageMgr_updateWithResult_t_026a4c10;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_respondsToSelector__026ca818,
               PTR_s_onHomepageMgr_updateWithResult_t_026a4c10);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_methodSignatureForSelector__0269e190,local_50);
      _objc_retainAutoreleasedReturnValue();
      local_58 = uVar2;
      if (uVar2 == 0) {
        local_40 = 0;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSInvocation_026ce208;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSInvocation_026ce208,
                   PTR_s_invocationWithMethodSignature__0269e1a0,uVar2);
        _objc_retainAutoreleasedReturnValue();
        local_60 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setSelector__0269e1b0,local_50);
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setTarget__0269e1a8,local_48);
        uVar2 = local_28;
        (*(code *)PTR__objc_retain_02578638)();
        lVar1 = local_30;
        local_80[3] = uVar2;
        local_80[2] = 0;
        local_80[1] = 0;
        (*(code *)PTR__objc_retain_02578638)();
        local_80[0] = lVar1;
        local_88 = 0;
        local_90 = 0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_setArgument_atIndex__0269eae8,local_80 + 3,2);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_setArgument_atIndex__0269eae8,local_80 + 2,3);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_setArgument_atIndex__0269eae8,local_80 + 1,4);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_setArgument_atIndex__0269eae8,local_80,5);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_setArgument_atIndex__0269eae8,&local_88,6);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_setArgument_atIndex__0269eae8,&local_90,7);
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_invoke_0269e1b8);
        local_40 = 1;
        _objc_storeStrong(&local_90);
        _objc_storeStrong(&local_88,0);
        _objc_storeStrong(local_80,0);
        _objc_storeStrong(local_80 + 1,0);
        _objc_storeStrong(local_80 + 3,0);
        _objc_storeStrong(&local_60,0);
      }
      _objc_storeStrong(&local_58,0);
      if (local_40 != 0) goto LAB_00536e4c;
    }
    uVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_reloadData_0269e400);
    if ((uVar2 & 1) == 0) {
      local_40 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_reloadData_0269e400);
      local_40 = 1;
    }
  }
LAB_00536e4c:
  _objc_storeStrong(&local_48,0);
LAB_00536e5c:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

