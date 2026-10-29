@interface FlowListArticleItemData : NSObject
{
    NSString * _contentUrl; // +0x8
    NSNumber * _itemShowType; // +0x10
    NSString * _title; // +0x18
    NSString * _username; // +0x20
    NSString * _nickname; // +0x28
}
+ (id)makeWithContentUrl:(id)arg1 itemShowType:(id)arg2 title:(id)arg3 username:(id)arg4 nickname:(id)arg5;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)contentUrl;
- (void)setContentUrl:(id)arg1;
- (id)itemShowType;
- (void)setItemShowType:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (void).cxx_destruct;
@end

