@interface WCFinderLocationManagerComplectionModel : NSObject
{
    BOOL _requiredMapLocation; // +0x8
    id /* block */ _complectionBlock; // +0x10
    id /* block */ _failureBlock; // +0x18
}
- (BOOL)requiredMapLocation;
- (void)setRequiredMapLocation:(BOOL)arg1;
- (id /* block */)complectionBlock;
- (void)setComplectionBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
