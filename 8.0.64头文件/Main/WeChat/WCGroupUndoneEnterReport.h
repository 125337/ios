@interface WCGroupUndoneEnterReport : WCGroupUndoneBaseReport
{
    unsigned int _scene; // +0x30
    unsigned int _exitType; // +0x34
}
+ (void)DoGroupUndoneEnterReportWithItem:(id)arg1 scene:(unsigned int)arg2;
- (void)report;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (unsigned int)exitType;
- (void)setExitType:(unsigned int)arg1;
@end
