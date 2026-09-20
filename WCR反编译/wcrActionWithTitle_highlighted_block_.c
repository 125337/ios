// wcrActionWithTitle:highlighted:block: @ 017c8a30

/* Function Stack Size: 0x24 bytes */

ID WCRefineAIPersonaLibraryViewController::wcrActionWithTitle_highlighted_block_
             (ID param_1,SEL param_2,ID param_3,bool param_4,ID param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined *local_40;
  undefined8 local_38;
  byte local_29;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_29 = (byte)param_4;
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  puVar1 = PTR_WCRAIPersonaAction_026cf010;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRAIPersonaAction_026cf010,PTR_s_new_0269d288);
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTitle__0269cef0,local_28);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setBlock__026b4f10,local_38);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setHighlighted__0269fd50,local_29 & 1);
  puVar1 = local_40;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

