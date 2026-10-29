@interface BrandReportMainSessionInfo : NSObject
{
    BOOL _isShowRedDot; // +0x8
    unsigned int _msgNotifyType; // +0xc
    unsigned int _unreadCount; // +0x10
    unsigned long long _rowIndexMainFrame; // +0x18
    CMessageWrap * _sessionMsg; // +0x20
}
- (unsigned int)getEnterRedDotMsgType;
- (unsigned long long)rowIndexMainFrame;
- (void)setRowIndexMainFrame:(unsigned long long)arg1;
- (BOOL)isShowRedDot;
- (void)setIsShowRedDot:(BOOL)arg1;
- (unsigned int)msgNotifyType;
- (void)setMsgNotifyType:(unsigned int)arg1;
- (unsigned int)unreadCount;
- (void)setUnreadCount:(unsigned int)arg1;
- (id)sessionMsg;
- (void)setSessionMsg:(id)arg1;
- (void).cxx_destruct;
@end

