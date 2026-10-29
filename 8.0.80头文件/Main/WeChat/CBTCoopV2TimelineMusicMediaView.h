@interface CBTCoopV2TimelineMusicMediaView : MMUIView <WCImageViewDelegate>
{
    BOOL _externalStyle; // +0x8
    WCDataItem * _dataItem; // +0x10
    double _contentWidth; // +0x18
    WCImageView * _coverView; // +0x20
    UIImageView * _playView; // +0x28
    UILabel * _titleLabel; // +0x30
    UILabel * _subtitleLabel; // +0x38
    UIView * _playContainer; // +0x40
}
+ (double)renderedHeightForDataItem:(id)arg1 contentWidth:(double)arg2 externalStyle:(BOOL)arg3;
- (id)initWithDataItem:(id)arg1 contentWidth:(double)arg2 externalStyle:(BOOL)arg3;
- (void)ensureSubviews;
- (void)layoutSubviews;
- (id)createCoverViewWithSize:(double)arg1 originY:(double)arg2;
- (id)playIconImage;
- (id)titleText;
- (id)subtitleText;
- (void)updateNativeMusicBackgroundColorIfNeeded;
- (void)onDownloadFinish:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (double)contentWidth;
- (void)setContentWidth:(double)arg1;
- (BOOL)externalStyle;
- (void)setExternalStyle:(BOOL)arg1;
- (id)coverView;
- (void)setCoverView:(id)arg1;
- (id)playView;
- (void)setPlayView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)playContainer;
- (void)setPlayContainer:(id)arg1;
- (void).cxx_destruct;
@end
