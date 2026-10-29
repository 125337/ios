@interface UploadStateStage : NSObject
{
    NSString * _identifier; // +0x8
    RecordUploadOrchestrator * _context; // +0x10
}
- (id)initWithContext:(id)arg1;
- (void)start;
- (void)stop;
- (id)getStateName;
- (void)onProcessEndWithFailType:(int)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (void).cxx_destruct;
@end
