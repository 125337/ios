@interface ContactRemarkImageListPageSheet : MMPageSheetBaseView <CardImageBrowseViewControllerDelegate>
{
    NSArray * _cardImgList; // +0x8
    NSMutableArray * _cardImgViewList; // +0x10
    MMUIView * _containerView; // +0x18
}
- (id)initWithCardImgList:(id)arg1;
- (void)initConfig;
- (void)initView;
- (id)getRemarkImageListView;
- (double)getImageViewSize;
- (void)onTapCardImg:(id)arg1;
- (void)onCardImageBrowseViewControllerDidDeleteImageAtIndex:(unsigned int)arg1;
- (CGRect)cardImgViewFrameAtIndex:(unsigned int)arg1;
- (BOOL)onCardImageBrowseViewControllerImageActionSheet:(id)arg1 shouldShowItem:(id)arg2;
- (id)cardImgList;
- (void)setCardImgList:(id)arg1;
- (id)cardImgViewList;
- (void)setCardImgViewList:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (void).cxx_destruct;
@end
