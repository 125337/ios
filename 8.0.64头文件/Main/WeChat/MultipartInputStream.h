@interface MultipartInputStream : NSInputStream <NSStreamDelegate>
{
    NSArray * _streams; // +0x8
    unsigned long long _currentStreamIndex; // +0x10
    unsigned long long _currentReadPosition; // +0x18
    unsigned long long _streamStatus; // +0x20
    id <NSStreamDelegate> _delegate; // +0x28
    id /* block */ _progressHandler; // +0x30
}
+ (id)inputStreamWithStreams:(id)arg1;
+ (id)inputStreamWithStreams:(id)arg1 readProgressHandler:(id /* block */)arg2;
- (id)initWithStreams:(id)arg1;
- (id)initWithStreams:(id)arg1 readProgressHandler:(id /* block */)arg2;
- (void)initInternal:(id)arg1 readProgressHandler:(id /* block */)arg2;
- (void)open;
- (void)close;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (BOOL)hasBytesAvailable;
- (unsigned long long)streamStatus;
- (id)streamError;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)notifyDelegateOfEvent:(unsigned long long)arg1;
- (void)notifyReadProgress;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void).cxx_destruct;
@end
