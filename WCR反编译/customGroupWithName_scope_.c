// customGroupWithName:scope: @ 01acef00

/* Function Stack Size: 0x20 bytes */

ID WCRefineGroup::customGroupWithName_scope_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  unsigned_long_long local_50;
  cfstringStruct *local_48;
  ID local_38;
  unsigned_long_long local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  local_30 = param_4;
  _objc_alloc_init();
  pcVar2 = local_28;
  local_38 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_48 = &cf__g_TTR_;
  }
  else {
    local_48 = local_28;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setName__0269e0c8,local_48);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setKind__026ad410,0);
  if (local_30 == 0) {
    local_50 = 0x1f;
  }
  else {
    local_50 = local_30;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setScope__026be178,local_50);
  IVar1 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar1;
}

