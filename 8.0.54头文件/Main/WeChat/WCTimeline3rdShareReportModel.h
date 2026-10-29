@interface WCTimeline3rdShareReportModel : NSObject
{
    WCTimeline3rdShareBaseReporter * _reporter; // +0x8
    NSMutableDictionary * _supportClass; // +0x10
}
+ (id)sharedInstance;
+ (void)bindDataItemIfSupport:(id)arg1;
+ (void)updateOutcome:(unsigned int)arg1 serverItem:(id)arg2 localItem:(id)arg3;
- (void)registerClasses;
- (Class)classForAppID:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)supportClass;
- (void)setSupportClass:(id)arg1;
- (void).cxx_destruct;
@end

