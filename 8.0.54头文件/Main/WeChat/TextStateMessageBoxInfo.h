@interface TextStateMessageBoxInfo : NSObject
{
    unsigned int _unreadLikeCount; // +0x8
    unsigned int _unreadCommentCount; // +0xc
    unsigned int _totalUnreadCount; // +0x10
    NSArray * _userNames; // +0x18
    NSString * _tip; // +0x20
}
- (id)userNames;
- (void)setUserNames:(id)arg1;
- (id)tip;
- (void)setTip:(id)arg1;
- (unsigned int)unreadLikeCount;
- (void)setUnreadLikeCount:(unsigned int)arg1;
- (unsigned int)unreadCommentCount;
- (void)setUnreadCommentCount:(unsigned int)arg1;
- (unsigned int)totalUnreadCount;
- (void)setTotalUnreadCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end

