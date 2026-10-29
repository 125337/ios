@interface WAAuthCardFacePendingAction : NSObject
{
    WAAuthCardOnceResult * _result; // +0x8
    id /* block */ _timeoutBlock; // +0x10
}
- (id)result;
- (void)setResult:(id)arg1;
- (id /* block */)timeoutBlock;
- (void)setTimeoutBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
