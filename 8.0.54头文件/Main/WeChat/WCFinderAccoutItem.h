@interface WCFinderAccoutItem : NSObject
{
    WCFinderContact * _contact; // +0x8
    NSMutableArray * _dataItems; // +0x10
    NSString * _friendFollowCountText; // +0x18
}
+ (id)itemWithAcctPageItem:(id)arg1;
- (id)initWithAcctPageItem:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)dataItems;
- (void)setDataItems:(id)arg1;
- (id)friendFollowCountText;
- (void)setFriendFollowCountText:(id)arg1;
- (void).cxx_destruct;
@end

