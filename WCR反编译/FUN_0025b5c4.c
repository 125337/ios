// FUN_0025b5c4 @ 0025b5c4

void FUN_0025b5c4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR_WCRefineEmoticonGroupStore_026ce420;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_ungroupedDisplayName_026a1040);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_WCRefine_promptRenameGroupId_cur_026a0eb0,uVar3)
  ;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  return;
}

