@interface MoreTabRedDotInfo : MMObject <NSCopying>
{
    unsigned int _hadMyTabReddot; // +0x8
    NSString * _myTabReddotContent; // +0x10
    NSString * _myTabUuid; // +0x18
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (id)needReport;
- (unsigned int)hadMyTabReddot;
- (void)setHadMyTabReddot:(unsigned int)arg1;
- (id)myTabReddotContent;
- (void)setMyTabReddotContent:(id)arg1;
- (id)myTabUuid;
- (void)setMyTabUuid:(id)arg1;
- (void).cxx_destruct;
@end
