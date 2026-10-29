@interface ProductTableView : MMUIView <ProductKeyValueTableCellDelegate, MMTableViewDelegate, UITableViewDelegate, UITableViewDataSource, ProductMediaItemViewDelegate>
{
    MMTableView * _tableView; // +0x8
    NSString * _epName; // +0x10
    NSString * _musicSinger; // +0x18
    NSString * _thumbUrl; // +0x20
    NSString * _productId; // +0x28
    unsigned int _getA8KeyScence; // +0x30
    unsigned int _jumpProfileScence; // +0x34
    NSMutableArray * _musicInfoList; // +0x38
    ProductMediaItemView * _mediaItemView; // +0x40
    ScanProductItem * _productItem; // +0x48
    NSMutableDictionary * _indexTextCellDict; // +0x50
    MMUIViewController * _containerViewController; // +0x58
    double _bottomInset; // +0x60
    LocationRetriever * _locationRetriver; // +0x68
    UIView * _footerView; // +0x70
    id <ProductTableViewDelegate> _deleage; // +0x78
}
- (id)initWithFrame:(CGRect)arg1 ProductItem:(id)arg2 ViewController:(id)arg3;
- (id)getTableView;
- (void)setHeaderView:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)reloadTableData:(id)arg1;
- (id)getTextCellByIndexPath:(id)arg1;
- (void)setTableInset;
- (void)initTableView;
- (void)layoutSubviews;
- (void)initView;
- (void)initMusicList;
- (void)dealloc;
- (id)getServiceContant:(id)arg1;
- (id)getSystemAppID:(unsigned int)arg1;
- (BOOL)isBannerCell:(id)arg1;
- (BOOL)isHiddenCell:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)loadCellBgImageView:(id)arg1 actionBase:(id)arg2 indexPath:(id)arg3;
- (void)loadLinkCellSubView:(id)arg1 actionBase:(id)arg2 indexPath:(id)arg3;
- (void)loadDetailCellSubView:(id)arg1 actionBase:(id)arg2 indexPath:(id)arg3;
- (void)loadUserCellSubView:(id)arg1 actionBase:(id)arg2 indexPath:(id)arg3;
- (void)loadTextCellSubView:(id)arg1 actionBase:(id)arg2 indexPath:(id)arg3;
- (void)loadMediaCellSubView:(id)arg1 actionBase:(id)arg2 indexPath:(id)arg3;
- (void)loadImageCellSubView:(id)arg1 actionBase:(id)arg2 indexPath:(id)arg3;
- (void)loadMusicCellSubView:(id)arg1 actionBase:(id)arg2 indexPath:(id)arg3;
- (void)loadProductCellSubView:(id)arg1 actionBase:(id)arg2 indexPath:(id)arg3;
- (void)loadCardCellSubView:(id)arg1 actionBase:(id)arg2 indexPath:(id)arg3;
- (void)loadGridRowCellSubView:(id)arg1 actionBase:(id)arg2 indexPath:(id)arg3;
- (void)loadReferCellSubView:(id)arg1 actionBase:(id)arg2 indexPath:(id)arg3;
- (void)loadHeaderCellSubView:(id)arg1 actionBase:(id)arg2 indexPath:(id)arg3;
- (void)loadCommentCellSubView:(id)arg1 actionBase:(id)arg2 indexPath:(id)arg3;
- (id)genNameLabel2Cell:(id)arg1;
- (id)genDigestLabel2Cell:(id)arg1;
- (id)genDescLabel2Cell:(id)arg1;
- (id)genGridItemView:(id)arg1 withStatId:(id)arg2 gridItemListCount:(long long)arg3;
- (void)onSingleTap:(id)arg1;
- (void)onPlayBtnClicked:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onCellViewMore:(id)arg1;
- (void)mediaItemView:(id)arg1 openMediaUrl:(id)arg2 actionBase:(id)arg3 actionListCount:(unsigned long long)arg4;
- (id)epName;
- (void)setEpName:(id)arg1;
- (id)musicSinger;
- (void)setMusicSinger:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (id)productId;
- (void)setProductId:(id)arg1;
- (unsigned int)getA8KeyScence;
- (void)setGetA8KeyScence:(unsigned int)arg1;
- (unsigned int)jumpProfileScence;
- (void)setJumpProfileScence:(unsigned int)arg1;
- (id)deleage;
- (void)setDeleage:(id)arg1;
- (void).cxx_destruct;
@end

