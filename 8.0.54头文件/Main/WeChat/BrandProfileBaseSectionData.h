@interface BrandProfileBaseSectionData : MMObject
{
    double _sectionWidth; // +0x8
}
- (id)initWithSectionWidth:(double)arg1;
- (void)updateSectionWidth:(double)arg1;
- (long long)numberOfRowsInSection;
- (double)heightForHeaderInSection;
- (double)heightForRowInSection:(unsigned long long)arg1;
- (double)sectionHeight;
- (double)sectionWidth;
@end

