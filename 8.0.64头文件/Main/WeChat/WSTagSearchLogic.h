@interface WSTagSearchLogic : NSObject
{
    BOOL _bForbidTagDeletion; // +0x8
    id <WSTagSearchDelegate> _deletage; // +0x10
    NSString * _tipsWhenEmptyNormalText; // +0x18
    MMUISearchBar * _searchBar; // +0x20
    MMTagTextField * _textField; // +0x28
    NSMutableArray * _tagList; // +0x30
    NSString * _tagText; // +0x38
    NSString * _normalText; // +0x40
}
- (id)initWithTagSearchBar:(id)arg1;
- (id)initWithTagTextField:(id)arg1;
- (void)dealloc;
- (void)setTagHolders:(id)arg1 withNormalText:(id)arg2;
- (BOOL)tagSearchObj:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)tagSearchBarTextDidChanged:(id)arg1;
- (void)handleNormalTextChanged:(id)arg1;
- (void)handleSearchInputChanged:(id)arg1;
- (id)getTagQueryInfo:(id)arg1;
- (id)userQuery:(id)arg1;
- (id)getTagList;
- (id)getTagText;
- (void)resetTagSearchStatus;
- (id)getFont;
- (void)setTagAttributeText:(id)arg1;
- (void)resetTypingAttributes;
- (void)updateTagText;
- (id)getSearchInputViewColor;
- (void)updateTagSearchContent;
- (void)updateSearchBarCustomTips;
- (void)hiddenSearchBarCustomTips;
- (void)setTipsWhenEmptyNormalText:(id)arg1;
- (id)getCurrentTips;
- (id)getTagSearchText;
- (id)deletage;
- (void)setDeletage:(id)arg1;
- (BOOL)bForbidTagDeletion;
- (void)setBForbidTagDeletion:(BOOL)arg1;
- (id)tipsWhenEmptyNormalText;
- (id)searchBar;
- (void)setSearchBar:(id)arg1;
- (id)textField;
- (void)setTextField:(id)arg1;
- (id)tagList;
- (void)setTagList:(id)arg1;
- (id)tagText;
- (void)setTagText:(id)arg1;
- (id)normalText;
- (void)setNormalText:(id)arg1;
- (void).cxx_destruct;
@end
