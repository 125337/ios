@interface MMFinderAnchorReplaySettingContainerView : UIView
{
    BOOL _canGenerateReplay; // +0x8
    BOOL _isChargableLive; // +0x9
    BOOL _isMemberLive; // +0xa
    BOOL _replayCanBeCancelled; // +0xb
    unsigned int _replayState; // +0xc
    id /* block */ _actionBlock; // +0x10
    MMWebImageView * _coverImageView; // +0x18
    MMUILabel * _titleLabel; // +0x20
    MMUILabel * _detailLabel; // +0x28
    MMUIButton * _createButton; // +0x30
    MMUILabel * _creatingLabel; // +0x38
    MMUIButton * _completedButton; // +0x40
    MMUIButton * _creatingButton; // +0x48
    MMUILabel * _cannotCreateLabel; // +0x50
    NSString * _liveCoverUrl; // +0x58
}
- (void)updateData:(unsigned int)arg1 canGenerateReplay:(BOOL)arg2 isMemberLive:(BOOL)arg3 isChargableLive:(BOOL)arg4 liveCoverUrl:(id)arg5 replayCanBeCancelled:(BOOL)arg6 subscribedCount:(unsigned int)arg7;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutUI;
- (id)coverImageView;
- (id)titleLabel;
- (id)detailLabel;
- (id)creatingLabel;
- (id)cannotCreateLabel;
- (id)createButton;
- (id)completedButton;
- (id)creatingButton;
- (void)createReplayAction;
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg1;
- (void)setCoverImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDetailLabel:(id)arg1;
- (void)setCreateButton:(id)arg1;
- (void)setCreatingLabel:(id)arg1;
- (void)setCompletedButton:(id)arg1;
- (void)setCreatingButton:(id)arg1;
- (void)setCannotCreateLabel:(id)arg1;
- (unsigned int)replayState;
- (void)setReplayState:(unsigned int)arg1;
- (BOOL)canGenerateReplay;
- (void)setCanGenerateReplay:(BOOL)arg1;
- (BOOL)isChargableLive;
- (void)setIsChargableLive:(BOOL)arg1;
- (BOOL)isMemberLive;
- (void)setIsMemberLive:(BOOL)arg1;
- (id)liveCoverUrl;
- (void)setLiveCoverUrl:(id)arg1;
- (BOOL)replayCanBeCancelled;
- (void)setReplayCanBeCancelled:(BOOL)arg1;
- (void).cxx_destruct;
@end
