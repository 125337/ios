@interface BrandNotificationDBMsg : NSObject <WCTTableCoding>
{
    BOOL isAutoIncrement; // +0x8
    BOOL _bExposedInMainSession; // +0x9
    BOOL _shouldShowPriorityNotification; // +0xa
    BOOL _isClickPriorityNotificationInTL; // +0xb
    unsigned int _version; // +0xc
    unsigned int _msgId; // +0x10
    unsigned int _msgLocalId; // +0x14
    unsigned int _createTime; // +0x18
    unsigned int _status; // +0x1c
    unsigned int _type; // +0x20
    unsigned int _msgClusterType; // +0x24
    unsigned int _msgBizType; // +0x28
    unsigned int _exposeCountInMainSession; // +0x2c
    unsigned int _exposeTotalTimeInMainSession; // +0x30
    unsigned int _mergeShowTime; // +0x34
    long long lastInsertedRowID; // +0x38
    long long _msgServerId; // +0x40
    NSString * _message; // +0x48
    NSString * _msgIdentify; // +0x50
    NSString * _userName; // +0x58
    NSString * _msgSource; // +0x60
    NSString * _notifyMsgId; // +0x68
    long long _mergeCount; // +0x70
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)version;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_version;
+ (const void *)msgId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_msgId;
+ (const void *)msgLocalId;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_msgLocalId;
+ (const void *)msgServerId;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_msgServerId;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)message;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_message;
+ (const void *)status;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_status;
+ (const void *)type;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_type;
+ (const void *)msgClusterType;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_msgClusterType;
+ (const void *)msgIdentify;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_msgIdentify;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_userName;
+ (const void *)msgSource;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_msgSource;
+ (const void *)msgBizType;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_msgBizType;
+ (const void *)bExposedInMainSession;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_bExposedInMainSession;
+ (const void *)exposeCountInMainSession;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_exposeCountInMainSession;
+ (const void *)exposeTotalTimeInMainSession;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (id)swift_exposeTotalTimeInMainSession;
+ (const void *)shouldShowPriorityNotification;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (id)swift_shouldShowPriorityNotification;
+ (const void *)isClickPriorityNotificationInTL;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (id)swift_isClickPriorityNotificationInTL;
+ (const void *)notifyMsgId;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (id)swift_notifyMsgId;
+ (const void *)mergeCount;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (id)swift_mergeCount;
+ (const void *)mergeShowTime;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (id)swift_mergeShowTime;
+ (void)__wcdb_column_constraint_21:(void *)arg1;
+ (void)__wcdb_index_22:(void *)arg1;
+ (void)__wcdb_index_23:(void *)arg1;
+ (void)__wcdb_index_24:(void *)arg1;
+ (void)__wcdb_index_25:(void *)arg1;
+ (void)__wcdb_index_26:(void *)arg1;
+ (void)__wcdb_index_27:(void *)arg1;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)arg1;
- (long long)lastInsertedRowID;
- (void)setLastInsertedRowID:(long long)arg1;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)msgId;
- (void)setMsgId:(unsigned int)arg1;
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
- (unsigned int)msgBizType;
- (void)setMsgBizType:(unsigned int)arg1;
- (BOOL)bExposedInMainSession;
- (void)setBExposedInMainSession:(BOOL)arg1;
- (unsigned int)exposeCountInMainSession;
- (void)setExposeCountInMainSession:(unsigned int)arg1;
- (unsigned int)exposeTotalTimeInMainSession;
- (void)setExposeTotalTimeInMainSession:(unsigned int)arg1;
- (BOOL)shouldShowPriorityNotification;
- (void)setShouldShowPriorityNotification:(BOOL)arg1;
- (BOOL)isClickPriorityNotificationInTL;
- (void)setIsClickPriorityNotificationInTL:(BOOL)arg1;
- (id)notifyMsgId;
- (void)setNotifyMsgId:(id)arg1;
- (long long)mergeCount;
- (void)setMergeCount:(long long)arg1;
- (unsigned int)mergeShowTime;
- (void)setMergeShowTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
