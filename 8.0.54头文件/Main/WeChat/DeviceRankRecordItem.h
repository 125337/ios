@interface DeviceRankRecordItem : MMObject
{
    unsigned int _uiRankScore; // +0x8
    NSString * _nsTitle; // +0x10
}
- (id)nsTitle;
- (void)setNsTitle:(id)arg1;
- (unsigned int)uiRankScore;
- (void)setUiRankScore:(unsigned int)arg1;
- (void).cxx_destruct;
@end

