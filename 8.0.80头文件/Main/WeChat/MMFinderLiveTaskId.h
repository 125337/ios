@interface MMFinderLiveTaskId : MMLiveTaskId
{
    NSString * _taskKey; // +0x8
    BOOL _isEnableComment; // +0x10
    NSString * _finderUserName; // +0x18
    unsigned long long _lastTaskKeyLiveId; // +0x20
    NSString * _uniqueId; // +0x28
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)taskKey;
- (id)createTaskKey;
- (id)businessTaskKey;
- (BOOL)isValid;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isBusinessEqual:(id)arg1;
- (id)finderUserName;
- (void)setFinderUserName:(id)arg1;
- (BOOL)isEnableComment;
- (void)setIsEnableComment:(BOOL)arg1;
- (unsigned long long)lastTaskKeyLiveId;
- (void)setLastTaskKeyLiveId:(unsigned long long)arg1;
- (id)uniqueId;
- (void)setUniqueId:(id)arg1;
- (void).cxx_destruct;
@end
