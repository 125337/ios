@interface WCADCardItem : NSObject <NSCoding>
{
    NSString * cardTpId; // +0x8
    NSString * cardExt; // +0x10
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)cardTpId;
- (void)setCardTpId:(id)arg1;
- (id)cardExt;
- (void)setCardExt:(id)arg1;
- (void).cxx_destruct;
@end

