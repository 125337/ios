@interface MMLiveUserStateItem : NSObject
{
    unsigned int _watchTimeS; // +0x8
    NSString * _userName; // +0x10
    NSString * _displayName; // +0x18
    NSString * _headImageUrl; // +0x20
    unsigned long long _disableCommentDef; // +0x28
    unsigned long long _rewardAmountInHeat; // +0x30
}
- (id)userName;
- (id)displayName;
- (id)headImageUrl;
- (unsigned long long)disableCommentDef;
- (unsigned long long)rewardAmountInHeat;
- (unsigned int)watchTimeS;
- (void).cxx_destruct;
@end
