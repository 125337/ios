@interface MMWebAddContactView : MMUIView <PBMessageObserverDelegate>
{
    NSString * m_nsUsrName; // +0x8
    JSEvent * m_nsCallBack; // +0x10
    id <WebAddContactDelegate> m_delegate; // +0x18
    int m_scene; // +0x20
    MMLoadingView * m_loadingView; // +0x28
    CContact * m_oContact; // +0x30
    WOAPPrivacyConfirmLogic * _privacyConfirmLogic; // +0x38
    NSString * _reportInfo; // +0x40
    NSString * _scenenote; // +0x48
    NSString * _finderBuffer; // +0x50
}
- (id)initWithUsrName:(id)arg1 CallBack:(id)arg2;
- (void)dealloc;
- (void)initView;
- (void)initLoadingView;
- (void)UpdateView:(unsigned int)arg1;
- (void)UpdateView:(unsigned int)arg1 errMsg:(id)arg2;
- (id)generateCustomViewForContact;
- (id)generateTextLabel:(id)arg1 frame:(CGRect)arg2 fontSize:(double)arg3 numberOfLines:(unsigned long long)arg4;
- (void)layoutSubviewToOrientation:(long long)arg1;
- (void)OnCancel;
- (void)OnAdd;
- (void)OnConfirm:(long long)arg1;
- (void)OnAddOk;
- (void)CreateSearch;
- (void)CreateVerify;
- (void)HandleContact:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (int)m_scene;
- (void)setM_scene:(int)arg1;
- (id)reportInfo;
- (void)setReportInfo:(id)arg1;
- (id)scenenote;
- (void)setScenenote:(id)arg1;
- (id)finderBuffer;
- (void)setFinderBuffer:(id)arg1;
- (void).cxx_destruct;
@end

