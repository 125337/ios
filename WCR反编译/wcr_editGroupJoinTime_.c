// wcr_editGroupJoinTime: @ 01557194

/* Function Stack Size: 0x18 bytes */

void WCRefineTopBarProfileCardPresenter::wcr_editGroupJoinTime_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  long local_48;
  uint local_3c;
  long local_38;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = local_28;
  _objc_getAssociatedObject(local_28,DAT_028c5f28);
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar2;
  FUN_01528d34();
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  if (lVar2 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_wcr_dismissProfileCardAnimated_r_026b0590,0,0);
    puVar3 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_38;
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_0155731c;
    local_50 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = lVar1;
    _dispatch_async(puVar3,&local_68);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_48,0);
  }
  local_3c = (uint)(lVar2 == 0);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

