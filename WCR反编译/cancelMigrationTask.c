// cancelMigrationTask @ 019817a4

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerViewController::cancelMigrationTask(ID param_1,SEL param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_WCRFileManagerState_026cf1c8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRFileManagerState_026cf1c8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setupNavBar_026ba288);
  return;
}

