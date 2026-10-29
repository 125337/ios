@interface WCPayRoundTextViewDataView : UIView <WCPayVoidCallbackDelegate>
{
    KindaRichLabelViewV2 * _m_text; // +0x8
    RoundTextViewData * _m_viewData; // +0x10
    double _m_maxWidth; // +0x18
}
- (void)updateViewData:(id)arg1 maxWidth:(double)arg2;
- (void)layoutSubviews;
- (void)updateView;
- (void)updateText;
- (void)onWCPayVoidCallbackWithUserInfo:(id)arg1;
- (id)m_text;
- (void)setM_text:(id)arg1;
- (id)m_viewData;
- (void)setM_viewData:(id)arg1;
- (double)m_maxWidth;
- (void)setM_maxWidth:(double)arg1;
- (void).cxx_destruct;
@end

