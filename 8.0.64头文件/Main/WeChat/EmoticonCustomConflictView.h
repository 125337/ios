@interface EmoticonCustomConflictView : UICollectionReusableView
{
    unsigned long long _limit; // +0x8
    UILabel * _m_comflictWordingLabel; // +0x10
    UIButton * _m_closeButton; // +0x18
    id <CustomEmoticonConflictViewDelegate> _m_delegate; // +0x20
}
- (void)layoutWithSize:(CGSize)arg1;
- (void)initView;
- (void)initComflictWordingLabel;
- (void)initCloseButton;
- (void)setLimit:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)onClickClose;
- (unsigned long long)limit;
- (id)m_comflictWordingLabel;
- (void)setM_comflictWordingLabel:(id)arg1;
- (id)m_closeButton;
- (void)setM_closeButton:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
