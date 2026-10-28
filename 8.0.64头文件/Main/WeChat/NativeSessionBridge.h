@interface NativeSessionBridge : NSObject <ARSessionDelegate>
{
    void * _magic_ar_session; // +0x8
}
- (id)initWithSession:(void *)arg1;
- (void)session:(id)arg1 didAddAnchors:(id)arg2;
- (void)session:(id)arg1 didUpdateAnchors:(id)arg2;
- (void)session:(id)arg1 didRemoveAnchors:(id)arg2;
- (void)session:(id)arg1 didUpdateFrame:(id)arg2;
- (void *)magic_ar_session;
- (void)setMagic_ar_session:(void *)arg1;
@end
