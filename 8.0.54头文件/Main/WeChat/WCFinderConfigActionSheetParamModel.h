@interface WCFinderConfigActionSheetParamModel : NSObject
{
    BOOL _isAuthor; // +0x8
    BOOL _hasDislike; // +0x9
    BOOL _isNeedSticyTop; // +0xa
    BOOL _collectionFlag; // +0xb
    BOOL _hiddenDeleteItem; // +0xc
    BOOL _allowModMentionedDisplayStatus; // +0xd
    unsigned long long _viewerScene; // +0x10
}
- (id)initWithViewerScene:(unsigned long long)arg1;
- (BOOL)isAuthor;
- (void)setIsAuthor:(BOOL)arg1;
- (BOOL)hasDislike;
- (void)setHasDislike:(BOOL)arg1;
- (BOOL)isNeedSticyTop;
- (void)setIsNeedSticyTop:(BOOL)arg1;
- (BOOL)collectionFlag;
- (void)setCollectionFlag:(BOOL)arg1;
- (BOOL)hiddenDeleteItem;
- (void)setHiddenDeleteItem:(BOOL)arg1;
- (BOOL)allowModMentionedDisplayStatus;
- (void)setAllowModMentionedDisplayStatus:(BOOL)arg1;
- (unsigned long long)viewerScene;
- (void)setViewerScene:(unsigned long long)arg1;
@end

