@interface CRBWeakNSProtocolSentinel : NSObject
{
    scoped_refptr<base::WeakContainer> container_; // +0x8
}
+ (scoped_refptr<base::WeakContainer>)containerForObject:(id)arg1;
- (id)initWithContainer:(scoped_refptr<base::WeakContainer>)arg1;
- (void)dealloc;
- (scoped_refptr<base::WeakContainer>)container;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

