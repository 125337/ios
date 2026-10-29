@interface WCFinderOplogModUserInfoCGIHandler : NSObject
{
    Class _respoClass; // +0x8
    id /* block */ _callback; // +0x10
}
+ (id)handlerWithRespClass:(Class)arg1 handler:(id /* block */)arg2;
- (Class)respoClass;
- (void)setRespoClass:(Class)arg1;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
