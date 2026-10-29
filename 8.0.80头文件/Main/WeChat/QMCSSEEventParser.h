@interface QMCSSEEventParser : NSObject
{
    NSMutableData * _buffer; // +0x8
    NSString * _currentEventID; // +0x10
    NSString * _currentEventName; // +0x18
    double _currentRetryMilliseconds; // +0x20
    NSMutableArray * _currentDataLines; // +0x28
}
- (id)init;
- (id)appendData:(id)arg1;
- (id)finish;
- (id)_consumeLine:(id)arg1;
- (id)_emitEventIfNeeded;
- (id)buffer;
- (void)setBuffer:(id)arg1;
- (id)currentEventID;
- (void)setCurrentEventID:(id)arg1;
- (id)currentEventName;
- (void)setCurrentEventName:(id)arg1;
- (double)currentRetryMilliseconds;
- (void)setCurrentRetryMilliseconds:(double)arg1;
- (id)currentDataLines;
- (void)setCurrentDataLines:(id)arg1;
- (void).cxx_destruct;
@end
