@interface CaraAppleApp : NSObject <CaraNativeAppBase, MMResourceMgrExt>
{
    BOOL _isForeground; // +0x8
}
- (id)init;
- (void)dealloc;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (id)documentUser;
- (void)reportKV:(int)arg1 content:(id)arg2;
- (double)serverNow;
- (id)exptValue:(id)arg1;
- (optional<NSData *>)packageServerData:(int)arg1;
- (void)onResHasNewWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2 version:(unsigned int)arg3;
- (void)onResBeginDownloadWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2 version:(unsigned int)arg3;
- (void)onResFinishDownload:(BOOL)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3 version:(unsigned int)arg4;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)onResDeleteFinishWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2;
- (optional<bool>)kitchenBoolValue:(id)arg1;
- (optional<int>)kitchenIntValue:(id)arg1;
- (optional<float>)kitchenFloatValue:(id)arg1;
- (optional<NSString *>)kitchenStringValue:(id)arg1;
- (BOOL)isDebugging;
- (BOOL)isForeground;
- (void)setIsForeground:(BOOL)arg1;
@end

