// FUN_00f7effc @ 00f7effc

void FUN_00f7effc(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_40;
  ulong local_38;
  int local_2c;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = local_20;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_containsObject__0269cbb8,local_20);
    if ((uVar2 & 1) == 0) {
      puVar3 = PTR_WCRefineFriendRelationChecker_026ceb00;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineFriendRelationChecker_026ceb00,PTR_s_shouldExcludeUserName__026ab148,
                 local_20);
      if (((ulong)puVar3 & 1) == 0) {
        uVar2 = *(ulong *)(param_1 + 0x28);
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_objectForKeyedSubscript__0269d098,local_20);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_38 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
        if ((uVar2 & 1) == 0) {
          local_2c = 1;
        }
        else {
          uVar2 = local_38;
          FUN_00f7f2b8();
          if ((uVar2 & 1) == 0) {
            uVar2 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_verdict);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar2;
            FUN_00f7e630();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar4);
            (*(code *)PTR__objc_release_02578630)(uVar2);
            if ((uVar5 & 1) == 0) {
              local_2c = 1;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__0269d180,local_20);
              uVar2 = local_38;
              (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_mutableCopy_0269d8a0);
              local_40 = uVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar2,PTR_s_setObject_forKeyedSubscript__0269d248,local_20,&cf_userName);
              (*(code *)PTR__objc_msgSend_02578628)
                        (*(undefined8 *)(param_1 + 0x38),PTR_s_addObject__0269d180,local_40);
              _objc_storeStrong(&local_40,0);
              local_2c = 0;
            }
          }
          else {
            local_2c = 1;
          }
        }
        _objc_storeStrong(&local_38,0);
        if (local_2c == 0) {
          local_2c = 0;
        }
      }
      else {
        local_2c = 1;
      }
      goto LAB_00f7f2a0;
    }
  }
  local_2c = 1;
LAB_00f7f2a0:
  _objc_storeStrong(&local_20,0);
  return;
}

