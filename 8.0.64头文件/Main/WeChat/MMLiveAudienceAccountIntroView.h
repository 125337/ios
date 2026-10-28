@interface MMLiveAudienceAccountIntroView : MMPageSheetBaseView <UIGestureRecognizerDelegate>
{
    id <MMLiveAudienceAccountIntroViewDelegate> _operationDelegate; // +0x8
    MMFinderLiveTaskId * _taskId; // +0x10
    unsigned long long _viewScene; // +0x18
    UILabel * _introTitleLabel; // +0x20
    MMUILabel * _introDetailLabel; // +0x28
    UIButton * _chooseRoleButton; // +0x30
    UIButton * _enterLiveButton; // +0x38
    UIView * _contentView; // +0x40
    CAShapeLayer * _shapeLayer; // +0x48
    UIVisualEffectView * _visualEfView; // +0x50
}
- (id)initWithTaskId:(id)arg1 andScene:(unsigned long long)arg2;
- (void)dealloc;
- (void)initUI;
- (void)layoutUI;
- (void)layoutSubviews;
- (double)contentViewHeight;
- (void)onChooseButtonClicked;
- (void)onEnterLiveButtonClicked;
- (id)operationDelegate;
- (void)setOperationDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (unsigned long long)viewScene;
- (void)setViewScene:(unsigned long long)arg1;
- (id)introTitleLabel;
- (void)setIntroTitleLabel:(id)arg1;
- (id)introDetailLabel;
- (void)setIntroDetailLabel:(id)arg1;
- (id)chooseRoleButton;
- (void)setChooseRoleButton:(id)arg1;
- (id)enterLiveButton;
- (void)setEnterLiveButton:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)shapeLayer;
- (void)setShapeLayer:(id)arg1;
- (id)visualEfView;
- (void)setVisualEfView:(id)arg1;
- (void).cxx_destruct;
@end
