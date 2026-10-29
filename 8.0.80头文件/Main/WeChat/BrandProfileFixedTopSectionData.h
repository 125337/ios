@interface BrandProfileFixedTopSectionData : BrandProfileBaseSectionData
{
    double _contentHeight; // +0x8
}
- (long long)numberOfRowsInSection;
- (double)heightForHeaderInSection;
- (double)contentHeight;
- (void)setContentHeight:(double)arg1;
@end
