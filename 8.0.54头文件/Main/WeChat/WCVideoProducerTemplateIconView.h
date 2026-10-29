@interface WCVideoProducerTemplateIconView : UICollectionViewCell <MMWebImageViewDelegate, WCMVVMViewComponent>
{
    PAGFile * _pagFile; // +0x8
    BOOL _isTemplateCellSelected; // +0x10
    WCVideoProducerTemplateCellViewModel * _templateCellViewModel; // +0x18
    UIView * _templateIconContainerView; // +0x20
    MMWebImageView * _templateIconImageView; // +0x28
    UIView * _templateIconBackgroundView; // +0x30
    UILabel * _templateNameLabel; // +0x38
    PAGView * _loadingPagView; // +0x40
    UIView * _selectedMaskView; // +0x48
    UIView * _selectedDefaultView; // +0x50
    UIView * _selectedEditableView; // +0x58
    WCProgressMaskView * _progressMaskView; // +0x60
}
+ (id)cellIdentifier;
+ (id)headerIdentifier;
+ (CGSize)iconSize;
+ (CGSize)cellViewSize;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)loadTemplateCellViewModel:(id)arg1;
- (void)_loadForNormalCellView:(id)arg1;
- (void)_loadForStubCellView:(id)arg1;
- (void)_loadForFolderCellView:(id)arg1;
- (void)_loadForLauncherCellView:(id)arg1;
- (void)_updateTemplateNameWithCellVM:(id)arg1;
- (void)_updateProgressMaskViewWithCellVM:(id)arg1;
- (void)_relayoutTemplateNameLabel:(id)arg1 maxWidth:(double)arg2;
- (void)_relayoutSelectedMaskView:(id)arg1;
- (void)_loadForAccessbility;
- (void)_initView;
- (id)loadingPagFile;
- (void)_setRoundedRectangle;
- (void)_setRounded;
- (void)_initSelectedEditableIconMaskViewIfNeeded;
- (void)_initSelectedEditableIconBrandViewIfNeeded;
- (void)_relayoutSelectedEditableView;
- (void)_initSelectedDefaultViewIfNeeded;
- (void)_relayoutSelectedDefaultView;
- (void)onLoadImageOK:(id)arg1;
- (void)didChangeViewModel:(id)arg1 fromOldObject:(id)arg2 toNewObject:(id)arg3;
- (void)viewModel:(id)arg1 didChangeProperty:(id)arg2 fromOldValue:(id)arg3 toNewValue:(id)arg4;
- (id)observingPropertyKeyPathsForViewModel;
- (void)updateSubviewForPropertyKeyPath:(id)arg1;
- (id)templateCellViewModel;
- (void)setTemplateCellViewModel:(id)arg1;
- (id)templateIconContainerView;
- (void)setTemplateIconContainerView:(id)arg1;
- (id)templateIconImageView;
- (void)setTemplateIconImageView:(id)arg1;
- (id)templateIconBackgroundView;
- (void)setTemplateIconBackgroundView:(id)arg1;
- (id)templateNameLabel;
- (void)setTemplateNameLabel:(id)arg1;
- (BOOL)isTemplateCellSelected;
- (void)setIsTemplateCellSelected:(BOOL)arg1;
- (id)loadingPagView;
- (void)setLoadingPagView:(id)arg1;
- (id)selectedMaskView;
- (void)setSelectedMaskView:(id)arg1;
- (id)selectedDefaultView;
- (void)setSelectedDefaultView:(id)arg1;
- (id)selectedEditableView;
- (void)setSelectedEditableView:(id)arg1;
- (id)progressMaskView;
- (void)setProgressMaskView:(id)arg1;
- (void).cxx_destruct;
@end

