@interface WCAdInteractionTagLogic : WCAdvertiseOperationLogicBase
{
    BOOL _isInteractionActive; // +0x8
    WCAdPagView * _activeIconPagViewCache; // +0x10
    WCDataItem * _dataItem; // +0x18
    unsigned long long _contentItemScene; // +0x20
}
+ (id)getLogicWithDataItem:(id)arg1 contentItemScene:(unsigned long long)arg2;
- (id)initWithDataItem:(id)arg1 contentItemScene:(unsigned long long)arg2;
- (void)dealloc;
- (void)setIsInteractionActive:(BOOL)arg1;
- (void)realSetInteractionNotActivated;
- (void)notifyInteractionActiveStateChanged;
- (id)activeIconPagViewCache;
- (void)setActiveIconPagViewCache:(id)arg1;
- (BOOL)isInteractionActive;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (unsigned long long)contentItemScene;
- (void)setContentItemScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

