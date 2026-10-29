@interface WAMainFrameTaskBarSectionOtherViewCell : UICollectionViewCell <MMWebImageViewDelegate, IMiniMizeUserdRecordUpdateExt>
{
    BOOL m_selected; // +0x8
    UIView * _topMask; // +0x10
    UIView * _bottomMask; // +0x18
    CAGradientLayer * _topGradientLayer; // +0x20
    CAGradientLayer * _bottomGradientLayer; // +0x28
    MMUIButton * _closeButton; // +0x30
    MinimizeTaskData * _taskData; // +0x38
    id <WAMainFrameTaskBarSectionOtherViewCellDelegate> _delegate; // +0x40
    UIView * _contentContainer; // +0x48
    UIView * _coverArea; // +0x50
    MMWebImageView * _coverImageView; // +0x58
    UILabel * _titleLabel; // +0x60
    UILabel * _sourceLabel; // +0x68
    NSMutableArray * _voiceOverElements; // +0x70
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)initView;
- (void)onCloseBtnClicked;
- (BOOL)supportAddToMinimize;
- (id)defaultImage;
- (void)updateWithListInfo:(id)arg1;
- (void)layoutSubviews;
- (void)onLoadImageOK:(id)arg1;
- (BOOL)shouldListenSnapshotUpdate;
- (void)onTaskSnapShotUpdate:(id)arg1 snapshot:(id)arg2;
- (id)voiceOverElements;
- (void)initVoiceOverElements;
- (void)updateAccessibilityFrame;
- (BOOL)isAccessibilityElement;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentContainer;
- (void)setContentContainer:(id)arg1;
- (id)coverArea;
- (void)setCoverArea:(id)arg1;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)sourceLabel;
- (void)setSourceLabel:(id)arg1;
- (void)setVoiceOverElements:(id)arg1;
- (void).cxx_destruct;
@end

