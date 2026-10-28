@interface WCFinderCollectionShareMomentViewModel : NSObject <WCContentItemFinderLinkStyleViewModelProtocol>
{
    WCDataItem * _dataItem; // +0x8
}
- (id)initWithDataItem:(id)arg1;
- (id)shareItem;
- (id)iconURL;
- (id)titleString;
- (id)descString;
- (BOOL)enabledFavorite;
- (void)didTapContent;
- (void)didTapFavorite;
- (id)reportParams;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (void).cxx_destruct;
@end
