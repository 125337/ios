// exportFile @ 01962110

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerPreviewViewController::exportFile(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined *local_50;
  undefined *local_48;
  SEL local_40;
  ID local_38;
  undefined *local_30;
  long local_28;
  
  puVar2 = PTR__OBJC_CLASS___NSURL_026ce328;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = param_2;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_filePath_026b9cb0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_fileURLWithPath__0269f540);
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar2;
  (*(code *)PTR__objc_release_02578630)(param_1);
  puVar2 = PTR__OBJC_CLASS___UIActivityViewController_026cea70;
  _objc_alloc();
  local_30 = local_48;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_initWithActivityItems_applicatio_026aa228,puVar3,0);
  local_50 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_popoverPresentationController_0269fdf0);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = false;
  if (puVar2 != (undefined *)0x0) {
    IVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_actionBar_026b9dc0);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = IVar4 != 0;
    (*(code *)PTR__objc_release_02578630)(IVar4);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (bVar1) {
    IVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_actionBar_026b9dc0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_popoverPresentationController_0269fdf0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_actionBar_026b9dc0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_popoverPresentationController_0269fdf0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(in_d0,in_d1,in_d2,in_d3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(IVar4);
  }
  else {
    IVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationItem_0269cf08);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar6 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_popoverPresentationController_0269fdf0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(IVar6);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar4);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_presentViewController_animated_c_0269d2b0,local_50,1);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

