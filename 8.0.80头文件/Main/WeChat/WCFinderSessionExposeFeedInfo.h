@interface WCFinderSessionExposeFeedInfo : NSObject
{
    BOOL _ignoreFilter; // +0x8
    NSString * _tid; // +0x10
    NSSet * _whiteList; // +0x18
}
- (BOOL)ignoreFilter;
- (void)setIgnoreFilter:(BOOL)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)whiteList;
- (void)setWhiteList:(id)arg1;
- (void).cxx_destruct;
@end
