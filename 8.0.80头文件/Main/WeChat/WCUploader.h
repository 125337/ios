@interface WCUploader : MMObject <PBMessageObserverDelegate>
{
    long long eventID; // +0x8
    BOOL isCancelled; // +0x10
    BOOL isUploading; // +0x11
}
- (void)dealloc;
- (BOOL)startRequest;
- (void)run;
- (void)setFinished;
- (BOOL)canInterrupt;
- (void)cancelWithBlock:(id /* block */)arg1;
- (void)_callbackCancelBlockInterrupted:(id /* block */)arg1;
- (BOOL)onSetRequest:(id)arg1;
- (void)onRequest:(id)arg1 Event:(unsigned int)arg2;
- (void)onResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
@end
