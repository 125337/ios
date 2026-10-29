@interface _TtC9WeAppCore20WAReportSiderbarItem : WAReportBaseItem
{
     action; // +0x8
    void * actionNote; // +0x10
    long long actionScene; // +0x20
    unsigned long long actionTime; // +0x28
    void * extraData; // +0x30
}
- (id)actionNote;
- (void)setActionNote:(id)arg1;
- (long long)actionScene;
- (void)setActionScene:(long long)arg1;
- (unsigned long long)actionTime;
- (void)setActionTime:(unsigned long long)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (int)reportID;
- (id)reportString;
- (id)init;
- (void).cxx_destruct;
@end
