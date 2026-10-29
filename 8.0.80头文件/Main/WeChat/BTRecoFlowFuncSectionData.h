@interface BTRecoFlowFuncSectionData : BTRecoFlowSectionData
{
    unsigned long long _funcType; // +0x8
    NSString * _flowHeaderTitle; // +0x10
    NSString * _hintTitle; // +0x18
}
- (id)initWithFuncSectionType:(unsigned long long)arg1;
- (long long)numberOfRowsInSection;
- (double)heightForSectionFooter;
- (id)identifierWithRow:(unsigned long long)arg1;
- (unsigned long long)funcType;
- (void)setFuncType:(unsigned long long)arg1;
- (id)flowHeaderTitle;
- (void)setFlowHeaderTitle:(id)arg1;
- (id)hintTitle;
- (void)setHintTitle:(id)arg1;
- (void).cxx_destruct;
@end
