@interface WNOpenParameter : MMObject
{
    BOOL _bEditable; // +0x8
    BOOL _bForbidShowMoreMenu; // +0x9
    BOOL _bNeedTriggerDataEdited; // +0xa
    BOOL _bNeedForceShowKeyboard; // +0xb
    BOOL _bAnimate; // +0xc
    BOOL _bShowLocateToMsg; // +0xd
    BOOL _bShowFullScreen; // +0xe
    unsigned int _vcType; // +0x10
    UINavigationController * _navigationController; // +0x18
    unsigned long long _enPushType; // +0x20
    unsigned long long _scene; // +0x28
    long long _entryScene; // +0x30
    FavoritesItem * _favItem; // +0x38
    FavoritesItemDataField * _data; // +0x40
    CMessageWrap * _messageWrap; // +0x48
    WCDataItem * _wcDataItem; // +0x50
    FavoritesItemDataField * _scrollToData; // +0x58
    id /* block */ _viewDidAppearCompletion; // +0x60
    id /* block */ _pushCompletion; // +0x68
    id /* block */ _shouldPush; // +0x70
    id /* block */ _pushTransitionCompletion; // +0x78
    NSString * _plusSessionId; // +0x80
    WeNoteFlutterExpandTransitionConfig * _expandTransitionConfig; // +0x88
}
- (id)init;
- (id)navigationController;
- (void)setNavigationController:(id)arg1;
- (unsigned long long)enPushType;
- (void)setEnPushType:(unsigned long long)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (long long)entryScene;
- (void)setEntryScene:(long long)arg1;
- (id)favItem;
- (void)setFavItem:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (id)messageWrap;
- (void)setMessageWrap:(id)arg1;
- (id)wcDataItem;
- (void)setWcDataItem:(id)arg1;
- (BOOL)bEditable;
- (void)setBEditable:(BOOL)arg1;
- (BOOL)bForbidShowMoreMenu;
- (void)setBForbidShowMoreMenu:(BOOL)arg1;
- (id)scrollToData;
- (void)setScrollToData:(id)arg1;
- (BOOL)bNeedTriggerDataEdited;
- (void)setBNeedTriggerDataEdited:(BOOL)arg1;
- (BOOL)bNeedForceShowKeyboard;
- (void)setBNeedForceShowKeyboard:(BOOL)arg1;
- (unsigned int)vcType;
- (void)setVcType:(unsigned int)arg1;
- (BOOL)bAnimate;
- (void)setBAnimate:(BOOL)arg1;
- (id /* block */)viewDidAppearCompletion;
- (void)setViewDidAppearCompletion:(id /* block */)arg1;
- (id /* block */)pushCompletion;
- (void)setPushCompletion:(id /* block */)arg1;
- (id /* block */)shouldPush;
- (void)setShouldPush:(id /* block */)arg1;
- (id /* block */)pushTransitionCompletion;
- (void)setPushTransitionCompletion:(id /* block */)arg1;
- (BOOL)bShowLocateToMsg;
- (void)setBShowLocateToMsg:(BOOL)arg1;
- (BOOL)bShowFullScreen;
- (void)setBShowFullScreen:(BOOL)arg1;
- (id)plusSessionId;
- (void)setPlusSessionId:(id)arg1;
- (id)expandTransitionConfig;
- (void)setExpandTransitionConfig:(id)arg1;
- (void).cxx_destruct;
@end
