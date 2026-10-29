@interface EmoticonPreviewWindowViewController : EmoticonPreviewBaseWindowViewController <EmoticonBackupOperateMgrExt>
{
    int _aligment; // +0x74
    id <EmoticonPreviewWindowViewControllerDelegate> _delegate; // +0x78
    HLActionButton * _moveToFrontButton; // +0x80
    HLActionButton * _deleteButton; // +0x88
    HLActionButton * _showDetailButton; // +0x90
    HLActionButton * _confirmDelButton; // +0x98
    UIView * _horizontalDivider; // +0xa0
    UIView * _verticalDivider; // +0xa8
    UIImage * _leftTipsBubble; // +0xb0
    UIImage * _rightTipsBubble; // +0xb8
    UIImage * _midTipsBubble; // +0xc0
    UIImageView * _leftButtonBubble; // +0xc8
    UIImageView * _rightButtonBubble; // +0xd0
    UIImageView * _midButtonBubble; // +0xd8
}
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (id)moveToFrontButton;
- (id)deleteButton;
- (id)showDetailButton;
- (id)confirmDelButton;
- (id)horizontalDivider;
- (id)verticalDivider;
- (id)actionButtonWithTitle:(id)arg1 selector:(SEL)arg2;
- (id)leftTipsBubble;
- (id)midTipsBubble;
- (id)rightTipsBubble;
- (id)leftButtonBubble;
- (id)rightButtonBubble;
- (id)midButtonBubble;
- (void)setAligment:(int)arg1;
- (void)layoutButtonComponent;
- (void)setupButtonBubbleImageLeft:(id)arg1 mid:(id)arg2 right:(id)arg3;
- (void)setPreviewModel:(id)arg1;
- (void)layoutSubviewFrame;
- (void)changeToDeleteConfirmMode;
- (void)onDeleteEmoticon:(id)arg1;
- (void)onComfirmDeleteEmoticon:(id)arg1;
- (void)onMoveEmoticonToFront:(id)arg1;
- (void)onShowEmotionDetailPage:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onDeleteBackupEmoticonOK:(id)arg1;
- (void)onDeleteBackupEmoticonFailed:(id)arg1;
- (void)onStickyBackupEmoticonOK:(id)arg1;
- (void)onStickyBackupEmoticonFailed:(id)arg1;
- (BOOL)isSelfModEvent:(id)arg1;
- (id)currentEmotionMd5;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setMoveToFrontButton:(id)arg1;
- (void)setDeleteButton:(id)arg1;
- (void)setShowDetailButton:(id)arg1;
- (void)setConfirmDelButton:(id)arg1;
- (void)setHorizontalDivider:(id)arg1;
- (void)setVerticalDivider:(id)arg1;
- (int)aligment;
- (void)setLeftTipsBubble:(id)arg1;
- (void)setRightTipsBubble:(id)arg1;
- (void)setMidTipsBubble:(id)arg1;
- (void)setLeftButtonBubble:(id)arg1;
- (void)setRightButtonBubble:(id)arg1;
- (void)setMidButtonBubble:(id)arg1;
- (void).cxx_destruct;
@end

