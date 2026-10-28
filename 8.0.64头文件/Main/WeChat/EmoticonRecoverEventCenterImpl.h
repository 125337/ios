@interface EmoticonRecoverEventCenterImpl : NSObject <EmoticonRecoverEventCenterBase>
- (void)setCallback:(id)arg1;
- (void)onEmoticonRecoverLogicFinishedAsync:(unsigned long long)arg1 type:(int)arg2;
- (void)onEmoticonRecoverLogicFailedAsync:(unsigned long long)arg1 type:(int)arg2;
- (void)onEmoticonRecoverLogicDownloadedSingleEmoticonAsync:(unsigned long long)arg1 type:(int)arg2;
- (void)onEmoticonRecoverLogicFinishedPartSyncAsync:(unsigned long long)arg1 type:(int)arg2;
- (void)onEmoticonRecoverLogicNotifyDownloadProgressAsync:(unsigned long long)arg1 type:(int)arg2;
@end
