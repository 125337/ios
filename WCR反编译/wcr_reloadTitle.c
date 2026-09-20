// wcr_reloadTitle @ 0152bf6c

/* Function Stack Size: 0x10 bytes */

void WCRInvitedMemberListViewController::wcr_reloadTitle(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_entries_026a25d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf_bv_);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setTitle__0269cef0);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  return;
}

