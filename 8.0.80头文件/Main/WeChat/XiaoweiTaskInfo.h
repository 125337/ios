@interface XiaoweiTaskInfo : MMObject <NSCopying, WCCapsuleBarItem>
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
    NSArray * _autoReplyTimeRanges; // +0x48
    NSArray * _relatedTaskIds; // +0x50
}
+ (id)truncateTimedMsgContent:(id)arg1;
+ (id)formatTimedTaskTime:(unsigned int)arg1;
- (id)description;
- (id)eventID;
- (BOOL)canDisplay;
- (Class)capsuleCellClass;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)isAutoReplyInTimeRange;
- (id)titleWithFormattedTime;
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
- (id)autoReplyTimeRanges;
- (void)setAutoReplyTimeRanges:(id)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (unsigned int)eventTime;
- (void)setEventTime:(unsigned int)arg1;
- (id)relatedTaskIds;
- (void)setRelatedTaskIds:(id)arg1;
- (void).cxx_destruct;
@end
