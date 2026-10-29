@interface WCRedEnvelopeFlowViewDetailView : UIView <WCRedEnvelopesReceiveHomeTemplateViewDelegate>
{
    UIView * _m_skinBackgroundView; // +0x8
    UILabel * _m_corpNameLabel; // +0x10
    UILabel * _overtimeLabel; // +0x18
    UIButton * _m_doneBtn; // +0x20
    UIButton * _m_previewBtn; // +0x28
    UIButton * _m_closeBtn; // +0x30
    WCRedEnvelopesReceiveHomeTemplateItem * _m_templateItem; // +0x38
    WCRedEnvelopesReceiveHomeTemplateView * _templateItemView; // +0x40
    HbEnvelopSource * _hbShowResource; // +0x48
    id <WCRedEnvelopeFlowViewDetailViewDelegate> _m_delegate; // +0x50
}
- (void)endAnimation;
- (void)showAnimation;
- (void)removeView;
- (id)getTemplateItemData:(id)arg1;
- (void)updateViewWithData:(id)arg1;
- (void)updateView;
- (void)OnCancelButtonDone;
- (void)onTapUseCoverBtn;
- (void)onPreviewBtnTap;
- (void)gotoPreview;
- (id)m_skinBackgroundView;
- (void)setM_skinBackgroundView:(id)arg1;
- (id)m_corpNameLabel;
- (void)setM_corpNameLabel:(id)arg1;
- (id)overtimeLabel;
- (void)setOvertimeLabel:(id)arg1;
- (id)m_doneBtn;
- (void)setM_doneBtn:(id)arg1;
- (id)m_previewBtn;
- (void)setM_previewBtn:(id)arg1;
- (id)m_closeBtn;
- (void)setM_closeBtn:(id)arg1;
- (id)m_templateItem;
- (void)setM_templateItem:(id)arg1;
- (id)templateItemView;
- (void)setTemplateItemView:(id)arg1;
- (id)hbShowResource;
- (void)setHbShowResource:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
