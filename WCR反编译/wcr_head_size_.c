// wcr_head:size: @ 01d9da58

/* Function Stack Size: 0x20 bytes */

ID WCRefineSessionStatsBoardView::wcr_head_size_(ID param_1,SEL param_2,ID param_3,double param_4)

{
  undefined8 uVar1;
  ID IVar2;
  undefined *puVar3;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  puVar3 = PTR_WCRefineSessionStatsBoardView_026cf5b8;
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_privacyOn_026c4ea0);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_4,puVar3,PTR_s_headViewForUsr_size_privacy__026c4f00,uVar1,IVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar3;
}

