@interface LiveLuckyBagTextMessageCellView : TextMessageCellView
{
    UIButton * m_sourceButton; // +0xa8
}
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)setViewModel:(id)arg1;
- (BOOL)touchIntoSelectCopyState;
- (BOOL)canShowRevokeMsgMenuItem;
- (id)operationMenuItems;
- (void)layoutContentView;
- (void)initSourceLabel;
- (void)reportClick:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

