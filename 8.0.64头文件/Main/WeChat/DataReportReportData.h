@interface DataReportReportData : NSObject
{
    NSString * m_eventId; // +0x8
    NSMutableDictionary * m_params; // +0x10
}
- (id)init;
- (id)getEventId;
- (void)setEventId:(id)arg1;
- (id)getParams;
- (void)setParams:(id)arg1;
- (void)putParam:(id)arg1 withValue:(id)arg2;
- (void)putParams:(id)arg1;
- (id)toString;
- (void).cxx_destruct;
@end
