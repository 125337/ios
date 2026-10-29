@interface WCBizInfoGroup : NSObject
{
    NSMutableArray * m_arrayItem; // +0x8
    NSString * m_error; // +0x10
    NSString * m_footerTip; // +0x18
    NSString * m_headerTip; // +0x20
    UILabel * m_tipLabel; // +0x28
    NSString * m_footerTipsTitle; // +0x30
    NSString * m_footerTipsContent; // +0x38
}
- (id)initWithFooterTip:(id)arg1 headerTip:(id)arg2 error:(id)arg3;
- (id)initWithFooterTip:(id)arg1 footerTipTitle:(id)arg2 footerTipsContent:(id)arg3 headerTip:(id)arg4 error:(id)arg5;
- (void)dealloc;
- (void)setError:(id)arg1;
- (void)addItem:(id)arg1;
- (id)getTipLabel;
- (id)m_arrayItem;
- (void)setM_arrayItem:(id)arg1;
- (id)m_error;
- (void)setM_error:(id)arg1;
- (id)m_footerTip;
- (void)setM_footerTip:(id)arg1;
- (id)m_headerTip;
- (void)setM_headerTip:(id)arg1;
- (id)m_footerTipsTitle;
- (void)setM_footerTipsTitle:(id)arg1;
- (id)m_footerTipsContent;
- (void)setM_footerTipsContent:(id)arg1;
- (void).cxx_destruct;
@end

