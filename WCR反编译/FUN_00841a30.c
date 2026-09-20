// FUN_00841a30 @ 00841a30

void FUN_00841a30(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_98;
  undefined *local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = param_2;
  local_40 = param_1;
  (*DAT_028cd318)(param_1,param_2);
  local_38 = _WCRPageBackgroundSceneMain;
  local_30 = _WCRPageBackgroundSceneContacts;
  local_28 = _WCRPageBackgroundSceneDiscover;
  local_20 = _WCRPageBackgroundSceneMe;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_40;
  local_50 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_selectedIndex_0269e580);
  local_98 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
  puVar1 = local_40;
  local_98 = local_98 + -1;
  if (puVar2 < local_98) {
    local_98 = puVar2;
  }
  puVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_objectAtIndexedSubscript__0269cc78,local_98);
  _objc_retainAutoreleasedReturnValue();
  FUN_0084415c(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

