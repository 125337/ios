@interface JSC2AutoreleaseCallbackObject : NSObject
{
    void * * _callback; // +0x8
}
+ (id)valueWithCallback:(void * *)arg1;
- (void)dealloc;
- (void * *)callback;
- (void)setCallback:(void * *)arg1;
@end
