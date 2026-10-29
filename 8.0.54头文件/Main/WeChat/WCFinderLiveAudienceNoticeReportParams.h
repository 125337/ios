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
    NSString * _feedAdReportInfo; // +0x60
    NSString * _fromFeedID; // +0x68
}
- (id /* block */)finderUsername_link;
- (id /* block */)refPageType_link;
- (id /* block */)noticeInfo_link;
- (id /* block */)commentScene_link;
- (id /* block */)idOfCouponBindToNotice_link;
- (id /* block */)brandAction_link;
- (id /* block */)noticeAction_link;
- (id /* block */)noticeScene_link;
- (id /* block */)fromScene_link;
- (id /* block */)reserveOrUnreserveForAll_link;
- (id /* block */)reportProfileExposeOnlyOnceForInstance_link;
- (id /* block */)useDefaultADData_link;
- (id /* block */)clearADDataAfterReportForBook_link;
- (id /* block */)isFromDetailNotice_link;
- (id /* block */)feedAdReportInfo_link;
- (id /* block */)fromFeedID_link;
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
- (void)setBrandActionContain:(BOOL)arg1;
- (unsigned long long)brandAction;
- (void)setBrandAction:(unsigned long long)arg1;
- (BOOL)noticeActionContain;
- (void)setNoticeActionContain:(BOOL)arg1;
- (long long)noticeAction;
- (void)setNoticeAction:(long long)arg1;
- (BOOL)noticeSceneContain;
- (void)setNoticeSceneContain:(BOOL)arg1;
- (long long)noticeScene;
- (void)setNoticeScene:(long long)arg1;
- (BOOL)fromSceneContain;
- (void)setFromSceneContain:(BOOL)arg1;
- (long long)fromScene;
- (void)setFromScene:(long long)arg1;
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
- (id)feedAdReportInfo;
- (void)setFeedAdReportInfo:(id)arg1;
- (id)fromFeedID;
- (void)setFromFeedID:(id)arg1;
- (void).cxx_destruct;
@end

