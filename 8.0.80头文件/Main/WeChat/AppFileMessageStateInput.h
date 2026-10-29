@interface AppFileMessageStateInput : NSObject
{
    BOOL _isFail; // +0x8
    BOOL _isPaused; // +0x9
    BOOL _isInProcess; // +0xa
    BOOL _isFileExist; // +0xb
    BOOL _isFileExpired; // +0xc
    BOOL _enableStatusUI; // +0xd
    BOOL _isSendingMsg; // +0xe
    NSString * _fileExt; // +0x10
    unsigned long long _transferType; // +0x18
}
- (id)fileExt;
- (void)setFileExt:(id)arg1;
- (unsigned long long)transferType;
- (void)setTransferType:(unsigned long long)arg1;
- (BOOL)isFail;
- (void)setIsFail:(BOOL)arg1;
- (BOOL)isPaused;
- (void)setIsPaused:(BOOL)arg1;
- (BOOL)isInProcess;
- (void)setIsInProcess:(BOOL)arg1;
- (BOOL)isFileExist;
- (void)setIsFileExist:(BOOL)arg1;
- (BOOL)isFileExpired;
- (void)setIsFileExpired:(BOOL)arg1;
- (BOOL)enableStatusUI;
- (void)setEnableStatusUI:(BOOL)arg1;
- (BOOL)isSendingMsg;
- (void)setIsSendingMsg:(BOOL)arg1;
- (void).cxx_destruct;
@end
