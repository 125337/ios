@interface WCFinderLiveLivingView : UIView
{
    id <WCFinderLiveLivingViewDelegate> _delegate; // +0x8
    MMFinderLiveContentVM * _contentVM; // +0x10
    FinderLiveNoticeListInfo * _noticeListInfo; // +0x18
    unsigned long long _scene; // +0x20
    WCFinderLiveLivingItemView * _mainItemView; // +0x28
    UIView * _anchorHeadBackView; // +0x30
    WCFinderHeadImageView * _anchorHeadImageView; // +0x38
    UIView * _nowLiveView; // +0x40
    UILabel * _nowLiveLabel; // +0x48
    UILabel * _startTimeLabel; // +0x50
    RichTextView * _introductionTextView; // +0x58
    WCFinderLiveLivingItemView * _moreNoticesItemView; // +0x60
    UILabel * _moreNoticesLabel; // +0x68
    CGSize _cacheSize; // +0x70
}
+ (double)detailViewMarginRight;
+ (double)heightWithContentVM:(id)arg1 noticeListInfo:(id)arg2 width:(double)arg3 scene:(unsigned long long)arg4;
+ (BOOL)showsMoreNoticesWithNoticeList:(id)arg1;
+ (id)titleFontInScene:(unsigned long long)arg1;
+ (id)descColorInScene:(unsigned long long)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setFrame:(CGRect)arg1;
- (void)initUI;
- (void)layoutUI;
- (void)initMainItemView;
- (void)initAnchorHeadImageView;
- (void)initNowLiveView;
- (void)initStartTimeLabel;
- (void)initIntroductionTextView;
- (void)initMoreNoticesItemView;
- (void)initMoreNoticesLabel;
- (void)onMainItemClicked:(id)arg1;
- (void)onMoreNoticesButtonClicked:(id)arg1;
- (void)updateWithContentVM:(id)arg1 noticeListInfo:(id)arg2 scene:(unsigned long long)arg3;
- (void)updateCardAccessibility;
- (id)cardAccessibilityLabel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)noticeListInfo;
- (void)setNoticeListInfo:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)mainItemView;
- (void)setMainItemView:(id)arg1;
- (id)anchorHeadBackView;
- (void)setAnchorHeadBackView:(id)arg1;
- (id)anchorHeadImageView;
- (void)setAnchorHeadImageView:(id)arg1;
- (id)nowLiveView;
- (void)setNowLiveView:(id)arg1;
- (id)nowLiveLabel;
- (void)setNowLiveLabel:(id)arg1;
- (id)startTimeLabel;
- (void)setStartTimeLabel:(id)arg1;
- (id)introductionTextView;
- (void)setIntroductionTextView:(id)arg1;
- (id)moreNoticesItemView;
- (void)setMoreNoticesItemView:(id)arg1;
- (id)moreNoticesLabel;
- (void)setMoreNoticesLabel:(id)arg1;
- (CGSize)cacheSize;
- (void)setCacheSize:(CGSize)arg1;
- (void).cxx_destruct;
@end

