@interface MultiTalkMessageViewModel : BaseMessageViewModel
{
    NSDictionary * m_contentJsonDict; // +0x60
    double m_headerContentHeight; // +0x68
    double m_nodeContentWidth; // +0x70
    double m_nodeContentHeight; // +0x78
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (void)initMultiTalkNodeViewData;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (id)contentJsonDict;
- (double)headerContentHeight;
- (double)nodeContentWidth;
- (double)nodeContentHeight;
- (void).cxx_destruct;
@end

