// FUN_0158ab80 @ 0158ab80

void FUN_0158ab80(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if (((local_18 != 0) && (local_20 != 0)) &&
     (uVar2 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isGroup_026af768),
     lVar1 = local_18, puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8, (uVar2 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_groupCount_026b0440);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8);
    _objc_retainAutoreleasedReturnValue();
    FUN_0158ae74(lVar1,&cf__Npe);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    lVar1 = local_18;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_groupMaleCount_026b0428);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_groupFemaleCount_026b0430);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf__);
    _objc_retainAutoreleasedReturnValue();
    FUN_0158ae74(lVar1,&cf_7usY___R);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    lVar1 = local_18;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_groupUnknownCount_026b0438);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf__);
    _objc_retainAutoreleasedReturnValue();
    FUN_0158ae74(lVar1,&cf__gw___R);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    lVar1 = local_18;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_invitedCount_026b04e0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf__);
    _objc_retainAutoreleasedReturnValue();
    FUN_0158ae74(lVar1,&cf_bv);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

