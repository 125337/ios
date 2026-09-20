// performResizeScale:size:speed:md5:chatVC: @ 00f3b6d4

/* Function Stack Size: 0x40 bytes */

void __thiscall
WCRefineEmoticonToolsHelper::performResizeScale_size_speed_md5_chatVC_
          (WCRefineEmoticonToolsHelper *this,ID param_1,SEL param_2,double param_3,CGSize param_4,
          double param_5,ID param_6,ID param_7)

{
  long lVar1;
  long lVar2;
  dispatch_queue_t pdVar3;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  long local_a0;
  long local_98;
  ID local_90;
  double local_88;
  double local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_64;
  long local_60;
  long local_58;
  undefined8 local_50;
  double local_48;
  SEL local_40;
  ID local_38;
  double local_30;
  undefined8 uStack_28;
  
  local_58 = 0;
  local_50 = in_d3;
  local_48 = param_3;
  local_40 = param_2;
  local_38 = param_1;
  local_30 = param_5;
  uStack_28 = in_d2;
  _objc_storeStrong(&local_58,param_4.field0_0x0);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_4.field1_0x8);
  lVar2 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  if ((lVar2 == 0) || (local_60 == 0)) {
    local_64 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_ck_WYt_);
    pdVar3 = _dispatch_get_global_queue(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_58;
    local_c0 = PTR___NSConcreteStackBlock_02578660;
    local_b8 = 0xc2000000;
    local_b4 = 0;
    local_b0 = FUN_00f3b8a8;
    local_a8 = &DAT_02582bb8;
    local_90 = local_38;
    (*(code *)PTR__objc_retain_02578638)();
    lVar2 = local_60;
    local_a0 = lVar1;
    local_88 = local_48;
    uStack_78 = uStack_28;
    local_80 = local_30;
    local_70 = local_50;
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = lVar2;
    _dispatch_async(pdVar3,&local_c0);
    (*(code *)PTR__objc_release_02578630)(pdVar3);
    _objc_storeStrong(&local_98);
    _objc_storeStrong(&local_a0,0);
    local_64 = 0;
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  return;
}

