@interface WCFinderVideoProducerBaseOperation : NSObject <NSCopying>
{
    double _initTime; // +0x8
    double _terminateTime; // +0x10
    double _startTime; // +0x18
    double _stopTime; // +0x20
}
- (id)copyWithZone:(_NSZone *)arg1;
- (void)onOperationInit;
- (void)onOperationTerminate;
- (void)operationDidStart;
- (void)operationDidStop;
- (double)initTime;
- (void)setInitTime:(double)arg1;
- (double)terminateTime;
- (void)setTerminateTime:(double)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (double)stopTime;
- (void)setStopTime:(double)arg1;
@end
