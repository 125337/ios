@interface FavoritesOnTopStorage : NSObject <PBCoding>
{
    BOOL _bEditable; // +0x8
    unsigned int _mesLocalID; // +0xc
    unsigned int _favLocalId; // +0x10
    unsigned int _lastReportTime; // +0x14
    NSString * _chatUser; // +0x18
    NSString * _localDataId; // +0x20
    NSString * _timeLineId; // +0x28
}
+ (void)PBArrayAdd_chatUser;
+ (void)PBArrayAdd_mesLocalID;
+ (void)PBArrayAdd_favLocalId;
+ (void)PBArrayAdd_localDataId;
+ (void)PBArrayAdd_timeLineId;
+ (void)PBArrayAdd_bEditable;
+ (void)PBArrayAdd_lastReportTime;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)chatUser;
- (void)setChatUser:(id)arg1;
- (unsigned int)mesLocalID;
- (void)setMesLocalID:(unsigned int)arg1;
- (unsigned int)favLocalId;
- (void)setFavLocalId:(unsigned int)arg1;
- (id)localDataId;
- (void)setLocalDataId:(id)arg1;
- (id)timeLineId;
- (void)setTimeLineId:(id)arg1;
- (BOOL)bEditable;
- (void)setBEditable:(BOOL)arg1;
- (unsigned int)lastReportTime;
- (void)setLastReportTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

