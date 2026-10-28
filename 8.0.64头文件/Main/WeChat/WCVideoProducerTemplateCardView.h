@interface WCVideoProducerTemplateCardView : UICollectionViewCell <WCMVVMViewComponent>
{
    BOOL _isAnimPlaying; // +0x8
    WCVideoProducerTemplateCellViewModel * _cellVM; // +0x10
    UIView * _templateCardContainerView; // +0x18
    UILabel * _templateNameLabel; // +0x20
    UIImageView * _templateCardImageView; // +0x28
    UIView * _launchMJAppTipsCardView; // +0x30
    UIView * _selectedMaskView; // +0x38
    WCProgressMaskView * _progressMaskView; // +0x40
    NSString * _loadedAnimFilePath; // +0x48
}
+ (id)cellIdentifier;
+ (id)headerIdentifier;
+ (double)maxNameLabelHeight;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)loadView;
- (void)startPlayingDemo;
- (void)stopPlayingDemo;
- (void)_initView;
- (void)_initLaunchMJAppTipsCardViewIfNeeded;
- (void)_loadTemplateCardImage;
- (void)_loadTemplateNameLabel;
- (void)_updateTemplateNameLabelAccessibility;
- (void)_loadPreviewAnimAndPlay:(BOOL)arg1;
- (void)_loadPreviewAnimFromLocalFilePath:(id)arg1 andPlay:(BOOL)arg2;
- (void)_startPreviewAnimWithDecoder:(id)arg1;
- (void)_stopPreviewAnim;
- (void)_resetPreviewDefaultImage;
- (void)didChangeViewModel:(id)arg1 fromOldObject:(id)arg2 toNewObject:(id)arg3;
- (void)viewModel:(id)arg1 didChangeProperty:(id)arg2 fromOldValue:(id)arg3 toNewValue:(id)arg4;
- (id)observingPropertyKeyPathsForViewModel;
- (void)updateSubviewForPropertyKeyPath:(id)arg1;
- (id)cellVM;
- (void)setCellVM:(id)arg1;
- (id)templateCardContainerView;
- (void)setTemplateCardContainerView:(id)arg1;
- (id)templateNameLabel;
- (void)setTemplateNameLabel:(id)arg1;
- (id)templateCardImageView;
- (void)setTemplateCardImageView:(id)arg1;
- (id)launchMJAppTipsCardView;
- (void)setLaunchMJAppTipsCardView:(id)arg1;
- (id)selectedMaskView;
- (void)setSelectedMaskView:(id)arg1;
- (id)progressMaskView;
- (void)setProgressMaskView:(id)arg1;
- (id)loadedAnimFilePath;
- (void)setLoadedAnimFilePath:(id)arg1;
- (BOOL)isAnimPlaying;
- (void)setIsAnimPlaying:(BOOL)arg1;
- (void).cxx_destruct;
@end
