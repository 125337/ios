@interface NewLifeEnterSquareJumpDetailInfo : NSObject
{
    BOOL _jumpDetailSkipHome; // +0x8
    NSData * _lastBuffer; // +0x10
    NewLifePagePreloadCache * _preloadCache; // +0x18
}
- (BOOL)jumpDetailSkipHome;
- (void)setJumpDetailSkipHome:(BOOL)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)preloadCache;
- (void)setPreloadCache:(id)arg1;
- (void).cxx_destruct;
@end

