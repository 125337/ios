@interface WCAdSubscriptionHeadInfo : NSObject
{
    NSString * _headImageUrl; // +0x8
    NSString * _nickname; // +0x10
}
+ (id)fetchDefaultSubscriptionHeadInfoForDataItem:(id)arg1;
- (id)headImageUrl;
- (void)setHeadImageUrl:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (void).cxx_destruct;
@end

