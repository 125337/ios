// _WCRefineProfileBgEnableHideForHTMLMode @ 01cf4f0c

void _WCRefineProfileBgEnableHideForHTMLMode(void)

{
  undefined *puVar1;
  undefined *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_profileHideEnabled_0269e140);
  if (((ulong)puVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setProfileHideEnabled__026c3810,1);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

