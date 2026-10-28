@interface QBASIInputStream : NSObject <NSStreamDelegate>
{
    NSInputStream * stream; // +0x8
    id <NSStreamDelegate> delegate; // +0x10
    void * * copiedCallback; // +0x18
    struct copiedContext; // +0x20
    unsigned long long requestedEvents; // +0x48
    QBASIHTTPRequest * request; // +0x50
}
+ (void)initialize;
+ (id)inputStreamWithFileAtPath:(id)arg1 request:(id)arg2;
+ (id)inputStreamWithData:(id)arg1 request:(id)arg2;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
- (id)initWithInputStream:(id)arg1;
- (void)dealloc;
- (void)open;
- (void)close;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (unsigned long long)streamStatus;
- (id)streamError;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (BOOL)getBuffer:(char * *)arg1 length:(unsigned long long *)arg2;
- (BOOL)hasBytesAvailable;
- (void)scheduleInCFRunLoop:(__CFRunLoop *)arg1 forMode:(__CFString *)arg2;
- (BOOL)setCFClientFlags:(unsigned long long)arg1 callback:(void * *)arg2 context:(struct *)arg3;
- (void)unscheduleFromCFRunLoop:(__CFRunLoop *)arg1 forMode:(__CFString *)arg2;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)request;
- (void)setRequest:(id)arg1;
@end
