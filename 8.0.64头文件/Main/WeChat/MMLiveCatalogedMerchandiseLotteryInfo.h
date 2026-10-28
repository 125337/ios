@interface MMLiveCatalogedMerchandiseLotteryInfo : NSObject
{
    BOOL _participated; // +0x8
    BOOL _exhausted; // +0x9
    NSString * _activityId; // +0x10
    NSString * _orderId; // +0x18
    unsigned long long _status; // +0x20
    unsigned long long _receivedUnixEpochTime; // +0x28
    unsigned long long _currentStatusEndingUnixEpochTime; // +0x30
    unsigned long long _endingUnixEpochTime; // +0x38
    NSURL * _merchandiseThumbnailUri; // +0x40
    NSString * _merchandiseName; // +0x48
    MMFinderLiveOpenProductPageParam * _merchandiseDetailsOpenParameters; // +0x50
    unsigned long long _merchandiseItemsCount; // +0x58
    unsigned long long _participantsCount; // +0x60
    FinderJumpInfo * _drawingPageJumpInfo; // +0x68
    MMLiveCatalogedMerchandiseLotteryQuest * _quest; // +0x70
}
+ (id)lotteryInfoWithActivityInfo:(id)arg1 previousLotteryInfoForTimeAdjustment:(id)arg2 liveTaskId:(id)arg3;
+ (unsigned long long)adjustedCurrentStatusEndingUnixEpochTimeWithActivityInfo:(id)arg1 previousLotteryInfo:(id)arg2 currentServerTime:(unsigned long long)arg3;
- (BOOL)valid;
- (BOOL)active;
- (BOOL)validAtUnixEpochTime:(unsigned long long)arg1;
- (id)activityId;
- (void)setActivityId:(id)arg1;
- (id)orderId;
- (void)setOrderId:(id)arg1;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg1;
- (unsigned long long)receivedUnixEpochTime;
- (void)setReceivedUnixEpochTime:(unsigned long long)arg1;
- (unsigned long long)currentStatusEndingUnixEpochTime;
- (void)setCurrentStatusEndingUnixEpochTime:(unsigned long long)arg1;
- (unsigned long long)endingUnixEpochTime;
- (void)setEndingUnixEpochTime:(unsigned long long)arg1;
- (id)merchandiseThumbnailUri;
- (void)setMerchandiseThumbnailUri:(id)arg1;
- (id)merchandiseName;
- (void)setMerchandiseName:(id)arg1;
- (id)merchandiseDetailsOpenParameters;
- (void)setMerchandiseDetailsOpenParameters:(id)arg1;
- (unsigned long long)merchandiseItemsCount;
- (void)setMerchandiseItemsCount:(unsigned long long)arg1;
- (unsigned long long)participantsCount;
- (void)setParticipantsCount:(unsigned long long)arg1;
- (BOOL)participated;
- (void)setParticipated:(BOOL)arg1;
- (BOOL)exhausted;
- (void)setExhausted:(BOOL)arg1;
- (id)drawingPageJumpInfo;
- (void)setDrawingPageJumpInfo:(id)arg1;
- (id)quest;
- (void)setQuest:(id)arg1;
- (void).cxx_destruct;
@end
