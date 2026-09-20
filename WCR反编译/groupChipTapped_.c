// groupChipTapped: @ 01ed7180

/* Function Stack Size: 0x18 bytes */

void WCRToDoAdjustmentFloatingPanel::groupChipTapped_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ulong uVar2;
  ID IVar3;
  undefined *puVar4;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  lVar1 = uVar2 - 0x1db0;
  if (((-1 < lVar1) && (lVar1 < 3)) && ((lVar1 != 1 || (FUN_01ed6148(0), (uVar2 & 1) != 0)))) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_contentController_026b8148);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    puVar4 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_contentController_026b8148);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_updateChipSelection_026c15e0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

