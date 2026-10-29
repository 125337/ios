@interface SeiParams : NSObject
{
    int _repeat_times; // +0x8
    CopyOnWriteBuffer _payload; // +0x10
}
- (id)initWithPayload:(const void *)arg1 repeat_times:(int)arg2;
- (CopyOnWriteBuffer)payload;
- (void)setPayload:(CopyOnWriteBuffer)arg1;
- (int)repeat_times;
- (void)setRepeat_times:(int)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
