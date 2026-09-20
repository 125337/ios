// presentAvatarPickerForGroupId:fromViewController:completion: @ 01ac3c54

/* Function Stack Size: 0x28 bytes */

void WCRefineGroupManagementViewController::
     presentAvatarPickerForGroupId_fromViewController_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *local_48;
  undefined4 local_3c;
  undefined8 local_38;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if ((lVar1 == 0) || (local_30 == 0)) {
    local_3c = 1;
  }
  else {
    puVar2 = PTR_WCRGroupAvatarPickerCoordinator_026cf328;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_48 = puVar2;
    _objc_setAssociatedObject(local_30,&DAT_028e4513,puVar2,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_presentSourceSheet_026bdf58);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

