@interface WCPayGPSolitaireItem : NSObject
{
    BOOL _bIsContentCut; // +0x8
    unsigned int _contentCreateTime; // +0xc
    NSString * _username; // +0x10
    NSString * _content; // +0x18
    long long _newLineCount; // +0x20
}
- (id)username;
- (void)setUsername:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (unsigned int)contentCreateTime;
- (void)setContentCreateTime:(unsigned int)arg1;
- (BOOL)bIsContentCut;
- (void)setBIsContentCut:(BOOL)arg1;
- (long long)newLineCount;
- (void)setNewLineCount:(long long)arg1;
- (void).cxx_destruct;
@end

