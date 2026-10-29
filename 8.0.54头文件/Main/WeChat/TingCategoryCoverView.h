@interface TingCategoryCoverView : UIView <MMWebImageViewDelegate, TingPAGCoverControllerDelegate>
{
    BOOL _callbackOnMainThread; // +0x8
    BOOL _isAuthorHeadImgHidden; // +0x9
    TingCoverInfo * _coverInfo; // +0x10
    id <TingCategoryCoverViewDelegate> _delegate; // +0x18
    MMListenCategoryItem * _sourceCategoryItem; // +0x20
    MMLiveGradientLayerView * _backgroundView; // +0x28
    UIView * _contentView; // +0x30
    MMWebImageView * _commonCoverView; // +0x38
    TingPagCoverView * _pagCoverView; // +0x40
    UIView * _highlightedMaskView; // +0x48
    MMWebImageView * _authorIconView; // +0x50
    UIView * _authorIconContainerView; // +0x58
    UIImageView * _iconView; // +0x60
    UIImageView * _pagIconView; // +0x68
    UIView * _styleCoverBgView; // +0x70
    MMWebImageView * _styleCoverView; // +0x78
    MMUILabel * _masterTitle; // +0x80
    UIImageView * _representIconView; // +0x88
    TingPAGCoverController * _pagCoverController; // +0x90
    TingPAGImageView * _pagCoverImageView; // +0x98
    CGSize _contentSize; // +0xa0
    UIEdgeInsets _contentInsets; // +0xb0
}
- (id)backgroundView;
- (id)masterTitle;
- (id)contentView;
- (id)commonCoverView;
- (id)representIconView;
- (id)iconImage;
- (double)iconWidth;
- (id)highlightedMaskView;
- (id)authorIconView;
- (id)authorIconContainerView;
- (id)iconView;
- (id)pagIconView;
- (id)styleCoverBgView;
- (id)styleCoverView;
- (id)initWithFrame:(CGRect)arg1;
- (void)initPagCoverImageView;
- (void)dealloc;
- (void)layoutSubviews;
- (void)initBackgroundColors;
- (void)updateWithImage:(id)arg1;
- (void)updateWithUrl:(id)arg1;
- (void)updateWithCategoryItem:(id)arg1;
- (void)updateWithCoverController:(id)arg1;
- (void)updateWithCoverInfo:(id)arg1;
- (void)initPAGFileIfNeed;
- (void)displayWithCoverStyle;
- (BOOL)shouldShowIconView;
- (id)getIconViewImage;
- (id)getPAGIconImage;
- (void)setContentInsets:(UIEdgeInsets)arg1;
- (void)setContentSize:(CGSize)arg1;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)arg1;
- (void)setIconHidden:(BOOL)arg1;
- (void)resetDefaultBackground;
- (void)updateBackgroundWithImage:(id)arg1;
- (void)_updateBackgroundWithImage:(id)arg1;
- (void)onLoadImageOK:(id)arg1;
- (void)pagController:(id)arg1 didLoadImage:(id)arg2 index:(unsigned long long)arg3;
- (id)coverInfo;
- (void)setCoverInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (UIEdgeInsets)contentInsets;
- (BOOL)callbackOnMainThread;
- (void)setCallbackOnMainThread:(BOOL)arg1;
- (id)sourceCategoryItem;
- (void)setSourceCategoryItem:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setCommonCoverView:(id)arg1;
- (id)pagCoverView;
- (void)setPagCoverView:(id)arg1;
- (CGSize)contentSize;
- (void)setHighlightedMaskView:(id)arg1;
- (void)setAuthorIconView:(id)arg1;
- (void)setAuthorIconContainerView:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setPagIconView:(id)arg1;
- (void)setStyleCoverBgView:(id)arg1;
- (void)setStyleCoverView:(id)arg1;
- (void)setMasterTitle:(id)arg1;
- (void)setRepresentIconView:(id)arg1;
- (id)pagCoverController;
- (void)setPagCoverController:(id)arg1;
- (id)pagCoverImageView;
- (void)setPagCoverImageView:(id)arg1;
- (BOOL)isAuthorHeadImgHidden;
- (void)setIsAuthorHeadImgHidden:(BOOL)arg1;
- (void).cxx_destruct;
@end

