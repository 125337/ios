// FUN_0189e358 @ 0189e358

void FUN_0189e358(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong local_a8;
  undefined *local_80;
  byte local_71;
  ulong local_70;
  undefined *local_68;
  bool local_59;
  ulong local_58;
  ulong local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulong local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  uVar3 = local_30;
  local_48 = param_1;
  local_40 = param_4;
  local_38 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_roomNames);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  uVar5 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  local_59 = false;
  bVar1 = (uVar5 & 1) == 0;
  if (bVar1) {
    local_a8 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    local_a8 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_roomNames);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_a8;
  }
  local_59 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_a8;
  if ((local_59 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  uVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
  _objc_retainAutoreleasedReturnValue();
  local_71 = 0;
  if (uVar3 == 0) {
    uVar5 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_user)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_70 = uVar5;
  }
  local_71 = uVar3 == 0;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf___);
  _objc_retainAutoreleasedReturnValue();
  local_68 = puVar4;
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  puVar2 = local_68;
  puVar6 = PTR_WCRefineHelper_026ce000;
  puVar4 = PTR_s_openDuplicateItem__026b7478;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_componentsJoinedByString__0269d140,&cf__);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar6,PTR_s_cellWithSel_target_title_rightVa_026a0a98,puVar4,uVar7,puVar2,uVar3,1);
  _objc_retainAutoreleasedReturnValue();
  local_80 = puVar6;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,local_38)
  ;
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setUserInfo__026a17c8);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_addCell__0269e3f8,local_80);
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_30,0);
  return;
}

