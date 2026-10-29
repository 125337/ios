@interface MMFinderLiveLotteryInfo : NSObject
{
    unsigned int _beginTime; // +0x8
    unsigned int _endTime; // +0xc
    unsigned int _remainTime; // +0x10
    unsigned int _winnerCnt; // +0x14
    unsigned int _participantCnt; // +0x18
    unsigned int _lotteryStatus; // +0x1c
    unsigned int _extFlag; // +0x20
    unsigned int _realWinnerCnt; // +0x24
    unsigned int _updateLotteryPanel; // +0x28
    unsigned int _methodId; // +0x2c
    NSString * _lotteryId; // +0x30
    NSString * _lotteryDescription; // +0x38
    FinderLiveLotteryAttendMethod * _lotteryMethod; // +0x40
    FinderLiveLotteryInfo_ParticipantInfo * _participantInfo; // +0x48
    FinderLiveLotteryParticipability * _participability; // +0x50
    FinderLiveLotteryClaimMethod * _claimMethod; // +0x58
    FinderLiveLotteryPrizeMethod * _prizeMethod; // +0x60
    FinderLiveLotteryAnchorInfo * _anchorInfo; // +0x68
    NSString * _remindWording; // +0x70
    WCFinderContact * _anchorContact; // +0x78
    unsigned long long _objectId; // +0x80
    FinderLiveLotteryWinnerExtInfo * _winnerInfo; // +0x88
}
- (id)initWithLotteryInfo:(id)arg1;
- (id)initWithFinderLotteryInfo:(id)arg1;
- (BOOL)isShopProductType;
- (BOOL)isPackageGiftType;
- (BOOL)isGameTeamUpType;
- (id)description;
- (void)updateWithNewLotteryInfo:(id)arg1;
- (id)lotteryId;
- (void)setLotteryId:(id)arg1;
- (unsigned int)beginTime;
- (void)setBeginTime:(unsigned int)arg1;
- (unsigned int)endTime;
- (void)setEndTime:(unsigned int)arg1;
- (unsigned int)remainTime;
- (void)setRemainTime:(unsigned int)arg1;
- (id)lotteryDescription;
- (void)setLotteryDescription:(id)arg1;
- (id)lotteryMethod;
- (void)setLotteryMethod:(id)arg1;
- (unsigned int)winnerCnt;
- (void)setWinnerCnt:(unsigned int)arg1;
- (unsigned int)participantCnt;
- (void)setParticipantCnt:(unsigned int)arg1;
- (unsigned int)lotteryStatus;
- (void)setLotteryStatus:(unsigned int)arg1;
- (unsigned int)extFlag;
- (void)setExtFlag:(unsigned int)arg1;
- (unsigned int)realWinnerCnt;
- (void)setRealWinnerCnt:(unsigned int)arg1;
- (id)participantInfo;
- (void)setParticipantInfo:(id)arg1;
- (id)participability;
- (void)setParticipability:(id)arg1;
- (id)claimMethod;
- (void)setClaimMethod:(id)arg1;
- (id)prizeMethod;
- (void)setPrizeMethod:(id)arg1;
- (id)anchorInfo;
- (void)setAnchorInfo:(id)arg1;
- (id)remindWording;
- (void)setRemindWording:(id)arg1;
- (unsigned int)updateLotteryPanel;
- (void)setUpdateLotteryPanel:(unsigned int)arg1;
- (unsigned int)methodId;
- (void)setMethodId:(unsigned int)arg1;
- (id)anchorContact;
- (void)setAnchorContact:(id)arg1;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (id)winnerInfo;
- (void)setWinnerInfo:(id)arg1;
- (void).cxx_destruct;
@end
