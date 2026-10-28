@interface ForwardMessageSession : NSObject
{
    int _createType; // +0x8
    int _closeType; // +0xc
    NSString * _sessionID; // +0x10
    unsigned long long _createTime; // +0x18
    unsigned long long _forwardType; // +0x20
    unsigned long long _forwardScene; // +0x28
}
- (id)init;
- (unsigned long long)existTime;
- (id)sessionID;
- (unsigned long long)createTime;
- (unsigned long long)forwardType;
- (void)setForwardType:(unsigned long long)arg1;
- (unsigned long long)forwardScene;
- (void)setForwardScene:(unsigned long long)arg1;
- (int)createType;
- (void)setCreateType:(int)arg1;
- (int)closeType;
- (void)setCloseType:(int)arg1;
- (void).cxx_destruct;
@end
