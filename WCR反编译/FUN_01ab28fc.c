// FUN_01ab28fc @ 01ab28fc

void FUN_01ab28fc(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *local_48;
  undefined *local_40;
  uint local_34;
  ulong local_30;
  undefined8 local_28;
  undefined *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar3 = local_30;
  puVar2 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIBarButtonItem_026ce058,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4031000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50
              );
    _objc_retainAutoreleasedReturnValue();
    local_28 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_40 = puVar2;
    local_20 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_20,&local_28);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setTitleTextAttributes_forState__0269e9f0,puVar4,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setTitleTextAttributes_forState__0269e9f0,local_48,1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setTitleTextAttributes_forState__0269e9f0,local_48,2);
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  local_34 = (uint)!bVar1;
  _objc_storeStrong(&local_30,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

