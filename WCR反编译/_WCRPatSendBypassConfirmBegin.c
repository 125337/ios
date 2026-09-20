// _WCRPatSendBypassConfirmBegin @ 00677030

void _WCRPatSendBypassConfirmBegin(undefined8 param_1)

{
  FUN_00677084();
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  DAT_028cbcb8 = DAT_028cbcb8 + 1;
  _objc_sync_exit(param_1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  return;
}

