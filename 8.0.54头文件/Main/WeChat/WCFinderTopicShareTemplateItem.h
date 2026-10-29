@interface WCFinderTopicShareTemplateItem : NSObject <NSCoding, NSCopying, PBCoding>
{
    NSString * _templateTopicId; // +0x8
    unsigned long long _templateType; // +0x10
}
+ (void)PBArrayAdd_templateTopicId;
+ (void)PBArrayAdd_templateType;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)description;
- (id)templateTopicId;
- (void)setTemplateTopicId:(id)arg1;
- (unsigned long long)templateType;
- (void)setTemplateType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

