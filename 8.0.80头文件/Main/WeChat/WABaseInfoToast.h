@interface WABaseInfoToast : MMUIView
{
    BOOL m_isMoving; // +0x8
    MMTimer * m_autoDismissTimer; // +0x10
    BOOL _isNeedAutoDismiss; // +0x18
    id <WABaseInfoToastDelegate> _delegate; // +0x20
    long long _showTimeStamp; // +0x28
    UIView * _parentView; // +0x30
}
- (void)dealloc;
- (void)layoutSubviews;
- (void)showInView:(id)arg1;
- (void)autoDismiss;
- (void)dismissWithAnimation:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isNeedAutoDismiss;
- (void)setIsNeedAutoDismiss:(BOOL)arg1;
- (long long)showTimeStamp;
- (void)setShowTimeStamp:(long long)arg1;
- (id)parentView;
- (void)setParentView:(id)arg1;
- (void).cxx_destruct;
@end
