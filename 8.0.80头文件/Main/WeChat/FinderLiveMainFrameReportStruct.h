@interface FinderLiveMainFrameReportStruct : NSObject
{
    BOOL _isMuted; // +0x8
    BOOL _firstAction; // +0x9
    BOOL _hasRedDot; // +0xa
    unsigned int _createTime; // +0xc
    unsigned int _msgType; // +0x10
    unsigned int _noticeType; // +0x14
    unsigned int _unreadCount; // +0x18
    unsigned long long _actionType; // +0x20
    NSString * _previewTitle; // +0x28
    unsigned long long _rowIndex; // +0x30
    NSString * _finderUsername; // +0x38
    NSString * _feedId; // +0x40
    NSString * _liveId; // +0x48
    long long _msgId; // +0x50
    NSString * _sessionBuffer; // +0x58
    NSMutableDictionary * _liveJson; // +0x60
}
- (id)liveJson;
- (id)toReportString;
- (unsigned long long)actionType;
- (void)setActionType:(unsigned long long)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (id)previewTitle;
- (void)setPreviewTitle:(id)arg1;
- (BOOL)isMuted;
- (void)setIsMuted:(BOOL)arg1;
- (unsigned long long)rowIndex;
- (void)setRowIndex:(unsigned long long)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (id)liveId;
- (void)setLiveId:(id)arg1;
- (BOOL)firstAction;
- (void)setFirstAction:(BOOL)arg1;
- (unsigned int)msgType;
- (void)setMsgType:(unsigned int)arg1;
- (long long)msgId;
- (void)setMsgId:(long long)arg1;
- (unsigned int)noticeType;
- (void)setNoticeType:(unsigned int)arg1;
- (BOOL)hasRedDot;
- (void)setHasRedDot:(BOOL)arg1;
- (unsigned int)unreadCount;
- (void)setUnreadCount:(unsigned int)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (void)setLiveJson:(id)arg1;
- (void).cxx_destruct;
@end
