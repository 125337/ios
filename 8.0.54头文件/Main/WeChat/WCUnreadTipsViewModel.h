@interface WCUnreadTipsViewModel : NSObject
{
    NSMutableArray * _userNames; // +0x8
    NSMutableArray * _feedIds; // +0x10
}
- (id)initWithUnreadLayer:(id)arg1;
- (void)fetchUserName:(id /* block */)arg1;
- (id)userNames;
- (void)setUserNames:(id)arg1;
- (id)feedIds;
- (void)setFeedIds:(id)arg1;
- (void).cxx_destruct;
@end

