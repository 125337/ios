@interface MBRuntimeOCWrapperDefaultImpl : NSObject <MBRuntimeOCWrapper>
{
    weak_ptr<magicbrush::MBRuntimeiOSCpp> _runtime; // +0x8
}
- (void)run;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (weak_ptr<magicbrush::MBRuntimeiOSCpp>)runtime;
- (void)setRuntime:(weak_ptr<magicbrush::MBRuntimeiOSCpp>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
