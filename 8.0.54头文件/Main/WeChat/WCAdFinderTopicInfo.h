@interface WCAdFinderTopicInfo : NSObject <NSCoding>
{
    NSString * _finderEncryptedTopicId; // +0x8
    NSString * _finderTopicName; // +0x10
    NSString * _finderTopicTitle; // +0x18
    NSString * _relationText; // +0x20
    NSArray * _relationAvatarList; // +0x28
    NSArray * _displayRelationAvatarList; // +0x30
    NSArray * _finderTopicResList; // +0x38
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)finderEncryptedTopicId;
- (void)setFinderEncryptedTopicId:(id)arg1;
- (id)finderTopicName;
- (void)setFinderTopicName:(id)arg1;
- (id)finderTopicTitle;
- (void)setFinderTopicTitle:(id)arg1;
- (id)relationText;
- (void)setRelationText:(id)arg1;
- (id)relationAvatarList;
- (void)setRelationAvatarList:(id)arg1;
- (id)displayRelationAvatarList;
- (void)setDisplayRelationAvatarList:(id)arg1;
- (id)finderTopicResList;
- (void)setFinderTopicResList:(id)arg1;
- (void).cxx_destruct;
@end

