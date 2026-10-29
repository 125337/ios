@interface MMFinderLiveSongItem : NSObject <NSCopying>
{
    unsigned int _requestMemberCnt; // +0x8
    unsigned int _auditStatus; // +0xc
    NSString * _name; // +0x10
    unsigned long long _playState; // +0x18
    unsigned long long _heartValue; // +0x20
    NSArray * _requestMemberNames; // +0x28
    unsigned long long _originalOrder; // +0x30
    NSString * _localWarningTips; // +0x38
}
+ (id)songWithName:(id)arg1;
+ (id)songWithSongInfo:(id)arg1 singingSongName:(id)arg2;
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)copyValueFromSong:(id)arg1;
- (id)serverWarningTips;
- (BOOL)isAuditing;
- (BOOL)isAuditFail;
- (id)description;
- (id)name;
- (void)setName:(id)arg1;
- (unsigned long long)playState;
- (void)setPlayState:(unsigned long long)arg1;
- (unsigned long long)heartValue;
- (void)setHeartValue:(unsigned long long)arg1;
- (id)requestMemberNames;
- (void)setRequestMemberNames:(id)arg1;
- (unsigned int)requestMemberCnt;
- (void)setRequestMemberCnt:(unsigned int)arg1;
- (unsigned long long)originalOrder;
- (void)setOriginalOrder:(unsigned long long)arg1;
- (id)localWarningTips;
- (void)setLocalWarningTips:(id)arg1;
- (unsigned int)auditStatus;
- (void)setAuditStatus:(unsigned int)arg1;
- (void).cxx_destruct;
@end
