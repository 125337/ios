@interface MMFinderAnchorAudienceAnalysisView : UIView
{
    unsigned int _waitTime; // +0x8
    id <MMFinderAnchorAudienceAnalysisViewDelegate> _delegate; // +0x10
    NSArray * _thankGuideList; // +0x18
    unsigned long long _currentThankGuideIndex; // +0x20
    UIView * _contentContainer; // +0x28
    UIView * _avatarContainer; // +0x30
    RichTextView * _showWordingLabel; // +0x38
    UILabel * _nicknameLabel; // +0x40
    UILabel * _jumpTextLabel; // +0x48
    NSString * _showWording; // +0x50
    NSString * _jumpTextWording; // +0x58
    NSString * _nickname; // +0x60
    UILabel * _textLabel; // +0x68
    UIImageView * _rightChevronView; // +0x70
    UITapGestureRecognizer * _tapGestureRecognizer; // +0x78
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setupThankGuideUI;
- (double)_avatarContentWidth;
- (double)_textWidthForString:(id)arg1 font:(id)arg2;
- (void)layoutThankGuideView;
- (void)startThankGuideRotation;
- (void)rotateThankGuide;
- (void)updateThankGuideDisplay;
- (void)onTapped;
- (void)dealloc;
- (void)registerExtension;
- (void)unRegisterExtension;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)thankGuideList;
- (void)setThankGuideList:(id)arg1;
- (unsigned int)waitTime;
- (void)setWaitTime:(unsigned int)arg1;
- (unsigned long long)currentThankGuideIndex;
- (void)setCurrentThankGuideIndex:(unsigned long long)arg1;
- (id)contentContainer;
- (void)setContentContainer:(id)arg1;
- (id)avatarContainer;
- (void)setAvatarContainer:(id)arg1;
- (id)showWordingLabel;
- (void)setShowWordingLabel:(id)arg1;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg1;
- (id)jumpTextLabel;
- (void)setJumpTextLabel:(id)arg1;
- (id)showWording;
- (void)setShowWording:(id)arg1;
- (id)jumpTextWording;
- (void)setJumpTextWording:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (id)rightChevronView;
- (void)setRightChevronView:(id)arg1;
- (id)tapGestureRecognizer;
- (void)setTapGestureRecognizer:(id)arg1;
- (void).cxx_destruct;
@end
