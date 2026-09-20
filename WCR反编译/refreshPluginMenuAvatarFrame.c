// refreshPluginMenuAvatarFrame @ 01d2f7dc

/* Function Stack Size: 0x10 bytes */

void WCRefineRootViewController::refreshPluginMenuAvatarFrame(ID param_1,SEL param_2)

{
  undefined *puVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_avatarImageView_026c4458);
  _objc_retainAutoreleasedReturnValue();
  bVar2 = true;
  if (IVar3 != 0) {
    IVar4 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_headerView_026a0fa8);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = IVar4 == 0;
    (*(code *)PTR__objc_release_02578630)(IVar4);
  }
  (*(code *)PTR__objc_release_02578630)(IVar3);
  if (!bVar2) {
    IVar3 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_headerView_026a0fa8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    puVar1 = PTR_WCRefineAvatarFramePageOverlayHelper_026cefb0;
    IVar3 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_avatarImageView_026c4458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_headerView_026a0fa8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_applySpecialPageFrameOnAvatarVie_026b46c8,IVar3,param_1,
               _WCRefineAvatarFrameSpecialKeyPluginMenu);
    (*(code *)PTR__objc_release_02578630)(param_1);
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  return;
}

