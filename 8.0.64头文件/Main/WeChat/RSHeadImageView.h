@interface RSHeadImageView : MMUIView
{
    int _status; // +0x8
    UILabel * _displayNameWhite; // +0x10
    UIImageView * _normalBg; // +0x18
    UIImageView * _statusBGView; // +0x20
    UIImageView * _statusView; // +0x28
    UIImageView * _selectedView; // +0x30
    MMHeadImageView * _imageView; // +0x38
    RadarSearchMember * _member; // +0x40
    NSString * _verifyTicket; // +0x48
    id <RSHeadImageViewDelegate> _delegate; // +0x50
    int m_iPointIndex; // +0x58
    CContact * m_contact; // +0x60
}
+ (CGSize)getHeadImageSize;
- (id)initWithRadarSearchMember:(id)arg1;
- (void)initView;
- (void)initBackgroundView;
- (void)initHeadImageView;
- (void)updateStatusView;
- (void)doStatusPopupAnimation;
- (void)afterStatusViewHide;
- (void)hideStatusView;
- (void)showStatusView;
- (void)animationShowDidStop;
- (void)initStatusView;
- (void)setRemarkName:(id)arg1;
- (id)getDisplayName;
- (id)genDisplayNameLabel;
- (void)initDisplayNameView;
- (void)OnClickHeadImageView;
- (id)member;
- (void)setMember:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (int)status;
- (void)setStatus:(int)arg1;
- (id)verifyTicket;
- (void)setVerifyTicket:(id)arg1;
- (int)m_iPointIndex;
- (void)setM_iPointIndex:(int)arg1;
- (id)m_contact;
- (void)setM_contact:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
