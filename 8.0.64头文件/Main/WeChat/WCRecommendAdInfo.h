@interface WCRecommendAdInfo : NSObject
{
    NSString * snsXml; // +0x8
    NSString * snsRecXml; // +0x10
    NSString * snsRecInfo; // +0x18
}
- (id)init;
- (id)description;
- (id)snsXml;
- (void)setSnsXml:(id)arg1;
- (id)snsRecXml;
- (void)setSnsRecXml:(id)arg1;
- (id)snsRecInfo;
- (void)setSnsRecInfo:(id)arg1;
- (void).cxx_destruct;
@end
