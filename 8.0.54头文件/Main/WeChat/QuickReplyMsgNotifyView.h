@interface QuickReplyMsgNotifyView : UIView
{
    BOOL _isReplying; // +0x8
    BOOL _isPreviewEnable; // +0x9
    BOOL _showMoreSetting; // +0xa
    BOOL _triggerDragToReply; // +0xb
    BOOL _isPaning; // +0xc
    id <QuickReplyMsgNotifyViewDelegate> _delegate; // +0x10
    QuickReplyNotifyItem * _notifyItem; // +0x18
    UIView * _maskContainerView; // +0x20
    UIView * _contentView; // +0x28
    MMHeadImageView * _headImageView; // +0x30
    MMUILabel * _titleLabel; // +0x38
    MMUILabel * _messageLabel; // +0x40
    MMUIButton * _moreButton; // +0x48
    MMUIButton * _notifySettingButton; // +0x50
    UIView * _moreSettingView; // +0x58
    UIPanGestureRecognizer * _panGesture; // +0x60
    double _panStartHeight; // +0x68
    double _contentLeftMargin; // +0x70
    long long _currDragType; // +0x78
    CGPoint _lastPanPostion; // +0x80
    CGPoint _panStartPos; // +0x90
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithItem:(id)arg1;
- (void)updateMaxWidth:(double)arg1;
- (void)sizeToFitWidth:(double)arg1;
- (void)beginReply;
- (void)dismissNotifyView;
- (void)initUI;
- (void)setupLayout;
- (id)genAnimateTransitionView:(id)arg1;
- (void)setIsReplying:(BOOL)arg1;
- (void)setupPanGesture;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)lightShock;
- (void)updateRoundCornerMask;
- (void)setShowMoreSetting:(BOOL)arg1;
- (void)didSelectAtMoreButton;
- (void)didSelectAtTemporaryCloseNotify;
- (void)didSelectAtCloseNotifyToday;
- (void)didSelectJumpToChat;
- (void)didSelectSettingButton;
- (void)handlePanGesture:(id)arg1;
- (void)reportCustomEvent:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)notifyItem;
- (void)setNotifyItem:(id)arg1;
- (BOOL)isReplying;
- (BOOL)isPreviewEnable;
- (void)setIsPreviewEnable:(BOOL)arg1;
- (BOOL)showMoreSetting;
- (id)maskContainerView;
- (void)setMaskContainerView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)messageLabel;
- (void)setMessageLabel:(id)arg1;
- (id)moreButton;
- (void)setMoreButton:(id)arg1;
- (id)notifySettingButton;
- (void)setNotifySettingButton:(id)arg1;
- (id)moreSettingView;
- (void)setMoreSettingView:(id)arg1;
- (id)panGesture;
- (void)setPanGesture:(id)arg1;
- (CGPoint)lastPanPostion;
- (void)setLastPanPostion:(CGPoint)arg1;
- (CGPoint)panStartPos;
- (void)setPanStartPos:(CGPoint)arg1;
- (double)panStartHeight;
- (void)setPanStartHeight:(double)arg1;
- (double)contentLeftMargin;
- (void)setContentLeftMargin:(double)arg1;
- (long long)currDragType;
- (void)setCurrDragType:(long long)arg1;
- (BOOL)triggerDragToReply;
- (void)setTriggerDragToReply:(BOOL)arg1;
- (BOOL)isPaning;
- (void)setIsPaning:(BOOL)arg1;
- (void).cxx_destruct;
@end

