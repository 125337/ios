@interface FavTagHintView : MMUIView <UITableViewDelegate, UITableViewDataSource>
{
    NSMutableArray * m_arrHints; // +0x8
    NSString * m_currentInput; // +0x10
    id <FavTagEditViewDelegate> m_delegate; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initData;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_arrHints;
- (void)setM_arrHints:(id)arg1;
- (id)m_currentInput;
- (void)setM_currentInput:(id)arg1;
- (void).cxx_destruct;
@end

