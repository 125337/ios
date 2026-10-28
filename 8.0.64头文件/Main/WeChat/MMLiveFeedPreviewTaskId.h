@interface MMLiveFeedPreviewTaskId : NSObject <NSCopying, MMLiveUniqueTaskId>
{
    NSString * _taskKey; // +0x8
    unsigned long long _liveId; // +0x10
    unsigned long long _objectID; // +0x18
    NSString * _anchorNickName; // +0x20
    NSString * _uniqueId; // +0x28
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)taskKey;
- (id)createTaskKey;
- (id)uniqueId;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValid;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (unsigned long long)objectID;
- (void)setObjectID:(unsigned long long)arg1;
- (id)anchorNickName;
- (void)setAnchorNickName:(id)arg1;
- (void)setUniqueId:(id)arg1;
- (void).cxx_destruct;
@end
