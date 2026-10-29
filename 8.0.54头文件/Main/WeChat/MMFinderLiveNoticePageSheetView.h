@interface MMFinderLiveNoticePageSheetView : MMPageSheetBaseView <WCFinderLiveExt>
{
    NSString * _finderUsername; // +0x8
    FinderLiveNoticeInfo * _noticeInfo; // +0x10
    id /* block */ _didClickActionButtonBlock; // +0x18
    WCFinderJumpInfoDynamicCarouselLiveNoticeViewModel * _dynamicCarouselLiveNoticeViewModel; // +0x20
    UIScrollView * _contentScrollView; // +0x28
    MMWebImageView * _iconImageView; // +0x30
    UILabel * _titleLabel; // +0x38
    MMUIImageView * _detailIconImageView; // +0x40
    UILabel * _detailLabel; // +0x48
    MMUIButton * _actionButton; // +0x50
}
+ (id)createIconImageView;
+ (id)createTitleLabel;
+ (id)createDetailIconImageView;
+ (id)createDetailLabel;
+ (id)createActionButton;
- (id)initWithFrame:(CGRect)arg1 finderUsername:(id)arg2 noticeInfo:(id)arg3;
- (id)initWithFrame:(CGRect)arg1 finderUsername:(id)arg2 dynamicCarouselLiveNoticeViewModel:(id)arg3;
- (void)_init;
- (void)_initPageSheet;
- (void)loadContentView;
- (void)updateSubviews;
- (void)fitSizeAndLayout;
- (void)didClickActionButton:(id)arg1;
- (void)layoutSubviews;
- (void)onFinderLiveNoticeWithNoticeId:(id)arg1 reserveStateChanged:(unsigned long long)arg2;
- (id)finderUsername;
- (id)noticeInfo;
- (id /* block */)didClickActionButtonBlock;
- (void)setDidClickActionButtonBlock:(id /* block */)arg1;
- (id)dynamicCarouselLiveNoticeViewModel;
- (void)setDynamicCarouselLiveNoticeViewModel:(id)arg1;
- (id)contentScrollView;
- (void)setContentScrollView:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)detailIconImageView;
- (void)setDetailIconImageView:(id)arg1;
- (id)detailLabel;
- (void)setDetailLabel:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (void).cxx_destruct;
@end

