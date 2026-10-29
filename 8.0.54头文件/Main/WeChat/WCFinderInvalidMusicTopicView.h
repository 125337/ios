@interface WCFinderInvalidMusicTopicView : UIView
{
    int _errorCode; // +0x8
    id <WCFinderInvalidMusicTopicViewDelegate> _delegate; // +0x10
    UIImageView * _iconView; // +0x18
    UILabel * _titleLabel; // +0x20
    UILabel * _descLabel; // +0x28
    UIButton * _confirmButton; // +0x30
    NSString * _errMsg; // +0x38
}
- (id)initWithFrame:(CGRect)arg1 errorCode:(int)arg2 errMsg:(id)arg3;
- (id)iconView;
- (id)titleLabel;
- (id)descLabel;
- (id)confirmButton;
- (void)layoutUI;
- (void)onConfirmButtonClick;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setConfirmButton:(id)arg1;
- (int)errorCode;
- (void)setErrorCode:(int)arg1;
- (id)errMsg;
- (void)setErrMsg:(id)arg1;
- (void).cxx_destruct;
@end

