@interface WaveVideoModelResMgr : MMUserService <MMResourceMgrExt, MMServiceProtocol>
+ (int)copyNSStringToCharArray:(id)arg1 toBuf:(char *)arg2 bufSize:(int)arg3;
+ (int)setModelPathWithName:(int)arg1 modelPath:(id)arg2;
+ (int)setResFileMd5:(int)arg1 md5:(id)arg2;
+ (int)setExptSwitch:(int)arg1 value:(int)arg2;
+ (int)getModelSubType:(id)arg1;
+ (id)getModelSavePath:(int)arg1;
+ (id)modelRoot;
+ (id)prepare:(int)arg1 exptSwitch:(int)arg2;
+ (id)prepareModel:(int)arg1;
+ (void)prepareConfig:(int)arg1 exptSwitch:(int)arg2;
+ (id)getOriginalMd5:(int)arg1;
+ (id)getPartialMd5:(int)arg1;
+ (id)getKvStatString:(int)arg1 exptSwitch:(int)arg2;
+ (BOOL)saveModelToModelRoot:(id)arg1 subtype:(int)arg2;
+ (void)updateSubtype:(int)arg1;
+ (void)checkResUpdateCheckAndUpdateSubType:(int)arg1;
+ (id)getModelSavePathWithOccasionalCheckResUpdate:(int)arg1;
+ (void)updateSubTypeWithOccasionalCheckResUpdate:(int)arg1;
+ (void)checkResUpdateCheckAndUpdateAll;
+ (int)getBusinessExptSwitch:(id)arg1;
+ (id)getBusinessKvStatString:(id)arg1;
+ (void)prepareBusiness:(id)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
@end
