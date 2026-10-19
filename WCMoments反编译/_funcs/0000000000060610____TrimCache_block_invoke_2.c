// ___TrimCache_block_invoke_2 @0x60610

undefined8 ___TrimCache_block_invoke_2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_68;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  _objc_msgSend_objectForKeyedSubscript_(local_20,local_68);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_objectForKeyedSubscript_(local_28,local_68,&cf_date);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar3 = _objc_msgSend_compare_(uVar1,local_68);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return uVar3;
}

