@interface MJMetaEditGeographicPanel : UIViewController
{
    id <MJMetaEditGeographicPanelDelegate> _delegate; // +0x8
    MJSegmentViewModel * _segmentVM; // +0x10
    UIView * _containerView; // +0x18
    UILabel * _titleLabel; // +0x20
    UILabel * _contentLabel; // +0x28
    UIImageView * _icon; // +0x30
}
- (id)initWithSegmentVM:(id)arg1;
- (void)viewDidLoad;
- (void)setupViews;
- (void)updateDatas;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)segmentVM;
- (void)setSegmentVM:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)icon;
- (void)setIcon:(id)arg1;
- (void).cxx_destruct;
@end
