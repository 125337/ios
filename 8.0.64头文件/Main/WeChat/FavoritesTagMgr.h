@interface FavoritesTagMgr : MMObject <PBMessageObserverDelegate>
{
    NSMutableArray * m_editingLocalIds; // +0x8
    NSString * m_editingTag; // +0x10
    NSString * m_newTag; // +0x18
    id /* block */ m_tagEditHandler; // +0x20
    unsigned int m_editingTagId; // +0x28
    NSMutableArray * m_editingItemArr; // +0x30
    NSArray * m_editingTagArr; // +0x38
    NSMutableArray * m_bindTagRequestArr; // +0x40
    NSMutableDictionary * m_editingItemDic; // +0x48
    BOOL m_editContainFail; // +0x50
    MyFavoritesDB * _favDB; // +0x58
    NSRecursiveLock * m_lock; // +0x60
    NSMutableDictionary * m_tag2TagIdDic; // +0x68
    NSMutableDictionary * m_tagId2TagDic; // +0x70
    NSMutableDictionary * m_tagItemDic; // +0x78
    NSMutableDictionary * m_dbTagId2TagDic; // +0x80
    id <FavoritesTagMgrDelegate> m_delegate; // +0x88
}
- (void)initDB:(id)arg1;
- (id)getAllTags;
- (void)loadAllFavFags;
- (unsigned int)getTagId:(id)arg1;
- (id)getTagsFromIdList:(id)arg1;
- (id)getValidTagsFromIdList:(id)arg1;
- (BOOL)saveAllTags;
- (BOOL)processTagsFromServer:(id)arg1;
- (void)getAllTagsFromServer;
- (void)HandleGetAllTagsResp:(id)arg1 Event:(unsigned int)arg2;
- (void)newUpdateItems:(id)arg1 tags:(id)arg2 mode:(unsigned long long)arg3 withCompletion:(id /* block */)arg4;
- (void)processBatchBindTag;
- (void)HandleBatchBindTagResp:(id)arg1 Event:(unsigned int)arg2;
- (void)updateItems:(id)arg1 tags:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)updateTagForItem:(id)arg1;
- (void)HandleModifyFavItemResp:(id)arg1 Event:(unsigned int)arg2;
- (void)newUpdateTag:(id)arg1 to:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)renameTagNameFrom:(id)arg1 withId:(unsigned int)arg2 to:(id)arg3;
- (void)HandleRenameTagResp:(id)arg1 Event:(unsigned int)arg2;
- (void)deleteTagWithId:(unsigned int)arg1;
- (void)HandleDeleteTagResp:(id)arg1 Event:(unsigned int)arg2;
- (void)updateTag:(id)arg1 to:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)startBatchUpdateTag;
- (void)updateTagInFavItem:(id)arg1;
- (void)HandleBatchModifyFavItemResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
