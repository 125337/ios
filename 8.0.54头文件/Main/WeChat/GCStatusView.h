@interface GCStatusView : UIView
{
    BOOL _isPureText; // +0x8
    MMWebImageView * _stateIconView; // +0x10
    NSString * _statusDesc; // +0x18
    NSString * _fixedStatusDesc; // +0x20
    UILabel * _statusLabel; // +0x28
    CGSize _initSize; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)configureBgColor:(id)arg1 imgUrl:(id)arg2 statusDesc:(id)arg3 needFold:(BOOL)arg4 needAnimation:(BOOL)arg5;
- (void)playAnimation;
- (void)configureFoldStatus:(BOOL)arg1;
- (void)hideStatusLabel;
- (double)leftMarginForTextStatus;
- (id)stateIconView;
- (void)setStateIconView:(id)arg1;
- (id)statusDesc;
- (void)setStatusDesc:(id)arg1;
- (id)fixedStatusDesc;
- (void)setFixedStatusDesc:(id)arg1;
- (id)statusLabel;
- (void)setStatusLabel:(id)arg1;
- (CGSize)initSize;
- (void)setInitSize:(CGSize)arg1;
- (BOOL)isPureText;
- (void)setIsPureText:(BOOL)arg1;
- (void).cxx_destruct;
@end

