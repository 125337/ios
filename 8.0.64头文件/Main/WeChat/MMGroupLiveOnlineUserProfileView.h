@interface MMGroupLiveOnlineUserProfileView : UIView <UIGestureRecognizerDelegate>
{
    BOOL _isAnchor; // +0x8
    BOOL _isSelf; // +0x9
    BOOL _isAdmin; // +0xa
    BOOL _isOpening; // +0xb
    id /* block */ _complaintCallback; // +0x10
    id /* block */ _kickoutCallback; // +0x18
    id /* block */ _cutLiveCallback; // +0x20
    id /* block */ _openedCallback; // +0x28
    id /* block */ _closedCallback; // +0x30
    UIView * _contentView; // +0x38
    UIView * _profileDetailView; // +0x40
    UIView * _maskingView; // +0x48
    CAShapeLayer * _shapeLayer; // +0x50
    UIVisualEffectView * _visualEfView; // +0x58
    MMHeadImageView * _headImageView; // +0x60
    MMUILabel * _displayNameLabel; // +0x68
    MMUILabel * _genderLabel; // +0x70
    MMUILabel * _placeLabel; // +0x78
    RichTextView * _signatureLabel; // +0x80
    MMUIButton * _comlaintButton; // +0x88
    MMUIButton * _kickoutButton; // +0x90
    MMUIButton * _cutLiveButton; // +0x98
    MMUIButton * _closeButton; // +0xa0
    NSString * _userName; // +0xa8
    NSString * _roomId; // +0xb0
    CContact * _contact; // +0xb8
    UIPanGestureRecognizer * _panGestureRecognizer; // +0xc0
    double _viewTopAtPanBegin; // +0xc8
    double _previousPanPositionY; // +0xd0
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initUI;
- (void)layoutUI;
- (void)layoutSubviews;
- (double)contentViewHeight;
- (CGRect)contentViewFrame;
- (void)updateWithUserName:(id)arg1 roomId:(id)arg2 isAnchor:(BOOL)arg3 isAnchorHeadClicked:(BOOL)arg4;
- (void)close;
- (void)closeWithAnimation:(BOOL)arg1;
- (void)openWithAnimation:(BOOL)arg1;
- (void)onComlaintButtonClicked;
- (void)onKickoutButtonClicked;
- (void)onCutLiveButtonClicked;
- (void)handleContentViewPanGesture:(id)arg1;
- (id /* block */)complaintCallback;
- (void)setComplaintCallback:(id /* block */)arg1;
- (id /* block */)kickoutCallback;
- (void)setKickoutCallback:(id /* block */)arg1;
- (id /* block */)cutLiveCallback;
- (void)setCutLiveCallback:(id /* block */)arg1;
- (id /* block */)openedCallback;
- (void)setOpenedCallback:(id /* block */)arg1;
- (id /* block */)closedCallback;
- (void)setClosedCallback:(id /* block */)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)profileDetailView;
- (void)setProfileDetailView:(id)arg1;
- (id)maskingView;
- (void)setMaskingView:(id)arg1;
- (id)shapeLayer;
- (void)setShapeLayer:(id)arg1;
- (id)visualEfView;
- (void)setVisualEfView:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)displayNameLabel;
- (void)setDisplayNameLabel:(id)arg1;
- (id)genderLabel;
- (void)setGenderLabel:(id)arg1;
- (id)placeLabel;
- (void)setPlaceLabel:(id)arg1;
- (id)signatureLabel;
- (void)setSignatureLabel:(id)arg1;
- (id)comlaintButton;
- (void)setComlaintButton:(id)arg1;
- (id)kickoutButton;
- (void)setKickoutButton:(id)arg1;
- (id)cutLiveButton;
- (void)setCutLiveButton:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)roomId;
- (void)setRoomId:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (BOOL)isAnchor;
- (void)setIsAnchor:(BOOL)arg1;
- (BOOL)isSelf;
- (void)setIsSelf:(BOOL)arg1;
- (BOOL)isAdmin;
- (void)setIsAdmin:(BOOL)arg1;
- (BOOL)isOpening;
- (void)setIsOpening:(BOOL)arg1;
- (id)panGestureRecognizer;
- (void)setPanGestureRecognizer:(id)arg1;
- (double)viewTopAtPanBegin;
- (void)setViewTopAtPanBegin:(double)arg1;
- (double)previousPanPositionY;
- (void)setPreviousPanPositionY:(double)arg1;
- (void).cxx_destruct;
@end
