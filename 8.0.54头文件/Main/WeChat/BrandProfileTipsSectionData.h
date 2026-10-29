@interface BrandProfileTipsSectionData : BrandProfileBaseSectionData
{
    BOOL _isLoading; // +0x8
    NSString * _tipsWording; // +0x10
}
- (long long)numberOfRowsInSection;
- (double)heightForHeaderInSection;
- (double)heightForRowInSection:(unsigned long long)arg1;
- (unsigned long long)sectionType;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (id)tipsWording;
- (void)setTipsWording:(id)arg1;
- (void).cxx_destruct;
@end

