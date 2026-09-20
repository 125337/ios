// draftValueForScene:kind: @ 01c49de0

/* Function Stack Size: 0x20 bytes */

double __thiscall
WCRefineNameplateSpecialUserDetailViewController::draftValueForScene_kind_
          (WCRefineNameplateSpecialUserDetailViewController *this,ID param_1,SEL param_2,
          long_long param_3,long_long param_4)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  double in_d0;
  double local_80;
  cfstringStruct *local_58;
  double local_50;
  ID local_48;
  undefined *local_40;
  cfstringStruct *local_38;
  long_long local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  if (param_4 == 1) {
    local_58 = &cf_OffsetX;
  }
  else {
    local_58 = &cf_OffsetY;
    if (param_4 != 2) {
      local_58 = &cf_Scale;
    }
  }
  local_30 = param_4;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_38 = local_58;
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sceneKey__026c1be0,local_28);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf_____);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_draft_026b65e8);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_48 = IVar3;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_doubleValue_026ca608);
  if ((IVar1 & 1) == 0) {
    local_80 = 0.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_doubleValue_026ca608);
    local_80 = in_d0;
  }
  local_50 = local_80;
  if ((local_30 - 3 == 0) && (local_80 <= 0.0)) {
    local_50 = 1.0;
  }
  FUN_01c4a010(local_30 - 3,local_30);
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return local_50;
}

