@interface MMFinderLivePaidCollectionAnchorPromoteInfo : MMFinderLiveAnchorPromoteInfo
{
    FinderPaidCollectionInfo * _paidCollectionInfo; // +0x30
}
+ (id)createPaidCollectionInfoFrom:(id)arg1;
- (id)promoteKey;
- (BOOL)shouldSkipReportOnPromoteManagerPanelStart;
- (id)paidCollectionInfo;
- (void)setPaidCollectionInfo:(id)arg1;
- (void).cxx_destruct;
@end
