@interface WCFinderLandScapeBidCardTableViewCell : WCFinderLandScapeBasicTableViewCell <WCFinderGlobalPlaybackInfoExt>
{
    id <WCFinderLandScapeBidCardTableViewCellDelegate> _bigCardCellDelegate; // +0x8
    MMWebImageView * _coverView; // +0x10
    UIView * _backView; // +0x18
    RichTextView * _descLabel; // +0x20
    UILabel * _timeLabel; // +0x28
    WCFinderStaticCoverInfoView * _infoView; // +0x30
    UILabel * _recommendReasonLabel; // +0x38
    UILabel * _maskLabel; // +0x40
    WCFinderAuthorContactRecommendView * _contactView; // +0x48
    _TtC6WeChat25WCFinderSimpleProgressBar * _progressBar; // +0x50
    UIView * _seperateLine; // +0x58
    WCFinderFeedContentVM * _contentVM; // +0x60
    WCFinderLandScapeCardCellStyle * _style; // +0x68
}
+ (id)cellId;
+ (double)cellHeightWithDataItem:(id)arg1 viewW:(double)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
- (void)setupSubViews;
- (void)setShowMaskView:(BOOL)arg1;
- (void)prepareForReuse;
- (void)updateWithContentVM:(id)arg1;
- (void)updateWithContentVM:(id)arg1 style:(id)arg2;
- (void)layoutSubviews;
- (double)backViewWidth;
- (id)recommendReasonColor;
- (void)onFinderDataItemUpdate:(id)arg1;
- (void)onGlobalPlaybackInfoUpdatedWithTid:(id)arg1;
- (id)bigCardCellDelegate;
- (void)setBigCardCellDelegate:(id)arg1;
- (id)coverView;
- (void)setCoverView:(id)arg1;
- (id)backView;
- (void)setBackView:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (id)infoView;
- (void)setInfoView:(id)arg1;
- (id)recommendReasonLabel;
- (void)setRecommendReasonLabel:(id)arg1;
- (id)maskLabel;
- (void)setMaskLabel:(id)arg1;
- (id)contactView;
- (void)setContactView:(id)arg1;
- (id)progressBar;
- (void)setProgressBar:(id)arg1;
- (id)seperateLine;
- (void)setSeperateLine:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)style;
- (void)setStyle:(id)arg1;
- (void).cxx_destruct;
@end

