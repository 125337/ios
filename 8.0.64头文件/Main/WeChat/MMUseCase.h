@interface MMUseCase : NSObject
{
    Handle<std::shared_ptr<kinda::UseCase>> _cppRefHandle; // +0x8
}
- (id)initWithCpp:(const void *)arg1;
- (void)notify:(id)arg1;
- (void)preStepDidDestory;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
