@interface WCRecommendMetaInfo : NSObject
{
    int recommendType; // +0x8
    int source; // +0xc
    NSString * expId; // +0x10
    NSString * contentXml; // +0x18
    NSString * expOriginSnsId; // +0x20
}
- (id)init;
- (id)description;
- (int)recommendType;
- (void)setRecommendType:(int)arg1;
- (int)source;
- (void)setSource:(int)arg1;
- (id)expId;
- (void)setExpId:(id)arg1;
- (id)contentXml;
- (void)setContentXml:(id)arg1;
- (id)expOriginSnsId;
- (void)setExpOriginSnsId:(id)arg1;
- (void).cxx_destruct;
@end
