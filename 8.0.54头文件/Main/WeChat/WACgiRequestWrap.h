@interface WACgiRequestWrap : NSObject
{
    unsigned int _eventId; // +0x8
    WACgiRequest * _request; // +0x10
    id /* block */ _completion; // +0x18
    long long _startTimeStamp; // +0x20
}
+ (id)requestWrapWithEventId:(unsigned int)arg1 request:(id)arg2 completion:(id /* block */)arg3;
- (unsigned int)eventId;
- (void)setEventId:(unsigned int)arg1;
- (id)request;
- (void)setRequest:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (long long)startTimeStamp;
- (void)setStartTimeStamp:(long long)arg1;
- (void).cxx_destruct;
@end

