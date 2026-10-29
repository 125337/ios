@interface BizBoxMrg : NSObject
{
    BizBoxMrgBridge * bridge_; // +0x8
    BizBoxMrgCallbackBridge * callback_; // +0x10
}
- (id)initWithHandle:(BizBoxMrgBridge *)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (BizBoxMrgBridge *)bridge;
- (void)loadFoldBoxCardDataAsync:(unsigned int)arg1;
- (void)onExposeAsync:(unsigned int)arg1 localId:(unsigned long long)arg2 validExpose:(BOOL)arg3;
- (void)getDataAsync:(unsigned int)arg1 sceneType:(unsigned int)arg2 lastLocalId:(unsigned long long)arg3;
- (void)loadHistoryWordingAsync:(unsigned int)arg1;
@end

