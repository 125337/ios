@interface EmoticonStoreLensDesignerView : EmoticonCellLikeButton <EmoticonLensMgrExt>
{
    id <EmoticonStoreLensDesignerViewDelegate> _delegate; // +0x8
    NSString * _lensId; // +0x10
    EmoticonLensInfo * _lensInfo; // +0x18
    UIView * _separatorView; // +0x20
    UIImageView * _iconImageView; // +0x28
    UILabel * _lensNameLabel; // +0x30
    UILabel * _designerNameLabel; // +0x38
    UIButton * _followButton; // +0x40
}
+ (double)height;
- (id)initWithFrame:(CGRect)arg1;
- (void)initUI;
- (void)layoutSubviews;
- (void)setupLensId:(id)arg1;
- (void)setupLensInfo:(id)arg1;
- (id)designer;
- (void)onFollowButtonClick;
- (void)onEmoticonLensIconDownloadSuccess:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)lensId;
- (void)setLensId:(id)arg1;
- (id)lensInfo;
- (void)setLensInfo:(id)arg1;
- (id)separatorView;
- (void)setSeparatorView:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)lensNameLabel;
- (void)setLensNameLabel:(id)arg1;
- (id)designerNameLabel;
- (void)setDesignerNameLabel:(id)arg1;
- (id)followButton;
- (void)setFollowButton:(id)arg1;
- (void).cxx_destruct;
@end

