@interface OMJMovieComposingSession : NSObject
{
    SharedPtr<XMJMovieComposingSessionDelegate> _backingSession; // +0x8
}
- (id)initWithBackingSession:(const void *)arg1;
- (void)startupWithcompletionHandler:(id /* block */)arg1;
- (void)teardownWithCompletionHandler:(id /* block */)arg1;
- (SharedPtr<XMJMovieComposingSessionDelegate>)backingSession;
- (void)setBackingSession:(SharedPtr<XMJMovieComposingSessionDelegate>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

