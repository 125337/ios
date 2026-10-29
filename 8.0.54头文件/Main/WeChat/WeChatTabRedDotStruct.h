@interface WeChatTabRedDotStruct : NSObject
{
    BOOL _isBadgeAtTab; // +0x8
    BOOL _hadNoteInfo; // +0x9
    unsigned int _tabIndex; // +0xc
    unsigned long long _unread; // +0x10
}
- (id)initWithIndex:(unsigned int)arg1;
- (id)description;
- (unsigned int)tabIndex;
- (void)setTabIndex:(unsigned int)arg1;
- (BOOL)isBadgeAtTab;
- (void)setIsBadgeAtTab:(BOOL)arg1;
- (unsigned long long)unread;
- (void)setUnread:(unsigned long long)arg1;
- (BOOL)hadNoteInfo;
- (void)setHadNoteInfo:(BOOL)arg1;
@end

