@interface ShareView : UIView
{
    id <ShareViewDelegate><NSObject> _delegate; // +0x8
    UILabel * _shareLabel; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onClickShareLabel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)shareLabel;
- (void)setShareLabel:(id)arg1;
- (void).cxx_destruct;
@end
