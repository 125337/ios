@interface WCFinderProfileOverviewQASecCtrl : WCFinderProfileOverviewBaseSectionCtrl <WCFinderLiteAppFixedEmbdaViewDelegate>
{
    BOOL _needSaveCacheHeight; // +0x8
    UIView * _maskView; // +0x10
    FinderLiteAppParam * _params; // +0x18
    WCFinderLiteAppFixedEmbdaView * _embdaView; // +0x20
    OpenLiteAppInfo * _liteAppInfo; // +0x28
    CGSize _displaySize; // +0x30
}
+ (id)sectionDefines;
+ (id)appendHalfStyleArgument:(id)arg1 isHalfScreen:(BOOL)arg2;
+ (void)setupRegister:(id)arg1;
- (void)setModel:(id)arg1;
- (id)qaInfo;
- (id)sectionTitle;
- (long long)moreBtnType;
- (void)setContactViewModel:(id)arg1;
- (id)sections;
- (SectionItems)itemsForSection:(id)arg1 index:(long long)arg2;
- (id)cellForItemIdentifier:(id)arg1 collectionView:(id)arg2;
- (CGSize)itemSizeForItem:(id)arg1 collectionView:(id)arg2;
- (BOOL)showBottomJumpTabButton;
- (void)onLiteAppEmbdaViewSizeChanged:(id)arg1;
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)embdaView;
- (void)setEmbdaView:(id)arg1;
- (id)liteAppInfo;
- (void)setLiteAppInfo:(id)arg1;
- (CGSize)displaySize;
- (void)setDisplaySize:(CGSize)arg1;
- (BOOL)needSaveCacheHeight;
- (void)setNeedSaveCacheHeight:(BOOL)arg1;
- (void).cxx_destruct;
@end

