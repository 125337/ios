@interface WCFinderLiveAudienceNoticeReportParams : NSObject
{
    BOOL _brandActionContain; // +0x8
    BOOL _noticeActionContain; // +0x9
    BOOL _noticeSceneContain; // +0xa
    BOOL _fromSceneContain; // +0xb
    BOOL _reserveOrUnreserveForAll; // +0xc
    BOOL _reportProfileExposeOnlyOnceForInstance; // +0xd
    BOOL _useDefaultADData; // +0xe
    BOOL _clearADDataAfterReportForBook; // +0xf
    BOOL _isFromDetailNotice; // +0x10
    NSString * _finderUsername; // +0x18
    NSString * _refPageType; // +0x20
    FinderLiveNoticeInfo * _noticeInfo; // +0x28
    NSString * _commentScene; // +0x30
    NSString * _idOfCouponBindToNotice; // +0x38
    unsigned long long _brandAction; // +0x40
    long long _noticeAction; // +0x48
    long long _noticeScene; // +0x50
    long long _fromScene; // +0x58
    unsigned long long _endPageLiveId; // +0x60
    unsigned long long _endPageFeedId; // +0x68
    NSString * _feedAdReportInfo; // +0x70
    NSString * _fromFeedID; // +0x78
}
- (void)setBrandAction:(unsigned long long)arg1;
- (void)setBrandActionContain:(BOOL)arg1;
- (void)setNoticeAction:(long long)arg1;
- (void)setNoticeActionContain:(BOOL)arg1;
- (void)setNoticeScene:(long long)arg1;
- (void)setNoticeSceneContain:(BOOL)arg1;
- (void)setFromScene:(long long)arg1;
- (void)setFromSceneContain:(BOOL)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)refPageType;
- (void)setRefPageType:(id)arg1;
- (id)noticeInfo;
- (void)setNoticeInfo:(id)arg1;
- (id)commentScene;
- (void)setCommentScene:(id)arg1;
- (id)idOfCouponBindToNotice;
- (void)setIdOfCouponBindToNotice:(id)arg1;
- (BOOL)brandActionContain;
- (unsigned long long)brandAction;
- (BOOL)noticeActionContain;
- (long long)noticeAction;
- (BOOL)noticeSceneContain;
- (long long)noticeScene;
- (BOOL)fromSceneContain;
- (long long)fromScene;
- (BOOL)reserveOrUnreserveForAll;
- (void)setReserveOrUnreserveForAll:(BOOL)arg1;
- (BOOL)reportProfileExposeOnlyOnceForInstance;
- (void)setReportProfileExposeOnlyOnceForInstance:(BOOL)arg1;
- (BOOL)useDefaultADData;
- (void)setUseDefaultADData:(BOOL)arg1;
- (BOOL)clearADDataAfterReportForBook;
- (void)setClearADDataAfterReportForBook:(BOOL)arg1;
- (BOOL)isFromDetailNotice;
- (void)setIsFromDetailNotice:(BOOL)arg1;
- (unsigned long long)endPageLiveId;
- (void)setEndPageLiveId:(unsigned long long)arg1;
- (unsigned long long)endPageFeedId;
- (void)setEndPageFeedId:(unsigned long long)arg1;
- (id)feedAdReportInfo;
- (void)setFeedAdReportInfo:(id)arg1;
- (id)fromFeedID;
- (void)setFromFeedID:(id)arg1;
- (void).cxx_destruct;
@end
