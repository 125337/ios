@interface BrandServiceBoxMrg : NSObject
{
    BrandServiceBoxMrgBridge * bridge_; // +0x8
    BrandServiceBoxMrgCallbackBridge * callback_; // +0x10
}
- (id)initWithHandle:(BrandServiceBoxMrgBridge *)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (BrandServiceBoxMrgBridge *)bridge;
- (void)loadFoldBoxCardDataAsync:(unsigned long long)arg1;
- (void)onExposeAsync:(unsigned long long)arg1 localId:(unsigned long long)arg2 validExpose:(BOOL)arg3;
- (void)getDataAsync:(unsigned long long)arg1 sceneType:(unsigned int)arg2 lastLocalId:(unsigned long long)arg3;
- (void)getHistoryDataAsync:(unsigned long long)arg1 lastLocalId:(unsigned long long)arg2 fetchSize:(unsigned int)arg3;
- (void)loadHistoryWordingAsync:(unsigned long long)arg1;
@end

