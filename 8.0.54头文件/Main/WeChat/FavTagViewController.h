@interface FavTagViewController : TagViewController <FavTagEditViewDelegate, IFavoritesExt>
{
    FavoritesItem * m_favItem; // +0xb8
    NSArray * m_arrFavItems; // +0xc0
    int m_editSource; // +0xc8
    unsigned long long m_tagEditMode; // +0xd0
    id <FavTagViewDelegate> m_delegate; // +0xd8
    BOOL _isFromToast; // +0xe0
    int _editSourcePage; // +0xe4
}
- (id)initWithFavItem:(id)arg1;
- (id)initWithFavItems:(id)arg1;
- (void)viewDidLoad;
- (void)editCancel;
- (void)editDone:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (int)m_editSource;
- (void)setM_editSource:(int)arg1;
- (int)editSourcePage;
- (void)setEditSourcePage:(int)arg1;
- (BOOL)isFromToast;
- (void)setIsFromToast:(BOOL)arg1;
- (void).cxx_destruct;
@end

