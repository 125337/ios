@interface NewContactsItemCell : MMMultiMenuTableViewCell <ContactsItemViewDelegate>
{
    ContactsItemView * m_contactsItemView; // +0x40
    BOOL _m_bHideOpenIMDesc; // +0x48
    BOOL _bAlwayShowDefaultImage; // +0x49
    BOOL _bShowTextState; // +0x4a
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initContactItemView;
- (id)contactsItemView;
- (void)prepareForReuse;
- (void)updateWithContact:(id)arg1;
- (BOOL)m_bHideOpenIMDesc;
- (void)setM_bHideOpenIMDesc:(BOOL)arg1;
- (BOOL)bAlwayShowDefaultImage;
- (void)setBAlwayShowDefaultImage:(BOOL)arg1;
- (BOOL)bShowTextState;
- (void)setBShowTextState:(BOOL)arg1;
- (void).cxx_destruct;
@end

