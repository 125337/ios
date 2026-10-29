@interface WaveVideoModelResMgr : MMUserService <MMResourceMgrExt, MMServiceProtocol>
+ (id)VOIPDir;
+ (id)modelDir;
+ (id)modelPathWithName:(id)arg1;
+ (void)modelSaveWithName:(unsigned int)arg1 subType:(unsigned int)arg2 modelName:(id)arg3;
+ (id)resFileMd5:(int)arg1 subtype:(int)arg2;
+ (int)exptSwitch:(int)arg1;
+ (id)kvStatString:(int)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
@end

