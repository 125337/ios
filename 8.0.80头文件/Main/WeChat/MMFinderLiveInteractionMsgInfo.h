@interface MMFinderLiveInteractionMsgInfo : NSObject
{
    unsigned long long _type; // +0x8
    NSString * _nickName; // +0x10
    NSString * _content; // +0x18
    NSString * _toUserNickName; // +0x20
}
+ (id)createLiveInteractionMsgInfo:(unsigned long long)arg1 content:(id)arg2 liveContact:(id)arg3 toUserContact:(id)arg4;
- (id)description;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (id)toUserNickName;
- (void)setToUserNickName:(id)arg1;
- (void).cxx_destruct;
@end
