@interface MMMusicLiveCommentStatusView : UIView
{
    UILabel * _currentLabel; // +0x8
    UILabel * _historyLabel; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)setCurrentAudience:(unsigned long long)arg1;
- (id)currentLabel;
- (void)setCurrentLabel:(id)arg1;
- (id)historyLabel;
- (void)setHistoryLabel:(id)arg1;
- (void).cxx_destruct;
@end
