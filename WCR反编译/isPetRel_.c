// isPetRel: @ 01dfd490

/* Function Stack Size: 0x18 bytes */

bool WCRefineSuperFloatBallWarehouseViewController::isPetRel_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong local_70;
  ulong local_60;
  byte local_51;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((uVar2 == 0) ||
     (uVar2 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_30,PTR_s_isEqualToString__0269ccc8,&cf___WCR_SF_NONE_ICON__), (uVar2 & 1) != 0
     )) {
    local_11 = 0;
    local_34 = 1;
  }
  else {
    uVar3 = 9;
    _NSSearchPathForDirectoriesInDomains(9,1,1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf__);
    local_51 = 0;
    bVar1 = (uVar2 & 1) == 0;
    if (bVar1) {
      local_70 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_stringByAppendingPathComponent__026cab30,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_70;
    }
    else {
      local_70 = local_30;
    }
    local_51 = bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_70;
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    uVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_stringByAppendingPathComponent__026cab30,&cf_pet_json);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_60 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_11 = (byte)puVar5 & 1;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_34 = 1;
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

