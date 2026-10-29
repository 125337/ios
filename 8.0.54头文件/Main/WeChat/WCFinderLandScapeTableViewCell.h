@interface WCFinderLandScapeTableViewCell : WCFinderLandScapeBasicTableViewCell
{
    BOOL _showMaskView; // +0x8
    WCFinderLandScapeCoverInfoView * _coverView; // +0x10
    RichTextView * _descLabel; // +0x18
    RichTextView * _nickNameLabel; // +0x20
    RichTextView * _recommentReasonLabel; // +0x28
    UIView * _maskView; // +0x30
    UIView * _maskCover; // +0x38
    UILabel * _playingTipsLabel; // +0x40
    WCFinderDataItem * _dataItem; // +0x48
}
+ (id)cellId;
+ (double)cellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupSubViews;
- (void)updateWithDataItem:(id)arg1;
- (void)layoutSubviews;
- (void)setShowMaskView:(BOOL)arg1;
- (id)coverView;
- (void)setCoverView:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)recommentReasonLabel;
- (void)setRecommentReasonLabel:(id)arg1;
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (id)maskCover;
- (void)setMaskCover:(id)arg1;
- (id)playingTipsLabel;
- (void)setPlayingTipsLabel:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (BOOL)showMaskView;
- (void).cxx_destruct;
@end

