// downloadDouTuMissing:imported:parsed:pack:toast: @ 01b71924

/* Function Stack Size: 0x38 bytes */

void WCRefineLocalEmoticonLibraryViewController::downloadDouTuMissing_imported_parsed_pack_toast_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,long_long param_5,ID param_6,
               ID param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  dispatch_queue_t pdVar4;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  ID local_70;
  long_long local_68;
  long_long local_60;
  undefined8 local_58;
  undefined8 local_50;
  long_long local_48;
  long_long local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_50 = 0;
  local_48 = param_5;
  local_40 = param_4;
  _objc_storeStrong(&local_50,param_6);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_7);
  pdVar4 = _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = local_50;
  local_88 = uVar1;
  (*(code *)PTR__objc_retain_02578638)();
  uVar1 = local_58;
  local_80 = uVar2;
  local_68 = local_40;
  (*(code *)PTR__objc_retain_02578638)();
  IVar3 = local_28;
  local_78 = uVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = IVar3;
  local_60 = local_48;
  _dispatch_async(pdVar4);
  (*(code *)PTR__objc_release_02578630)(pdVar4);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_38,0);
  return;
}

