@interface WCAdHeadFinderTopicInfo : NSObject <NSCoding>
{
    NSString * _finderEncryptedTopicId; // +0x8
    NSString * _finderTopicName; // +0x10
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)finderEncryptedTopicId;
- (void)setFinderEncryptedTopicId:(id)arg1;
- (id)finderTopicName;
- (void)setFinderTopicName:(id)arg1;
- (void).cxx_destruct;
@end

