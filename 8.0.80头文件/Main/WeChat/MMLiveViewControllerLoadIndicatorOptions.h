@interface MMLiveViewControllerLoadIndicatorOptions : NSObject
{
    BOOL _blocking; // +0x8
    BOOL _showResultOnSuccess; // +0x9
    BOOL _showResultOnFault; // +0xa
    NSString * _message; // +0x10
    double _delay; // +0x18
}
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)message;
- (void)setMessage:(id)arg1;
- (double)delay;
- (void)setDelay:(double)arg1;
- (BOOL)blocking;
- (void)setBlocking:(BOOL)arg1;
- (BOOL)showResultOnSuccess;
- (void)setShowResultOnSuccess:(BOOL)arg1;
- (BOOL)showResultOnFault;
- (void)setShowResultOnFault:(BOOL)arg1;
- (void).cxx_destruct;
@end
