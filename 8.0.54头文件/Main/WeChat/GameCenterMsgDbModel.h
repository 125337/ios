@interface GameCenterMsgDbModel : NSObject <WCTTableCoding>
{
    BOOL isAutoIncrement; // +0x8
    BOOL _showInMsgCenter; // +0x9
    BOOL _unRead; // +0xa
    BOOL _needReExposure; // +0xb
    BOOL _needHide; // +0xc
    BOOL _isGreet; // +0xd
    unsigned int _localId; // +0x10
    unsigned int _type; // +0x14
    unsigned int _createTime; // +0x18
    unsigned int _recvTime; // +0x1c
    unsigned int _msgRecvServerTime; // +0x20
    unsigned int _firstExposureServerTime; // +0x24
    unsigned int _showType; // +0x28
    unsigned int _alreadyMergedCount; // +0x2c
    unsigned int _reportType; // +0x30
    unsigned int _msgExposureState; // +0x34
    unsigned int _msgExposureCnt; // +0x38
    unsigned int _completeExposureCnt; // +0x3c
    int _msgState; // +0x40
    float _exposureRateScore; // +0x44
    int _redPointQueueType; // +0x48
    unsigned int _relationType; // +0x4c
    unsigned int _subMsgType; // +0x50
    long long lastInsertedRowID; // +0x58
    NSString * _svrMsgId; // +0x60
    NSString * _content; // +0x68
    NSString * _mergeId; // +0x70
    NSString * _pushId; // +0x78
    NSData * _msgSimplePbData; // +0x80
    NSString * _contentId; // +0x88
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)localId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_localId;
+ (const void *)svrMsgId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_svrMsgId;
+ (const void *)type;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_type;
+ (const void *)content;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_content;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)showInMsgCenter;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_showInMsgCenter;
+ (const void *)unRead;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_unRead;
+ (const void *)mergeId;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_mergeId;
+ (const void *)recvTime;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_recvTime;
+ (const void *)msgRecvServerTime;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_msgRecvServerTime;
+ (const void *)firstExposureServerTime;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_firstExposureServerTime;
+ (const void *)showType;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_showType;
+ (const void *)alreadyMergedCount;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_alreadyMergedCount;
+ (const void *)reportType;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_reportType;
+ (const void *)needReExposure;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_needReExposure;
+ (const void *)msgExposureState;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (id)swift_msgExposureState;
+ (const void *)msgExposureCnt;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (id)swift_msgExposureCnt;
+ (const void *)redPointQueueType;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (id)swift_redPointQueueType;
+ (const void *)msgState;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (id)swift_msgState;
+ (const void *)exposureRateScore;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (id)swift_exposureRateScore;
+ (const void *)pushId;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (id)swift_pushId;
+ (const void *)isGreet;
+ (const void *)__wcdb_synthesize_21:(void *)arg1;
+ (id)swift_isGreet;
+ (const void *)relationType;
+ (const void *)__wcdb_synthesize_22:(void *)arg1;
+ (id)swift_relationType;
+ (const void *)msgSimplePbData;
+ (const void *)__wcdb_synthesize_23:(void *)arg1;
+ (id)swift_msgSimplePbData;
+ (const void *)needHide;
+ (const void *)__wcdb_synthesize_24:(void *)arg1;
+ (id)swift_needHide;
+ (const void *)completeExposureCnt;
+ (const void *)__wcdb_synthesize_25:(void *)arg1;
+ (id)swift_completeExposureCnt;
+ (const void *)subMsgType;
+ (const void *)__wcdb_synthesize_26:(void *)arg1;
+ (id)swift_subMsgType;
+ (const void *)contentId;
+ (const void *)__wcdb_synthesize_27:(void *)arg1;
+ (id)swift_contentId;
+ (void)__wcdb_column_constraint_28:(void *)arg1;
+ (void)__wcdb_index_29:(void *)arg1;
+ (void)__wcdb_index_30:(void *)arg1;
- (id)initWithGameCenterMsg:(id)arg1;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)arg1;
- (long long)lastInsertedRowID;
- (void)setLastInsertedRowID:(long long)arg1;
- (unsigned int)localId;
- (void)setLocalId:(unsigned int)arg1;
- (id)svrMsgId;
- (void)setSvrMsgId:(id)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (BOOL)showInMsgCenter;
- (void)setShowInMsgCenter:(BOOL)arg1;
- (BOOL)unRead;
- (void)setUnRead:(BOOL)arg1;
- (id)mergeId;
- (void)setMergeId:(id)arg1;
- (unsigned int)recvTime;
- (void)setRecvTime:(unsigned int)arg1;
- (unsigned int)msgRecvServerTime;
- (void)setMsgRecvServerTime:(unsigned int)arg1;
- (unsigned int)firstExposureServerTime;
- (void)setFirstExposureServerTime:(unsigned int)arg1;
- (unsigned int)showType;
- (void)setShowType:(unsigned int)arg1;
- (unsigned int)alreadyMergedCount;
- (void)setAlreadyMergedCount:(unsigned int)arg1;
- (unsigned int)reportType;
- (void)setReportType:(unsigned int)arg1;
- (BOOL)needReExposure;
- (void)setNeedReExposure:(BOOL)arg1;
- (unsigned int)msgExposureState;
- (void)setMsgExposureState:(unsigned int)arg1;
- (unsigned int)msgExposureCnt;
- (void)setMsgExposureCnt:(unsigned int)arg1;
- (unsigned int)completeExposureCnt;
- (void)setCompleteExposureCnt:(unsigned int)arg1;
- (int)msgState;
- (void)setMsgState:(int)arg1;
- (float)exposureRateScore;
- (void)setExposureRateScore:(float)arg1;
- (int)redPointQueueType;
- (void)setRedPointQueueType:(int)arg1;
- (id)pushId;
- (void)setPushId:(id)arg1;
- (BOOL)needHide;
- (void)setNeedHide:(BOOL)arg1;
- (BOOL)isGreet;
- (void)setIsGreet:(BOOL)arg1;
- (unsigned int)relationType;
- (void)setRelationType:(unsigned int)arg1;
- (id)msgSimplePbData;
- (void)setMsgSimplePbData:(id)arg1;
- (unsigned int)subMsgType;
- (void)setSubMsgType:(unsigned int)arg1;
- (id)contentId;
- (void)setContentId:(id)arg1;
- (void).cxx_destruct;
@end

