@interface WCFinderLiveTagListItem : NSObject
{
    long long _itemId; // +0x8
    NSString * _title; // +0x10
    id _userInfo; // +0x18
}
+ (id)itemWithItemId:(long long)arg1 title:(id)arg2 userInfo:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (long long)itemId;
- (void)setItemId:(long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (void).cxx_destruct;
@end
