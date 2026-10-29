@interface DBXiaoweiTask : NSObject <WCTTableCoding>
{
    BOOL _isDeleted; // +0x8
    unsigned int _targetType; // +0xc
    unsigned int _taskType; // +0x10
    unsigned int _timedMsgTriggerTime; // +0x14
    unsigned int _createTime; // +0x18
    unsigned int _eventTime; // +0x1c
    NSString * _taskId; // +0x20
    NSString * _userName; // +0x28
    NSString * _title; // +0x30
    NSString * _deeplink; // +0x38
    unsigned long long _sortIndex; // +0x40
    NSData * _autoReplyTimeRangeData; // +0x48
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)taskId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_taskId;
+ (const void *)targetType;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_targetType;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_userName;
+ (const void *)title;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_title;
+ (const void *)taskType;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_taskType;
+ (const void *)isDeleted;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_isDeleted;
+ (const void *)deeplink;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_deeplink;
+ (const void *)sortIndex;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_sortIndex;
+ (const void *)timedMsgTriggerTime;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_timedMsgTriggerTime;
+ (const void *)autoReplyTimeRangeData;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_autoReplyTimeRangeData;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)eventTime;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_eventTime;
+ (void)__wcdb_column_constraint_12:(void *)arg1;
+ (void)__wcdb_column_constraint_13:(void *)arg1;
+ (void)__wcdb_index_14:(void *)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (unsigned int)targetType;
- (void)setTargetType:(unsigned int)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (unsigned int)taskType;
- (void)setTaskType:(unsigned int)arg1;
- (BOOL)isDeleted;
- (void)setIsDeleted:(BOOL)arg1;
- (id)deeplink;
- (void)setDeeplink:(id)arg1;
- (unsigned long long)sortIndex;
- (void)setSortIndex:(unsigned long long)arg1;
- (unsigned int)timedMsgTriggerTime;
- (void)setTimedMsgTriggerTime:(unsigned int)arg1;
- (id)autoReplyTimeRangeData;
- (void)setAutoReplyTimeRangeData:(id)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (unsigned int)eventTime;
- (void)setEventTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
