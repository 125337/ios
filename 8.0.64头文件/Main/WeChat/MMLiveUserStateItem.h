@interface MMLiveUserStateItem : NSObject
{
    NSString * _userName; // +0x8
    NSString * _displayName; // +0x10
    NSString * _headImageUrl; // +0x18
    unsigned long long _disableCommentDef; // +0x20
    unsigned long long _rewardAmountInHeat; // +0x28
}
- (id)userName;
- (id)displayName;
- (id)headImageUrl;
- (unsigned long long)disableCommentDef;
- (unsigned long long)rewardAmountInHeat;
- (void).cxx_destruct;
@end
