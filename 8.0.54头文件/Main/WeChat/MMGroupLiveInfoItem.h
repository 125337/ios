@interface MMGroupLiveInfoItem : MMObject <WCTTableCoding, NSCopying, PBCoding>
{
    BOOL enableComment; // +0x8
    BOOL enableApplyLiveMic; // +0x9
    BOOL enableLiveReplay; // +0xa
    BOOL useDefaultLiveName; // +0xb
    unsigned int createTime; // +0xc
    unsigned int endTime; // +0x10
    unsigned int status; // +0x14
    unsigned int onlineCnt; // +0x18
    unsigned int messageCnt; // +0x1c
    unsigned int likeCnt; // +0x20
    unsigned int _barStatus; // +0x24
    long long liveId; // +0x28
    NSString * liveName; // +0x30
    NSString * roomId; // +0x38
    NSString * replayUrl; // +0x40
    NSString * anchor; // +0x48
    long long timeId; // +0x50
    NSString * sdkUserId; // +0x58
    NSString * createSdkUserId; // +0x60
    unsigned long long chatroomliveExtInfoFlag; // +0x68
}
+ (void)PBArrayAdd_liveId;
+ (void)PBArrayAdd_liveName;
+ (void)PBArrayAdd_roomId;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_endTime;
+ (void)PBArrayAdd_status;
+ (void)PBArrayAdd_onlineCnt;
+ (void)PBArrayAdd_messageCnt;
+ (void)PBArrayAdd_likeCnt;
+ (void)PBArrayAdd_replayUrl;
+ (void)PBArrayAdd_enableComment;
+ (void)PBArrayAdd_enableApplyLiveMic;
+ (void)PBArrayAdd_enableLiveReplay;
+ (void)PBArrayAdd_anchor;
+ (void)PBArrayAdd_timeId;
+ (void)PBArrayAdd_sdkUserId;
+ (void)PBArrayAdd_createSdkUserId;
+ (void)PBArrayAdd_useDefaultLiveName;
+ (void)PBArrayAdd_chatroomliveExtInfoFlag;
+ (void)initialize;
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)liveId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_liveId;
+ (const void *)liveName;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_liveName;
+ (const void *)roomId;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_roomId;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)endTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_endTime;
+ (const void *)status;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_status;
+ (const void *)onlineCnt;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_onlineCnt;
+ (const void *)messageCnt;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_messageCnt;
+ (const void *)likeCnt;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_likeCnt;
+ (const void *)replayUrl;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_replayUrl;
+ (const void *)enableComment;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_enableComment;
+ (const void *)enableApplyLiveMic;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_enableApplyLiveMic;
+ (const void *)enableLiveReplay;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_enableLiveReplay;
+ (const void *)anchor;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_anchor;
+ (const void *)timeId;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_timeId;
+ (const void *)sdkUserId;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (id)swift_sdkUserId;
+ (const void *)createSdkUserId;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (id)swift_createSdkUserId;
+ (const void *)barStatus;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (id)swift_barStatus;
+ (const void *)useDefaultLiveName;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (id)swift_useDefaultLiveName;
+ (const void *)chatroomliveExtInfoFlag;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (id)swift_chatroomliveExtInfoFlag;
+ (void)__wcdb_column_constraint_20:(void *)arg1;
+ (void)__wcdb_index_21:(void *)arg1;
+ (void)__wcdb_index_22:(void *)arg1;
+ (void)__wcdb_index_23:(void *)arg1;
+ (void)__wcdb_index_24:(void *)arg1;
+ (void)__wcdb_index_25:(void *)arg1;
+ (id)createItemWithLiveInfo:(id)arg1 roomId:(id)arg2;
+ (id)createItemWithShareLiveMsg:(id)arg1;
- (id)getPBPropertyTable;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)copyFromLiveInfo:(id)arg1 roomId:(id)arg2;
- (id)toLiveInfo;
- (id)description;
- (long long)liveId;
- (void)setLiveId:(long long)arg1;
- (id)liveName;
- (void)setLiveName:(id)arg1;
- (id)roomId;
- (void)setRoomId:(id)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (unsigned int)endTime;
- (void)setEndTime:(unsigned int)arg1;
- (unsigned int)status;
- (void)setStatus:(unsigned int)arg1;
- (unsigned int)onlineCnt;
- (void)setOnlineCnt:(unsigned int)arg1;
- (unsigned int)messageCnt;
- (void)setMessageCnt:(unsigned int)arg1;
- (unsigned int)likeCnt;
- (void)setLikeCnt:(unsigned int)arg1;
- (id)replayUrl;
- (void)setReplayUrl:(id)arg1;
- (BOOL)enableComment;
- (void)setEnableComment:(BOOL)arg1;
- (BOOL)enableApplyLiveMic;
- (void)setEnableApplyLiveMic:(BOOL)arg1;
- (BOOL)enableLiveReplay;
- (void)setEnableLiveReplay:(BOOL)arg1;
- (id)anchor;
- (void)setAnchor:(id)arg1;
- (long long)timeId;
- (void)setTimeId:(long long)arg1;
- (id)sdkUserId;
- (void)setSdkUserId:(id)arg1;
- (id)createSdkUserId;
- (void)setCreateSdkUserId:(id)arg1;
- (BOOL)useDefaultLiveName;
- (void)setUseDefaultLiveName:(BOOL)arg1;
- (unsigned long long)chatroomliveExtInfoFlag;
- (void)setChatroomliveExtInfoFlag:(unsigned long long)arg1;
- (unsigned int)barStatus;
- (void)setBarStatus:(unsigned int)arg1;
- (void).cxx_destruct;
@end

