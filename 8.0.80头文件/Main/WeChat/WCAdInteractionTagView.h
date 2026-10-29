@interface WCAdInteractionTagView : MMUIView <IWCAdInteractionTagLogicExt>
{
    BOOL _isDetail; // +0x8
    WCAdInteractionTagInfo * _adInteractionTagInfo; // +0x10
    WCDataItem * _dataItem; // +0x18
    WCAdURLImageView * _normalIconImage; // +0x20
    WCAdPagView * _activeIconPag; // +0x28
    MMUILabel * _titleLabel; // +0x30
    MMUILabel * _descLabel; // +0x38
}
- (id)initWithFrame:(CGRect)arg1 dataItem:(id)arg2 isDetail:(BOOL)arg3;
- (void)dealloc;
- (void)initView;
- (void)updateView;
- (void)adjustView;
- (id)normalIconImage;
- (id)activeIconPag;
- (id)titleLabel;
- (id)descLabel;
- (id)interactionTagLogic;
- (void)onInteractionActiveStateChanged:(id)arg1 contentItemScene:(unsigned long long)arg2 isActive:(BOOL)arg3;
- (id)adInteractionTagInfo;
- (void)setAdInteractionTagInfo:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (BOOL)isDetail;
- (void)setIsDetail:(BOOL)arg1;
- (void)setNormalIconImage:(id)arg1;
- (void)setActiveIconPag:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void).cxx_destruct;
@end
