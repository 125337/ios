@interface ObjectWrapper : NSObject
{
    id m_target; // +0x8
}
- (id)initWithTarget:(id)arg1;
- (id)returnNil;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void).cxx_destruct;
@end
