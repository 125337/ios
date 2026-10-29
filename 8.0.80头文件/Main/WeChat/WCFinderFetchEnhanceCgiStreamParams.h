@interface WCFinderFetchEnhanceCgiStreamParams : NSObject
{
    int _tabType; // +0x8
    NSData * _lastBuff; // +0x10
    NSData * _enhanceLastBuffer; // +0x18
}
- (id)lastBuff;
- (void)setLastBuff:(id)arg1;
- (id)enhanceLastBuffer;
- (void)setEnhanceLastBuffer:(id)arg1;
- (int)tabType;
- (void)setTabType:(int)arg1;
- (void).cxx_destruct;
@end
