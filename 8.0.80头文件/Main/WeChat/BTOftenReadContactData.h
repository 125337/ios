@interface BTOftenReadContactData : MMObject <PBCoding>
{
    BOOL _hasNewMsg; // +0x8
    BOOL _hasNewLive; // +0x9
    unsigned int _lastMsgTime; // +0xc
    unsigned int _weight; // +0x10
    unsigned int _flag; // +0x14
    NSString * _userName; // +0x18
    unsigned long long _lastMsgSvrId; // +0x20
    NSString * _finderFeedExportId; // +0x28
    unsigned long long _newMsgType; // +0x30
    unsigned long long _lastFinderGreenDotTimeStamp; // +0x38
    NSString * _finderNickName; // +0x40
    NSString * _finderLogoUrl; // +0x48
    unsigned long long _finderUin; // +0x50
    unsigned long long _finderLastUpdateTime; // +0x58
    NSString * _finderExportId; // +0x60
}
+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_hasNewMsg;
+ (void)PBArrayAdd_lastMsgTime;
+ (void)PBArrayAdd_weight;
+ (void)PBArrayAdd_finderFeedExportId;
+ (void)PBArrayAdd_hasNewLive;
+ (void)PBArrayAdd_newMsgType;
+ (void)PBArrayAdd_lastFinderGreenDotTimeStamp;
+ (void)PBArrayAdd_flag;
+ (void)PBArrayAdd_finderNickName;
+ (void)PBArrayAdd_finderLogoUrl;
+ (void)PBArrayAdd_finderUin;
+ (void)PBArrayAdd_finderLastUpdateTime;
+ (void)PBArrayAdd_finderExportId;
+ (void)initialize;
- (id)getPBPropertyTable;
- (BOOL)isLiving;
- (BOOL)isFinder;
- (BOOL)isMember;
- (unsigned int)lastMsgTime;
- (id)description;
- (id)getNeededExportId;
- (id)userName;
- (void)setUserName:(id)arg1;
- (BOOL)hasNewMsg;
- (void)setHasNewMsg:(BOOL)arg1;
- (unsigned long long)lastMsgSvrId;
- (void)setLastMsgSvrId:(unsigned long long)arg1;
- (void)setLastMsgTime:(unsigned int)arg1;
- (unsigned int)weight;
- (void)setWeight:(unsigned int)arg1;
- (id)finderFeedExportId;
- (void)setFinderFeedExportId:(id)arg1;
- (BOOL)hasNewLive;
- (void)setHasNewLive:(BOOL)arg1;
- (unsigned long long)newMsgType;
- (void)setNewMsgType:(unsigned long long)arg1;
- (unsigned long long)lastFinderGreenDotTimeStamp;
- (void)setLastFinderGreenDotTimeStamp:(unsigned long long)arg1;
- (unsigned int)flag;
- (void)setFlag:(unsigned int)arg1;
- (id)finderNickName;
- (void)setFinderNickName:(id)arg1;
- (id)finderLogoUrl;
- (void)setFinderLogoUrl:(id)arg1;
- (unsigned long long)finderUin;
- (void)setFinderUin:(unsigned long long)arg1;
- (unsigned long long)finderLastUpdateTime;
- (void)setFinderLastUpdateTime:(unsigned long long)arg1;
- (id)finderExportId;
- (void)setFinderExportId:(id)arg1;
- (void).cxx_destruct;
@end
