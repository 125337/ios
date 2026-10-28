@interface MMFinderLiveInteractionMsgInfo : NSObject
{
    int _showArea; // +0x8
    unsigned long long _type; // +0x10
    NSString * _nickName; // +0x18
    NSString * _content; // +0x20
}
+ (id)createLiveInteractionMsgInfo:(unsigned long long)arg1 content:(id)arg2 liveContact:(id)arg3 showArea:(unsigned int)arg4;
- (id)description;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (int)showArea;
- (void)setShowArea:(int)arg1;
- (void).cxx_destruct;
@end
