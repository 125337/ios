// loadAvatarImage @ 01d307f8

/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineRootViewController::loadAvatarImage(WCRefineRootViewController *this,ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  undefined8 in_d0;
  undefined8 in_d1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_loadingIndicator_026c4490);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIActivityIndicatorView_026cebe8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setLoadingIndicator__026c4498);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_avatarImageView_026c4458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    IVar3 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_loadingIndicator_026c4490);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(in_d0,in_d1);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_headerView_026a0fa8);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_loadingIndicator_026c4490);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_addSubview__026ca4c0);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_loadingIndicator_026c4490);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_loadWeChatUserAvatar_026c44a0);
  return;
}

