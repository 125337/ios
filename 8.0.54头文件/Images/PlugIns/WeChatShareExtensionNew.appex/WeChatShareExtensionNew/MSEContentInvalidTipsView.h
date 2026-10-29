@interface MSEContentInvalidTipsView : UIView <MSEShareButtonPannelViewDelegate, MSETitleBarDelegate>
{
    id <MSEContentInvalidTipsViewDelegate> _delegate; // +0x8
    NSString * _tipsContent; // +0x10
    long long _contentType; // +0x18
    UILabel * _contentLabel; // +0x20
}
+ (double)getContentInvalidViewHeight:(long long)arg1;
- (id)initTipsViewWithContainerWidth:(double)arg1 contentType:(long long)arg2;
- (void)setTipsContent:(id)arg1 andContentType:(long long)arg2;
- (void)initSubview;
- (void)onPannelViewConfirmBtnPress;
- (void)onLeftBtnPress:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tipsContent;
- (void)setTipsContent:(id)arg1;
- (long long)contentType;
- (void)setContentType:(long long)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (void).cxx_destruct;
@end

