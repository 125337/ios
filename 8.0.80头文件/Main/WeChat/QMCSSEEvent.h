@interface QMCSSEEvent : NSObject
{
    NSString * _identifier; // +0x8
    NSString * _event; // +0x10
    NSString * _data; // +0x18
    double _retryMilliseconds; // +0x20
}
- (id)initWithIdentifier:(id)arg1 event:(id)arg2 data:(id)arg3 retryMilliseconds:(double)arg4;
- (id)identifier;
- (id)event;
- (id)data;
- (double)retryMilliseconds;
- (void).cxx_destruct;
@end
