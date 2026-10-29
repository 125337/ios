@interface GameAppStoreReportInfo : NSObject
{
    int _uiarea; // +0x8
    NSString * _appId; // +0x10
    NSString * _msgId; // +0x18
    NSString * _noticeId; // +0x20
}
+ (id)reportInfoFromDict:(id)arg1;
- (id)description;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)msgId;
- (void)setMsgId:(id)arg1;
- (id)noticeId;
- (void)setNoticeId:(id)arg1;
- (int)uiarea;
- (void)setUiarea:(int)arg1;
- (void).cxx_destruct;
@end
