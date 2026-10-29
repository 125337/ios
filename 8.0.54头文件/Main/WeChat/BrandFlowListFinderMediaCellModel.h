@interface BrandFlowListFinderMediaCellModel : BrandFlowListBaseCellModel
{
    WCFinderFeedContentVM * _feedContentVM; // +0x8
    NSString * _exportId; // +0x10
}
- (id)initWithFinderDataItem:(id)arg1 fromScene:(unsigned long long)arg2;
- (id)getFinderFeedContentVM;
- (id)finderExportId;
- (void)refreshWithFinderDataItem:(id)arg1;
- (id)feedContentVM;
- (void)setFeedContentVM:(id)arg1;
- (id)exportId;
- (void)setExportId:(id)arg1;
- (void).cxx_destruct;
@end

