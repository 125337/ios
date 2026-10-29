@interface WAHandoffInfo : NSObject <NSCopying>
{
    NSString * _pagePath; // +0x8
    NSString * _handoffId; // +0x10
    NSString * _handoff; // +0x18
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)pagePath;
- (void)setPagePath:(id)arg1;
- (id)handoffId;
- (void)setHandoffId:(id)arg1;
- (id)handoff;
- (void)setHandoff:(id)arg1;
- (void).cxx_destruct;
@end
