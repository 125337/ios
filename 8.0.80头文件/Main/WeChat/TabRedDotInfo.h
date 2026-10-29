@interface TabRedDotInfo : MMObject <NSCopying>
{
    unsigned int _hadTabReddot; // +0x8
    NSString * _tabReddotContent; // +0x10
    NSString * _tabUuid; // +0x18
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (id)needReport;
- (unsigned int)hadTabReddot;
- (void)setHadTabReddot:(unsigned int)arg1;
- (id)tabReddotContent;
- (void)setTabReddotContent:(id)arg1;
- (id)tabUuid;
- (void)setTabUuid:(id)arg1;
- (void).cxx_destruct;
@end
