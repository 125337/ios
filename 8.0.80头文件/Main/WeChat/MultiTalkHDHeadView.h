@interface MultiTalkHDHeadView : UIView <MessageObserverDelegate, IStrangerContactMgrExt>
{
    BOOL _m_vaild; // +0x8
    BOOL _isCheckingNANEnable; // +0x9
    UIImageView * _m_headView; // +0x10
    CBaseContact * _m_contact; // +0x18
    NSString * _m_headImgUrl; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)updateContact:(id)arg1;
- (void)updateHeadImageUrl:(id)arg1 contact:(id)arg2;
- (void)updateNormalHeadToView;
- (BOOL)updateHDHeadToView;
- (void)dealloc;
- (void)downloadHDHeadImage;
- (id)getRealUserName:(id)arg1;
- (void)internalGetImageForUrl;
- (void)internalGetImageForUsername;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (void)onStrangerContactUpdateForbidden:(id)arg1;
- (BOOL)m_vaild;
- (void)setM_vaild:(BOOL)arg1;
- (BOOL)isCheckingNANEnable;
- (void)setIsCheckingNANEnable:(BOOL)arg1;
- (id)m_headView;
- (void)setM_headView:(id)arg1;
- (id)m_contact;
- (void)setM_contact:(id)arg1;
- (id)m_headImgUrl;
- (void)setM_headImgUrl:(id)arg1;
- (void).cxx_destruct;
@end
