@interface WWKFSessionMainFrameInfo : NSObject
{
    BOOL _shouldShowReddotAsUnRead; // +0x8
    unsigned int _unreadCount; // +0xc
}
- (unsigned int)unreadCount;
- (void)setUnreadCount:(unsigned int)arg1;
- (BOOL)shouldShowReddotAsUnRead;
- (void)setShouldShowReddotAsUnRead:(BOOL)arg1;
@end
