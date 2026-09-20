// showContactProtectionTimeDialog @ 016f247c

/* Function Stack Size: 0x10 bytes */

void SpecificPageLockViewController::showContactProtectionTimeDialog(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_presentProtectionTimeDialogWithT_026b3520,&cf_T_NObe,&cf_eQObe0,puVar2,
             PTR_s_handleContactProtectionTimeInput_026b3538);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

