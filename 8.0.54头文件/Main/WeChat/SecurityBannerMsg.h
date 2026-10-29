@interface SecurityBannerMsg : NSObject <PBCoding>
{
    unsigned int _showType; // +0x8
    NSString * _wording; // +0x10
    NSString * _linkName; // +0x18
    NSString * _linkSrc; // +0x20
}
+ (void)PBArrayAdd_wording;
+ (void)PBArrayAdd_showType;
+ (void)PBArrayAdd_linkName;
+ (void)PBArrayAdd_linkSrc;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)wording;
- (void)setWording:(id)arg1;
- (unsigned int)showType;
- (void)setShowType:(unsigned int)arg1;
- (id)linkName;
- (void)setLinkName:(id)arg1;
- (id)linkSrc;
- (void)setLinkSrc:(id)arg1;
- (void).cxx_destruct;
@end

