@interface ReportVoiceResultMgr : MMObject <PBMessageObserverDelegate>
{
    long long _scene; // +0x8
}
- (void)dealloc;
- (void)ReportResult:(id)arg1 AndResult:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (long long)scene;
- (void)setScene:(long long)arg1;
@end

