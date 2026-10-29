@interface BTOftenReadSectionData : BTBaseSectionData
{
    NSArray * _itemViewModelArr; // +0x8
    BTOftenReadBarViewCell * _barCellView; // +0x10
    NSArray * _brandContactArr; // +0x18
    MPChannelTopBarInfo * _channelInfo; // +0x20
    NSString * _forcePreposedUsername; // +0x28
}
- (id)initWithSectionWidth:(double)arg1 oftenReadContactArr:(id)arg2 channelInfo:(id)arg3 forcePreposeUsername:(id)arg4;
- (void)updateWithOftenReadContactArr:(id)arg1 channelInfo:(id)arg2 forcePreposeUsername:(id)arg3;
- (void)updateWithChannelInfo:(id)arg1;
- (unsigned long long)sectionType;
- (long long)numberOfRowsInSection;
- (double)heightForRowInSection:(unsigned long long)arg1;
- (void)initItemViewModelList;
- (id)getPreposedContact;
- (id)genBrandBarItemViewModelWithContact:(id)arg1;
- (id)getChannelInfo;
- (BOOL)hasVideoChannel;
- (BOOL)hasOftenReadContact;
- (id)brandContactArr;
- (unsigned int)brandCount;
- (unsigned int)brandWithGreenDotCount;
- (id)itemViewModelArr;
- (void)setItemViewModelArr:(id)arg1;
- (id)barCellView;
- (void)setBarCellView:(id)arg1;
- (void)setBrandContactArr:(id)arg1;
- (id)channelInfo;
- (void)setChannelInfo:(id)arg1;
- (id)forcePreposedUsername;
- (void)setForcePreposedUsername:(id)arg1;
- (void).cxx_destruct;
@end
