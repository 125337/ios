@interface MMFinderLiveFlowCollectionViewSectionAdapter : NSObject
{
    MMFinderLiveFlowCollectionViewSectionHeaderAdapter * _headerAdapter; // +0x8
    NSArray * _cellAdapters; // +0x10
    MMFinderLiveFlowCollectionViewSectionFooterAdapter * _footerAdapter; // +0x18
}
- (id)headerAdapter;
- (void)setHeaderAdapter:(id)arg1;
- (id)cellAdapters;
- (void)setCellAdapters:(id)arg1;
- (id)footerAdapter;
- (void)setFooterAdapter:(id)arg1;
- (void).cxx_destruct;
@end
