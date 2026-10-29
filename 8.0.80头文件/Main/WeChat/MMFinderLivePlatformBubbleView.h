@interface MMFinderLivePlatformBubbleView : UIView
{
    BOOL _isButtonInSecondState; // +0x8
    id <MMFinderLivePlatformBubbleViewDelegate> _delegate; // +0x10
    FinderLiveAppMsgPlatformBubbleInfo * _bubbleInfo; // +0x18
    MMFinderLiveTaskId * _taskId; // +0x20
    NSString * _contentText; // +0x28
    UIView * _backgroundView; // +0x30
    RichTextView * _contentView; // +0x38
    UIButton * _actionButton; // +0x40
    RichTextView * _buttonTitleView; // +0x48
    NSString * _exposedBubbleId; // +0x50
}
+ (BOOL)preferLargeFontForTaskId:(id)arg1;
+ (double)preferHeightForTaskId:(id)arg1;
- (id)initWithTaskId:(id)arg1;
- (void)updateWithBubbleInfo:(id)arg1;
- (void)updateButtonToSecondState;
- (void)layoutSubviews;
- (void)layoutBackgroundView;
- (void)layoutContentAndButton;
- (void)setHidden:(BOOL)arg1;
- (void)setAlpha:(double)arg1;
- (void)reloadContent;
- (void)updateContentText;
- (void)updateActionButton;
- (void)checkIfExposed;
- (void)onActionButtonClicked;
- (void)onContentClicked;
- (id)backgroundView;
- (id)contentView;
- (id)actionButton;
- (id)buttonTitleView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)bubbleInfo;
- (void)setBubbleInfo:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)contentText;
- (void)setContentText:(id)arg1;
- (BOOL)isButtonInSecondState;
- (void)setIsButtonInSecondState:(BOOL)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setActionButton:(id)arg1;
- (void)setButtonTitleView:(id)arg1;
- (id)exposedBubbleId;
- (void)setExposedBubbleId:(id)arg1;
- (void).cxx_destruct;
@end
