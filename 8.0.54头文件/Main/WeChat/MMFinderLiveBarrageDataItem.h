@interface MMFinderLiveBarrageDataItem : NSObject
{
    unsigned int _type; // +0x8
    unsigned int _createTime; // +0xc
    unsigned int _deleteFlag; // +0x10
    unsigned long long _barrageId; // +0x18
    NSString * _username; // +0x20
    NSString * _nickname; // +0x28
    NSString * _msg; // +0x30
    unsigned long long _relationType; // +0x38
}
+ (id)createBarrageDataItemFromComment:(id)arg1;
+ (BOOL)isCommentValid:(id)arg1;
- (BOOL)isFromStranger;
- (id)uniqueId;
- (id)uniqueLogId;
- (unsigned long long)barrageId;
- (void)setBarrageId:(unsigned long long)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)msg;
- (void)setMsg:(id)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (unsigned long long)relationType;
- (void)setRelationType:(unsigned long long)arg1;
- (unsigned int)deleteFlag;
- (void)setDeleteFlag:(unsigned int)arg1;
- (void).cxx_destruct;
@end

