@interface MessageCommonTail : NSObject
{
    long long _bizType; // +0x8
    NSArray * _wordings; // +0x10
}
+ (id)fromXMLNode:(XmlReaderNode_t *)arg1;
- (id)toXMLString;
- (BOOL)isXiaoWei;
- (id)wordingForCurrentLanguage;
- (long long)bizType;
- (void)setBizType:(long long)arg1;
- (id)wordings;
- (void)setWordings:(id)arg1;
- (void).cxx_destruct;
@end
