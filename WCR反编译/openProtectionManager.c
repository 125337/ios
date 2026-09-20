// openProtectionManager @ 0199bf1c

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerViewController::openProtectionManager(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineFileManagerViewController_026ceec8;
  local_20 = param_2;
  local_18 = param_1;
  _objc_alloc();
  puVar2 = puVar1;
  FUN_01988e34();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_initWithDirectory_title__026b2df8,puVar2,&cf_lveN2R);
  local_28 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setProtectionMode__026ba678,1);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  _objc_storeStrong(&local_28,0);
  return;
}

