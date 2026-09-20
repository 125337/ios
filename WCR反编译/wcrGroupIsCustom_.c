// wcrGroupIsCustom: @ 017c5958

/* Function Stack Size: 0x18 bytes */

bool WCRefineAIPersonaLibraryViewController::wcrGroupIsCustom_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_groups_026a1048);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_60 = 0;
  if (param_3 < IVar2) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_groups_026a1048);
    _objc_retainAutoreleasedReturnValue();
    local_48 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_60 = (byte)IVar3;
    local_38 = param_1;
  }
  if (param_3 < IVar2) {
    (*(code *)PTR__objc_release_02578630)(local_58);
    (*(code *)PTR__objc_release_02578630)(local_48);
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  return (uint)(local_60 & 1);
}

