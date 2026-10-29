@interface WCAdDynamicFeedConfigInfo : NSObject <NSCoding>
{
    long long _version; // +0x8
    NSString * _templateId; // +0x10
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)version;
- (void)setVersion:(long long)arg1;
- (id)templateId;
- (void)setTemplateId:(id)arg1;
- (void).cxx_destruct;
@end
