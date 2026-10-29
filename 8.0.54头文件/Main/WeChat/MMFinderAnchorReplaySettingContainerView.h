@interface MMFinderAnchorReplaySettingContainerView : UIView
{
    BOOL _isChargableLive; // +0x8
    BOOL _isMemberLive; // +0x9
    unsigned int _replayState; // +0xc
    id /* block */ _actionBlock; // +0x10
    MMWebImageView * _coverImageView; // +0x18
    MMUILabel * _titleLabel; // +0x20
    MMUILabel * _detailLabel; // +0x28
    MMUIButton * _createButton; // +0x30
    MMUILabel * _subTitleLabel; // +0x38
    UITapGestureRecognizer * _tapGestureRecognizer; // +0x40
    NSString * _liveCoverUrl; // +0x48
}
- (void)updateData:(unsigned int)arg1 isMemberLive:(BOOL)arg2 isChargableLive:(BOOL)arg3 liveCoverUrl:(id)arg4;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (id)coverImageView;
- (id)tapGestureRecognizer;
- (id)titleLabel;
- (id)detailLabel;
- (id)subTitleLabel;
- (id)createButton;
- (void)updateCreateButton;
- (void)createReplayAction;
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg1;
- (void)setCoverImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDetailLabel:(id)arg1;
- (void)setCreateButton:(id)arg1;
- (void)setSubTitleLabel:(id)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (unsigned int)replayState;
- (void)setReplayState:(unsigned int)arg1;
- (BOOL)isChargableLive;
- (void)setIsChargableLive:(BOOL)arg1;
- (BOOL)isMemberLive;
- (void)setIsMemberLive:(BOOL)arg1;
- (id)liveCoverUrl;
- (void)setLiveCoverUrl:(id)arg1;
- (void).cxx_destruct;
@end

