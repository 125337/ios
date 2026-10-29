@interface WCFinderVideoProducerTemplateCellViewModel : NSObject <WCFinderVideoProducerLoadMoreViewModelProtocol>
{
    BOOL isLoadMoreCell; // +0x8
    BOOL _isFocused; // +0x9
    BOOL _isSelected; // +0xa
    BOOL _canShowProgressMaskView; // +0xb
    BOOL _isNewAITemplateComposingEnabled; // +0xc
    BOOL _isChangingTemplate; // +0xd
    unsigned long long initialStateForLoadMoreCell; // +0x10
    MJVideoTemplate * _mjVideoTemplate; // +0x18
    UIFont * _cachedTemplateNameScaledFont; // +0x20
    UIFont * _cachedSelectedTemplateNameScaledFont; // +0x28
    NSString * _cachedPreviewAnimFilePath; // +0x30
    long long _cellType; // +0x38
    long long _selectedStyle; // +0x40
    long long _cellOrder; // +0x48
    double _changingTemplateProgress; // +0x50
}
+ (id)sectionIdForType:(long long)arg1;
+ (long long)cellTypeFromId:(id)arg1;
+ (CGSize)cellViewSizeForType:(long long)arg1;
- (id)initWithMJVideoTemplate:(id)arg1;
- (void)bindByCellView:(id)arg1;
- (BOOL)isCellTypeSelectable;
- (long long)selectedStyle;
- (BOOL)shouldShowNewAIAssetReorderEntry;
- (BOOL)isCellTypeSupportedForPreviewAnimation;
- (void)videoProducerViewModel:(id)arg1 changeTemplateWillStart:(id)arg2;
- (void)videoProducerViewModel:(id)arg1 changeTemplateInfo:(id)arg2 completeSuccess:(BOOL)arg3;
- (void)videoProducerViewModel:(id)arg1 changeTemplateInfo:(id)arg2 progress:(double)arg3;
- (unsigned long long)initialStateForLoadMoreCell;
- (void)setInitialStateForLoadMoreCell:(unsigned long long)arg1;
- (BOOL)isLoadMoreCell;
- (void)setIsLoadMoreCell:(BOOL)arg1;
- (id)mjVideoTemplate;
- (void)setMjVideoTemplate:(id)arg1;
- (id)cachedTemplateNameScaledFont;
- (void)setCachedTemplateNameScaledFont:(id)arg1;
- (id)cachedSelectedTemplateNameScaledFont;
- (void)setCachedSelectedTemplateNameScaledFont:(id)arg1;
- (id)cachedPreviewAnimFilePath;
- (void)setCachedPreviewAnimFilePath:(id)arg1;
- (long long)cellType;
- (void)setCellType:(long long)arg1;
- (void)setSelectedStyle:(long long)arg1;
- (BOOL)isFocused;
- (void)setIsFocused:(BOOL)arg1;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (long long)cellOrder;
- (void)setCellOrder:(long long)arg1;
- (BOOL)canShowProgressMaskView;
- (void)setCanShowProgressMaskView:(BOOL)arg1;
- (BOOL)isNewAITemplateComposingEnabled;
- (void)setIsNewAITemplateComposingEnabled:(BOOL)arg1;
- (BOOL)isChangingTemplate;
- (void)setIsChangingTemplate:(BOOL)arg1;
- (double)changingTemplateProgress;
- (void)setChangingTemplateProgress:(double)arg1;
- (void).cxx_destruct;
@end
