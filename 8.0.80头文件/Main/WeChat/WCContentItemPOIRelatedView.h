@interface WCContentItemPOIRelatedView : WCContentItemBaseView
{
    WCContentItemPOIRelatedViewModel * _viewModel; // +0x38
    MMWebImageView * _contentImageView; // +0x40
    UILabel * _poiTitleLabel; // +0x48
    UILabel * _poiDesclabel; // +0x50
}
+ (double)heightForMedia:(id)arg1 showDetail:(BOOL)arg2;
- (void)initViewsWithWCDataItem:(id)arg1;
- (id)contentImageView;
- (id)poiTitleLabel;
- (id)poiDesclabel;
- (void)udpateSubViewsLayout;
- (void)throwUrlMessage;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setContentImageView:(id)arg1;
- (void)setPoiTitleLabel:(id)arg1;
- (void)setPoiDesclabel:(id)arg1;
- (void).cxx_destruct;
@end
