@interface VoIPStartContext : NSObject
{
    BOOL _isCaller; // +0x8
    BOOL _startInApp; // +0x9
    BOOL _isEarMode; // +0xa
    BOOL _isAudioMode; // +0xb
    CContact * _contact; // +0x10
    CMessageWrap * _msgWrap; // +0x18
    VoipMonoMsg * _monoMsg; // +0x20
    unsigned long long _from; // +0x28
    id /* block */ _completion; // +0x30
    NSDictionary * _chatRoomReportCtx; // +0x38
}
- (id)init;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (id)monoMsg;
- (void)setMonoMsg:(id)arg1;
- (BOOL)isCaller;
- (void)setIsCaller:(BOOL)arg1;
- (unsigned long long)from;
- (void)setFrom:(unsigned long long)arg1;
- (BOOL)startInApp;
- (void)setStartInApp:(BOOL)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id)chatRoomReportCtx;
- (void)setChatRoomReportCtx:(id)arg1;
- (BOOL)isEarMode;
- (void)setIsEarMode:(BOOL)arg1;
- (BOOL)isAudioMode;
- (void)setIsAudioMode:(BOOL)arg1;
- (void).cxx_destruct;
@end
