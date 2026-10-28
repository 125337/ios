@interface TSKReportManager : NSObject
{
    id <TSKReportReceiving> _receiver; // +0x8
}
+ (id)sharedInstance;
- (void)setReportReceiver:(id)arg1;
- (void)reportEvent:(id)arg1 andParams:(id)arg2;
- (id)receiver;
- (void)setReceiver:(id)arg1;
- (void).cxx_destruct;
@end
