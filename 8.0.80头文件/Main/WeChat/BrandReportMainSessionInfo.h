@interface BrandReportMainSessionInfo : NSObject
{
    BOOL _isShowRedDot; // +0x8
    unsigned int _msgNotifyType; // +0xc
    unsigned int _unreadCount; // +0x10
    unsigned int _uNewNotifyMsgCount; // +0x14
    unsigned long long _rowIndexMainFrame; // +0x18
    CMessageWrap * _sessionMsg; // +0x20
    ReddotExposeMoment * _beginMoment; // +0x28
    ReddotExposeMoment * _endMoment; // +0x30
    double _beginMainFrameScrollOffset; // +0x38
    NSData * _reqReportInfo; // +0x40
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
- (id)beginMoment;
- (void)setBeginMoment:(id)arg1;
- (id)endMoment;
- (void)setEndMoment:(id)arg1;
- (double)beginMainFrameScrollOffset;
- (void)setBeginMainFrameScrollOffset:(double)arg1;
- (unsigned int)uNewNotifyMsgCount;
- (void)setUNewNotifyMsgCount:(unsigned int)arg1;
- (id)reqReportInfo;
- (void)setReqReportInfo:(id)arg1;
- (void).cxx_destruct;
@end
