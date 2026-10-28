@interface WCFinderLocalDraftCollectionViewCell : WCFinderSlideMenuCell
{
    id <WCFinderLocalDraftCollectionViewCellDelegate> _delegate; // +0x8
    UIView * _displayView; // +0x10
    UIView * _seperator; // +0x18
    UIImageView * _coverImageView; // +0x20
    UILabel * _titleLabel; // +0x28
    UILabel * _createDateLabel; // +0x30
    UIImageView * _tipsIconView; // +0x38
    UILabel * _tipsLabel; // +0x40
    UIView * _progressView; // +0x48
    CAShapeLayer * _progressShapeLayer; // +0x50
    UILabel * _progressLabel; // +0x58
    WCFinderLocalDraft * _cellModel; // +0x60
}
+ (id)cellId;
+ (double)cellHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (void)setupSubViews;
- (void)setupLayout;
- (void)setupDeleteMenu;
- (id)displayContentView;
- (void)updateWithDraftModel:(id)arg1 isFirstRow:(BOOL)arg2;
- (void)updateProgress:(double)arg1 text:(id)arg2;
- (void)showProgressUI:(BOOL)arg1;
- (void)onSlideDelete;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)displayView;
- (void)setDisplayView:(id)arg1;
- (id)seperator;
- (void)setSeperator:(id)arg1;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)createDateLabel;
- (void)setCreateDateLabel:(id)arg1;
- (id)tipsIconView;
- (void)setTipsIconView:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)progressView;
- (void)setProgressView:(id)arg1;
- (id)progressShapeLayer;
- (void)setProgressShapeLayer:(id)arg1;
- (id)progressLabel;
- (void)setProgressLabel:(id)arg1;
- (id)cellModel;
- (void)setCellModel:(id)arg1;
- (void).cxx_destruct;
@end
