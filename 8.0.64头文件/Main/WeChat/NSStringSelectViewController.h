@interface NSStringSelectViewController : MMUIViewController
{
    MMTableViewInfo * m_tableViewInfo; // +0x70
    id m_targetOnSelect; // +0x78
    SEL m_selOnSelect; // +0x80
    WCTableViewNormalCellManager * m_oTableViewCellInfo; // +0x88
    NSArray * m_arrString; // +0x90
    BOOL _bPresentModel; // +0x98
    NSString * _selected; // +0xa0
}
- (void)initView;
- (void)viewWillLayoutSubviews;
- (void)OnCancel;
- (void)OnDone;
- (void)updateTableViewWithArray:(id)arg1 selected:(id)arg2;
- (id)initWithArray:(id)arg1 selected:(id)arg2;
- (void)setOnSelectTarget:(id)arg1 sel:(SEL)arg2;
- (void)setFooterTip:(id)arg1 section:(unsigned int)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)OnSelectCell:(id)arg1;
- (BOOL)bPresentModel;
- (void)setBPresentModel:(BOOL)arg1;
- (id)selected;
- (void)setSelected:(id)arg1;
- (void).cxx_destruct;
@end
