@interface QBaseReportEvent : NSObject
{
    NSString * _eventCode; // +0x8
    NSDictionary * _params; // +0x10
}
- (id)eventCode;
- (void)setEventCode:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end

