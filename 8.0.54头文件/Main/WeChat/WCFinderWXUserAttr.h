@interface WCFinderWXUserAttr : NSObject
{
    BOOL _showEnterTips; // +0x8
    NSString * _enterTips; // +0x10
}
- (id)initWithAttr:(id)arg1;
- (id)description;
- (BOOL)shouldShowEnterTips;
- (void)setShowEnterTips:(BOOL)arg1;
- (id)enterTips;
- (void)setEnterTips:(id)arg1;
- (void).cxx_destruct;
@end

