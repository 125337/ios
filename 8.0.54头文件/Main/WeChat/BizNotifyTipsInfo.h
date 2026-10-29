@interface BizNotifyTipsInfo : NSObject
{
    NSNumber * _msgCount; // +0x8
    NSNumber * _msgId; // +0x10
    NSString * _userName; // +0x18
    NSString * _content; // +0x20
    NSNumber * _isBizContact; // +0x28
    NSString * _coverUrl; // +0x30
    NSNumber * _forceRoundHeader; // +0x38
}
+ (id)makeWithMsgCount:(id)arg1 msgId:(id)arg2 userName:(id)arg3 content:(id)arg4 isBizContact:(id)arg5 coverUrl:(id)arg6 forceRoundHeader:(id)arg7;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)msgCount;
- (void)setMsgCount:(id)arg1;
- (id)msgId;
- (void)setMsgId:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (id)isBizContact;
- (void)setIsBizContact:(id)arg1;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (id)forceRoundHeader;
- (void)setForceRoundHeader:(id)arg1;
- (void).cxx_destruct;
@end

