@interface SimplifyTextLogic : NSObject
{
    BOOL _isWorking; // +0x8
    NSString * _originText; // +0x10
    NSString * _simplifingText; // +0x18
    NSString * _simplifiedText; // +0x20
    NSData * _sessionId; // +0x28
    NSData * _buffer; // +0x30
    id /* block */ _completeBlock; // +0x38
}
+ (BOOL)isSimplifyTextEnable;
- (void)simplifyText:(id)arg1 complete:(id /* block */)arg2;
- (void)startSimplifyText;
- (void)startGetSimplifyRes;
- (id)originText;
- (void)setOriginText:(id)arg1;
- (id)simplifingText;
- (void)setSimplifingText:(id)arg1;
- (id)simplifiedText;
- (void)setSimplifiedText:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (BOOL)isWorking;
- (void)setIsWorking:(BOOL)arg1;
- (id)buffer;
- (void)setBuffer:(id)arg1;
- (id /* block */)completeBlock;
- (void)setCompleteBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
