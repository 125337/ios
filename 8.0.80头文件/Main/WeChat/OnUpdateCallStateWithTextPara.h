@interface OnUpdateCallStateWithTextPara : NSObject
{
    BOOL _isAccepted; // +0x8
    BOOL _isEnd; // +0x9
    BOOL _isErr; // +0xa
    BOOL _isShowChargeAlert; // +0xb
    BOOL _isShowFreeActicityNotSupport; // +0xc
    BOOL _isMinmizeMode; // +0xd
    unsigned int _errorlevel; // +0x10
    NSString * _stateText; // +0x18
    NSString * _errTitle; // +0x20
}
- (id)stateText;
- (void)setStateText:(id)arg1;
- (BOOL)isAccepted;
- (void)setIsAccepted:(BOOL)arg1;
- (BOOL)isEnd;
- (void)setIsEnd:(BOOL)arg1;
- (BOOL)isErr;
- (void)setIsErr:(BOOL)arg1;
- (unsigned int)errorlevel;
- (void)setErrorlevel:(unsigned int)arg1;
- (id)errTitle;
- (void)setErrTitle:(id)arg1;
- (BOOL)isShowChargeAlert;
- (void)setIsShowChargeAlert:(BOOL)arg1;
- (BOOL)isShowFreeActicityNotSupport;
- (void)setIsShowFreeActicityNotSupport:(BOOL)arg1;
- (BOOL)isMinmizeMode;
- (void)setIsMinmizeMode:(BOOL)arg1;
- (void).cxx_destruct;
@end
