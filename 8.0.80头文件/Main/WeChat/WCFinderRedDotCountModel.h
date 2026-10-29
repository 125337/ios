@interface WCFinderRedDotCountModel : NSObject
{
    BOOL _showPrivateEntryRedDot; // +0x8
    long long _memberUnreadMsgCount; // +0x10
    long long _finderUnreadMsgCount; // +0x18
    long long _finderPrivateMsgCount; // +0x20
}
- (long long)getTotalMentionCount;
- (long long)memberUnreadMsgCount;
- (void)setMemberUnreadMsgCount:(long long)arg1;
- (long long)finderUnreadMsgCount;
- (void)setFinderUnreadMsgCount:(long long)arg1;
- (long long)finderPrivateMsgCount;
- (void)setFinderPrivateMsgCount:(long long)arg1;
- (BOOL)showPrivateEntryRedDot;
- (void)setShowPrivateEntryRedDot:(BOOL)arg1;
@end
