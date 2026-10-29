@interface SolitaireFormatInputEnterReport : SolitaireReport
{
    unsigned long long _operateType; // +0x30
    unsigned long long _exitType; // +0x38
    unsigned long long _enterScene; // +0x40
}
- (void)report;
- (unsigned long long)operateType;
- (void)setOperateType:(unsigned long long)arg1;
- (unsigned long long)exitType;
- (void)setExitType:(unsigned long long)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
@end

