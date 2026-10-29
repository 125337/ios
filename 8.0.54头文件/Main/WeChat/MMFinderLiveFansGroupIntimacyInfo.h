@interface MMFinderLiveFansGroupIntimacyInfo : NSObject
{
    BOOL _noticeReserved; // +0x8
    BOOL _canReserveNotice; // +0x9
    unsigned int _currIntimacy; // +0xc
    unsigned int _nextLevelNeedIntimacy; // +0x10
    FinderLiveBadgeInfo * _badgeInfo; // +0x18
    FinderLiveNewRightsInfo * _theNewRightsInfo; // +0x20
    TaskProgressInfo * _progressInfo; // +0x28
    NSString * _introductionUrl; // +0x30
    FinderLiveAllRightsInfo * _allRightsInfo; // +0x38
    FinderLiveFanClubFloatMsgInfo * _floatMsgInfo; // +0x40
    FinderLiveSuperFanRightInfo * _superfanRightsInfo; // +0x48
    FinderJumpInfo * _cancelSuperfanSubscribeJumpInfo; // +0x50
}
- (unsigned int)currIntimacy;
- (void)setCurrIntimacy:(unsigned int)arg1;
- (unsigned int)nextLevelNeedIntimacy;
- (void)setNextLevelNeedIntimacy:(unsigned int)arg1;
- (id)badgeInfo;
- (void)setBadgeInfo:(id)arg1;
- (id)theNewRightsInfo;
- (void)setTheNewRightsInfo:(id)arg1;
- (id)progressInfo;
- (void)setProgressInfo:(id)arg1;
- (id)introductionUrl;
- (void)setIntroductionUrl:(id)arg1;
- (BOOL)noticeReserved;
- (void)setNoticeReserved:(BOOL)arg1;
- (BOOL)canReserveNotice;
- (void)setCanReserveNotice:(BOOL)arg1;
- (id)allRightsInfo;
- (void)setAllRightsInfo:(id)arg1;
- (id)floatMsgInfo;
- (void)setFloatMsgInfo:(id)arg1;
- (id)superfanRightsInfo;
- (void)setSuperfanRightsInfo:(id)arg1;
- (id)cancelSuperfanSubscribeJumpInfo;
- (void)setCancelSuperfanSubscribeJumpInfo:(id)arg1;
- (void).cxx_destruct;
@end

