@interface BTBaseSectionData : MMObject
{
    double _sectionWidth; // +0x8
    id <BTBaseSectionDataDelegate> _delegate; // +0x10
}
+ (BOOL)isFunctionalSecionType:(unsigned long long)arg1;
- (id)initWithSectionWidth:(double)arg1;
- (long long)numberOfRowsInSection;
- (double)heightForRowInSection:(unsigned long long)arg1;
- (double)viewHeight;
- (unsigned long long)sectionType;
- (id)identifierWithRow:(unsigned long long)arg1;
- (double)sectionWidth;
- (void)setSectionWidth:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

