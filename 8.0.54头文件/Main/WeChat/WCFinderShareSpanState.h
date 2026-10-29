@interface WCFinderShareSpanState : NSObject
{
    WCFinderGeneralJumpErrMsgModel * _spanModel; // +0x8
    NSString * _notFoundState; // +0x10
    NSString * _spanModelStr; // +0x18
}
- (BOOL)valid;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualTo:(id)arg1;
- (id)spanModel;
- (void)setSpanModel:(id)arg1;
- (id)notFoundState;
- (void)setNotFoundState:(id)arg1;
- (id)spanModelStr;
- (void)setSpanModelStr:(id)arg1;
- (void).cxx_destruct;
@end

