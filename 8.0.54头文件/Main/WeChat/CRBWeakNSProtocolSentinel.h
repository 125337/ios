@interface CRBWeakNSProtocolSentinel : NSObject
{
    RefPtr<fml::WeakContainer> _container; // +0x8
}
+ (RefPtr<fml::WeakContainer>)containerForObject:(id)arg1 threadChecker:(DebugThreadChecker)arg2;
- (id)initWithContainer:(RefPtr<fml::WeakContainer>)arg1;
- (void)dealloc;
- (RefPtr<fml::WeakContainer>)container;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

