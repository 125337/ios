// FUN_0023bb54 @ 0023bb54

void FUN_0023bb54(void)

{
  char *pcVar1;
  
  pcVar1 = "BrandTLExptConfig";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_renderMode_026a0c10,FUN_0023bbcc,&DAT_028c9290);
  pcVar1 = "NewMainFrameViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_internalOpenBrandSessionViewFrom_026a0c18,FUN_0023bc38,&DAT_028c9298
                  );
  return;
}

