@interface MMStoreEmoticonPreviewCell : MMStoreEmotionBaseAllCell <MMEmoticonStoreDownloadLogicDelegate, EmoticonStoreItemExt>
{
    BOOL _disableDownload; // +0x8
    BOOL _didLoadCacheLinkInfo; // +0x9
    EmotionLinkInfo * _linkInfo; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setMsgBrowseStyleWithDownloadable:(BOOL)arg1;
- (id)downloadLogicConfig;
- (void)updateStoreItem:(id)arg1;
- (void)updateWithLinkInfo:(id)arg1;
- (void)updateLinkInfoLayout;
- (void)updateNameWithArrow;
- (void)OnEmoticonStoreItemChanged:(id)arg1;
- (void)layoutSubviews;
- (void)layoutBaseViewContainer;
- (void)updateAccessibilityLabel;
- (BOOL)disableDownload;
- (void)setDisableDownload:(BOOL)arg1;
- (id)linkInfo;
- (void)setLinkInfo:(id)arg1;
- (BOOL)didLoadCacheLinkInfo;
- (void)setDidLoadCacheLinkInfo:(BOOL)arg1;
- (void).cxx_destruct;
@end
