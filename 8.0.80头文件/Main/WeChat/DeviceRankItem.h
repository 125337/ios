@interface DeviceRankItem : MMObject
{
    unsigned int _uiRankNum; // +0x8
    NSString * _nsRankId; // +0x10
    NSString * _nsRankTitle; // +0x18
}
- (id)nsRankId;
- (void)setNsRankId:(id)arg1;
- (id)nsRankTitle;
- (void)setNsRankTitle:(id)arg1;
- (unsigned int)uiRankNum;
- (void)setUiRankNum:(unsigned int)arg1;
- (void).cxx_destruct;
@end
