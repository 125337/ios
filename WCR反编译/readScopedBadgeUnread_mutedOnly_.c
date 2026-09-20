// readScopedBadgeUnread:mutedOnly: @ 015f7640

/* Function Stack Size: 0x20 bytes */

void WCRQuickChatRuntime::readScopedBadgeUnread_mutedOnly_
               (ID param_1,SEL param_2,unsigned_int *param_3,bool *param_4)

{
  undefined *puVar1;
  
  if ((DAT_028e3bf8 & 1) == 0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_refreshScopedBadgeCacheWithConfi_026b1638);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  if (param_3 != (unsigned_int *)0x0) {
    *param_3 = DAT_028e3be8;
  }
  if (param_4 != (bool *)0x0) {
    *(byte *)param_4 = DAT_028e3bec & 1;
  }
  return;
}

