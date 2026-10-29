@interface WNSaverContext : MMObject
{
    BOOL _inList; // +0x8
    NSDate * _modifyTime; // +0x10
    FavoritesItem * _favItem; // +0x18
    NSString * _remianHTML; // +0x20
    NSString * _title; // +0x28
    WNContentStorage * _wnContent; // +0x30
    RTESectionMgr * _sectionMgr; // +0x38
    WNHtmlStringBuilder * _htmlBuilder; // +0x40
    id /* block */ _saveHandler; // +0x48
    id /* block */ _openHandler; // +0x50
}
- (id)modifyTime;
- (void)setModifyTime:(id)arg1;
- (id)favItem;
- (void)setFavItem:(id)arg1;
- (id)remianHTML;
- (void)setRemianHTML:(id)arg1;
- (BOOL)inList;
- (void)setInList:(BOOL)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)wnContent;
- (void)setWnContent:(id)arg1;
- (id)sectionMgr;
- (void)setSectionMgr:(id)arg1;
- (id)htmlBuilder;
- (void)setHtmlBuilder:(id)arg1;
- (id /* block */)saveHandler;
- (void)setSaveHandler:(id /* block */)arg1;
- (id /* block */)openHandler;
- (void)setOpenHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end

