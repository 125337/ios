@interface BrandTimelineDBMsg : NSObject <WCTTableCoding>
{
    BOOL isAutoIncrement; // +0x8
    BOOL _isExpan; // +0x9
    BOOL _isStarContact; // +0xa
    BOOL _isBrowsed; // +0xb
    BOOL _bExposedInMainSession; // +0xc
    BOOL _hasResorted; // +0xd
    BOOL _isResortNewDigestBold; // +0xe
    BOOL _isValidExpose; // +0xf
    unsigned int _msgId; // +0x10
    unsigned int _groupId; // +0x14
    unsigned int _groupOrderId; // +0x18
    unsigned int _msgPredict; // +0x1c
    unsigned int _msgLocalId; // +0x20
    unsigned int _createTime; // +0x24
    unsigned int _status; // +0x28
    unsigned int _type; // +0x2c
    unsigned int _msgClusterType; // +0x30
    unsigned int _bizMsgType; // +0x34
    unsigned int _exposeCountInMainSession; // +0x38
    unsigned int _exposeTotalTimeInMainSession; // +0x3c
    unsigned int _exposeMinPosInMainSession; // +0x40
    unsigned int _canvasAdExpiredTimeSec; // +0x44
    unsigned int _resortNewDigestExposeCountInMainSession; // +0x48
    unsigned int _resortNewBoldDigestExposeCountInMainSession; // +0x4c
    unsigned int _recRecycleCardType; // +0x50
    unsigned int _recCardMediaType; // +0x54
    long long lastInsertedRowID; // +0x58
    unsigned long long _sequenceId; // +0x60
    long long _msgServerId; // +0x68
    NSString * _message; // +0x70
    NSString * _msgIdentify; // +0x78
    NSString * _userName; // +0x80
    NSString * _msgSource; // +0x88
    NSData * _byteBuffer; // +0x90
    NSString * _rankSessionId; // +0x98
    NSString * _recCardId; // +0xa0
    NSString * _canvasId; // +0xa8
    NSString * _resortNewDigestInfoJson; // +0xb0
    NSString * _resortNewDigestStrategyInfo; // +0xb8
    NSString * _recReason; // +0xc0
    NSString * _resortBuffer; // +0xc8
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)msgId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_msgId;
+ (const void *)sequenceId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_sequenceId;
+ (const void *)groupId;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_groupId;
+ (const void *)groupOrderId;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_groupOrderId;
+ (const void *)msgPredict;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_msgPredict;
+ (const void *)msgLocalId;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_msgLocalId;
+ (const void *)msgServerId;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_msgServerId;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)message;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_message;
+ (const void *)status;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_status;
+ (const void *)type;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_type;
+ (const void *)msgClusterType;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_msgClusterType;
+ (const void *)msgIdentify;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_msgIdentify;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_userName;
+ (const void *)msgSource;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_msgSource;
+ (const void *)isExpan;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (id)swift_isExpan;
+ (const void *)isStarContact;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (id)swift_isStarContact;
+ (const void *)isBrowsed;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (id)swift_isBrowsed;
+ (const void *)byteBuffer;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (id)swift_byteBuffer;
+ (const void *)bizMsgType;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (id)swift_bizMsgType;
+ (const void *)bExposedInMainSession;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (id)swift_bExposedInMainSession;
+ (const void *)rankSessionId;
+ (const void *)__wcdb_synthesize_21:(void *)arg1;
+ (id)swift_rankSessionId;
+ (const void *)hasResorted;
+ (const void *)__wcdb_synthesize_22:(void *)arg1;
+ (id)swift_hasResorted;
+ (const void *)exposeCountInMainSession;
+ (const void *)__wcdb_synthesize_23:(void *)arg1;
+ (id)swift_exposeCountInMainSession;
+ (const void *)exposeTotalTimeInMainSession;
+ (const void *)__wcdb_synthesize_24:(void *)arg1;
+ (id)swift_exposeTotalTimeInMainSession;
+ (const void *)exposeMinPosInMainSession;
+ (const void *)__wcdb_synthesize_25:(void *)arg1;
+ (id)swift_exposeMinPosInMainSession;
+ (const void *)recCardId;
+ (const void *)__wcdb_synthesize_26:(void *)arg1;
+ (id)swift_recCardId;
+ (const void *)canvasAdExpiredTimeSec;
+ (const void *)__wcdb_synthesize_27:(void *)arg1;
+ (id)swift_canvasAdExpiredTimeSec;
+ (const void *)canvasId;
+ (const void *)__wcdb_synthesize_28:(void *)arg1;
+ (id)swift_canvasId;
+ (const void *)isResortNewDigestBold;
+ (const void *)__wcdb_synthesize_29:(void *)arg1;
+ (id)swift_isResortNewDigestBold;
+ (const void *)resortNewDigestInfoJson;
+ (const void *)__wcdb_synthesize_30:(void *)arg1;
+ (id)swift_resortNewDigestInfoJson;
+ (const void *)resortNewDigestStrategyInfo;
+ (const void *)__wcdb_synthesize_31:(void *)arg1;
+ (id)swift_resortNewDigestStrategyInfo;
+ (const void *)resortNewDigestExposeCountInMainSession;
+ (const void *)__wcdb_synthesize_32:(void *)arg1;
+ (id)swift_resortNewDigestExposeCountInMainSession;
+ (const void *)resortNewBoldDigestExposeCountInMainSession;
+ (const void *)__wcdb_synthesize_33:(void *)arg1;
+ (id)swift_resortNewBoldDigestExposeCountInMainSession;
+ (const void *)isValidExpose;
+ (const void *)__wcdb_synthesize_34:(void *)arg1;
+ (id)swift_isValidExpose;
+ (const void *)recRecycleCardType;
+ (const void *)__wcdb_synthesize_35:(void *)arg1;
+ (id)swift_recRecycleCardType;
+ (const void *)recReason;
+ (const void *)__wcdb_synthesize_36:(void *)arg1;
+ (id)swift_recReason;
+ (const void *)recCardMediaType;
+ (const void *)__wcdb_synthesize_37:(void *)arg1;
+ (id)swift_recCardMediaType;
+ (const void *)resortBuffer;
+ (const void *)__wcdb_synthesize_38:(void *)arg1;
+ (id)swift_resortBuffer;
+ (void)__wcdb_column_constraint_39:(void *)arg1;
+ (void)__wcdb_index_40:(void *)arg1;
+ (void)__wcdb_index_41:(void *)arg1;
+ (void)__wcdb_index_42:(void *)arg1;
+ (void)__wcdb_index_43:(void *)arg1;
+ (void)__wcdb_index_44:(void *)arg1;
+ (void)__wcdb_index_45:(void *)arg1;
+ (void)__wcdb_index_46:(void *)arg1;
+ (void)__wcdb_index_47:(void *)arg1;
+ (void)__wcdb_index_48:(void *)arg1;
+ (void)__wcdb_index_49:(void *)arg1;
+ (void)__wcdb_index_50:(void *)arg1;
+ (void)__wcdb_index_51:(void *)arg1;
+ (void)__wcdb_index_52:(void *)arg1;
+ (void)__wcdb_index_53:(void *)arg1;
+ (void)__wcdb_index_54:(void *)arg1;
+ (void)__wcdb_index_55:(void *)arg1;
+ (void)__wcdb_index_56:(void *)arg1;
+ (void)__wcdb_index_57:(void *)arg1;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)arg1;
- (long long)lastInsertedRowID;
- (void)setLastInsertedRowID:(long long)arg1;
- (unsigned int)msgId;
- (void)setMsgId:(unsigned int)arg1;
- (unsigned long long)sequenceId;
- (void)setSequenceId:(unsigned long long)arg1;
- (unsigned int)groupId;
- (void)setGroupId:(unsigned int)arg1;
- (unsigned int)groupOrderId;
- (void)setGroupOrderId:(unsigned int)arg1;
- (unsigned int)msgPredict;
- (void)setMsgPredict:(unsigned int)arg1;
- (unsigned int)msgLocalId;
- (void)setMsgLocalId:(unsigned int)arg1;
- (long long)msgServerId;
- (void)setMsgServerId:(long long)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (id)message;
- (void)setMessage:(id)arg1;
- (unsigned int)status;
- (void)setStatus:(unsigned int)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (unsigned int)msgClusterType;
- (void)setMsgClusterType:(unsigned int)arg1;
- (id)msgIdentify;
- (void)setMsgIdentify:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)msgSource;
- (void)setMsgSource:(id)arg1;
- (BOOL)isExpan;
- (void)setIsExpan:(BOOL)arg1;
- (BOOL)isStarContact;
- (void)setIsStarContact:(BOOL)arg1;
- (BOOL)isBrowsed;
- (void)setIsBrowsed:(BOOL)arg1;
- (id)byteBuffer;
- (void)setByteBuffer:(id)arg1;
- (unsigned int)bizMsgType;
- (void)setBizMsgType:(unsigned int)arg1;
- (BOOL)bExposedInMainSession;
- (void)setBExposedInMainSession:(BOOL)arg1;
- (id)rankSessionId;
- (void)setRankSessionId:(id)arg1;
- (BOOL)hasResorted;
- (void)setHasResorted:(BOOL)arg1;
- (unsigned int)exposeCountInMainSession;
- (void)setExposeCountInMainSession:(unsigned int)arg1;
- (unsigned int)exposeTotalTimeInMainSession;
- (void)setExposeTotalTimeInMainSession:(unsigned int)arg1;
- (unsigned int)exposeMinPosInMainSession;
- (void)setExposeMinPosInMainSession:(unsigned int)arg1;
- (id)recCardId;
- (void)setRecCardId:(id)arg1;
- (unsigned int)canvasAdExpiredTimeSec;
- (void)setCanvasAdExpiredTimeSec:(unsigned int)arg1;
- (id)canvasId;
- (void)setCanvasId:(id)arg1;
- (BOOL)isResortNewDigestBold;
- (void)setIsResortNewDigestBold:(BOOL)arg1;
- (id)resortNewDigestInfoJson;
- (void)setResortNewDigestInfoJson:(id)arg1;
- (id)resortNewDigestStrategyInfo;
- (void)setResortNewDigestStrategyInfo:(id)arg1;
- (unsigned int)resortNewDigestExposeCountInMainSession;
- (void)setResortNewDigestExposeCountInMainSession:(unsigned int)arg1;
- (unsigned int)resortNewBoldDigestExposeCountInMainSession;
- (void)setResortNewBoldDigestExposeCountInMainSession:(unsigned int)arg1;
- (BOOL)isValidExpose;
- (void)setIsValidExpose:(BOOL)arg1;
- (unsigned int)recRecycleCardType;
- (void)setRecRecycleCardType:(unsigned int)arg1;
- (id)recReason;
- (void)setRecReason:(id)arg1;
- (unsigned int)recCardMediaType;
- (void)setRecCardMediaType:(unsigned int)arg1;
- (id)resortBuffer;
- (void)setResortBuffer:(id)arg1;
- (void).cxx_destruct;
@end

