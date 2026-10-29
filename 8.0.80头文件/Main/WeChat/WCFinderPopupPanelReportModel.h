@interface WCFinderPopupPanelReportModel : NSObject
{
    BOOL _noticeDisplayImmediately; // +0x8
    int _scene; // +0xc
    unsigned int _noticePopupDeliveryScene; // +0x10
    NSMutableDictionary * _commonReportDict; // +0x18
    NSString * _fromFeedId; // +0x20
    NSString * _fromFeedSessionBuffer; // +0x28
    NSString * _fromFinderUsername; // +0x30
    NSString * _noticeTitle; // +0x38
    NSString * _noticeSubtitle; // +0x40
    NSString * _noticeTips; // +0x48
    NSString * _noticeTipsId; // +0x50
    NSString * _noticeTipsUuid; // +0x58
    NSString * _noticeFeedId; // +0x60
    NSString * _noticeReportExtInfo; // +0x68
}
- (id)init;
- (id)commonReportDict;
- (void)setCommonReportDict:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)fromFeedId;
- (void)setFromFeedId:(id)arg1;
- (id)fromFeedSessionBuffer;
- (void)setFromFeedSessionBuffer:(id)arg1;
- (id)fromFinderUsername;
- (void)setFromFinderUsername:(id)arg1;
- (id)noticeTitle;
- (void)setNoticeTitle:(id)arg1;
- (id)noticeSubtitle;
- (void)setNoticeSubtitle:(id)arg1;
- (id)noticeTips;
- (void)setNoticeTips:(id)arg1;
- (id)noticeTipsId;
- (void)setNoticeTipsId:(id)arg1;
- (id)noticeTipsUuid;
- (void)setNoticeTipsUuid:(id)arg1;
- (id)noticeFeedId;
- (void)setNoticeFeedId:(id)arg1;
- (id)noticeReportExtInfo;
- (void)setNoticeReportExtInfo:(id)arg1;
- (BOOL)noticeDisplayImmediately;
- (void)setNoticeDisplayImmediately:(BOOL)arg1;
- (unsigned int)noticePopupDeliveryScene;
- (void)setNoticePopupDeliveryScene:(unsigned int)arg1;
- (void).cxx_destruct;
@end
